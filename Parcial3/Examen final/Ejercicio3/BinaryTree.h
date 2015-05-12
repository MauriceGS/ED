//
//  BinaryTree.h
//  BinaryTree
//
//  Created by Vicente Cubells Nonell on 06/04/15.
//  Copyright (c) 2015 Vicente Cubells Nonell. All rights reserved.
//

#ifndef BinaryTree_BinaryTree_h
#define BinaryTree_BinaryTree_h

#include "BNode.h"
#include <string>

using namespace std;

namespace vcn {

    template <class T>
    class BinaryTree {
    private:
        BNode<T> * root = nullptr;

    public:
        BinaryTree() {}
        virtual ~BinaryTree();

        bool empty();

        void clear();
        void clear(BNode<T> * node);

        BNode<T> * getRoot() const;
        void setRoot(BNode<T> * node);

        bool insert(BNode<T> * parent, T value);
        bool insert(BNode<T> * parent, BNode<T> * value);

        void preOrder() const;
        void preOrder(BNode<T> * node) const;

        void inOrder() const;
        void inOrder(BNode<T> * node) const;

        void postOrder() const;
        void postOrder(BNode<T> * node) const;

        void isLeaf() const;
        void isLeaf(BNode<T> * node) const;

        void ancestors(BNode<T> * node) const;
        void original();
        void printTree(BNode<T> * node, string str, string left, string right);


        BNode <T> *original(char * pre, int pI, int pF, char * inO, int iI, int iF);

    };

    template <class T>
    BinaryTree<T>::~BinaryTree()
    {
        clear();
    }

    template <class T>
    bool BinaryTree<T>::empty()
    {
        return root == nullptr;
    }

    template <class T>
    void BinaryTree<T>::clear()
    {
        clear(root);
    }

    template <class T>
    void BinaryTree<T>::clear(BNode<T> * node)
    {
        if (node) {
            clear(node->getLeft());
            clear(node->getRight());

            delete node;
        }
    }

    template <class T>
    BNode<T> * BinaryTree<T>::getRoot() const
    {
        return root;
    }

    template <class T>
    void BinaryTree<T>::setRoot(BNode<T> * node)
    {
        if (!empty()) {
            node->setLeft(root);
            root->setParent(node);
            root = node;
        }
        else {
            root = node;
        }
    }

    template <class T>
    bool BinaryTree<T>::insert(BNode<T> * parent, T value)
    {
        BNode<T> * node = new BNode<T>(value);
        bool inserted = insert(parent, node);

        if (!inserted) delete node;

        return inserted;
    }

    template <class T>
    bool BinaryTree<T>::insert(BNode<T> * parent, BNode<T> * value)
    {
        bool inserted = false;

        if (empty() || !parent) {
            setRoot(value);
            inserted = true;
        }
        else {
            if (!parent->getLeft()) {
                parent->setLeft(value);
                value->setParent(parent);
                inserted = true;
            }
            else if (!parent->getRight()) {
                parent->setRight(value);
                value->setParent(parent);
                inserted = true;
            }
        }

        return inserted;
    }

    template <class T>
    void BinaryTree<T>::preOrder() const
    {
        preOrder(root);
    }

    template <class T>
    void BinaryTree<T>::preOrder(BNode<T> * node) const
    {
        if (node) {
            /* Procesar el nodo */
            std::cout << *node << std::endl;

            /* Invocar a los hijos */
            preOrder(node->getLeft());
            preOrder(node->getRight());

        }
    }

    template <class T>
    void BinaryTree<T>::inOrder() const
    {
        inOrder(root);
    }

    template <class T>
    void BinaryTree<T>::inOrder(BNode<T> * node) const
    {
        if (node) {

            /* Invocar al hijo izquierdo */
            inOrder(node->getLeft());

            /* Procesar el nodo */
            std::cout << *node << std::endl;

            /* Invocar al hijo derecho */
            inOrder(node->getRight());
        }
    }

    template <class T>
    void BinaryTree<T>::postOrder() const
    {
        postOrder(root);
    }

    template <class T>
    void BinaryTree<T>::postOrder(BNode<T> * node) const
    {
        if (node) {
            /* Invocar a los hijos */
            postOrder(node->getLeft());
            postOrder(node->getRight());

            /* Procesar el nodo */
            std::cout << *node << std::endl;
        }
    }

    template <class T>
    void BinaryTree<T>::isLeaf() const
    {
        isLeaf(root);
    }

    template <class T>
    void BinaryTree<T>::isLeaf(BNode<T> * node) const
    {
        if (node) {
            if (!node->getLeft() && !node->getRight()) {
                std::cout << *node << std::endl;
            }
            else {
                isLeaf(node->getLeft());
                isLeaf(node->getRight());
            }
        }
    }

    template <class T>
    void BinaryTree<T>::ancestors(BNode<T> * node) const
    {
        if (node) {
            std::cout << *node << " -> ";
            ancestors(node->getParent());
        }
    }


    template <class T>
    BNode<T> *BinaryTree<T>::original(char * pre, int preInicio, int preFin, char * inO, int inInicio, int inFin){

      if(preInicio == preFin)
    {
        BNode<T> * n1 = new BNode<T>(pre[preInicio]);
        return n1;
    }

    if(preFin - preInicio == 1)
    {
		if (pre[preInicio] == inO[inInicio])
		{
			BNode<T> * n1 = new BNode<T>(pre[preInicio]);
			BNode<T> * n2 = new BNode<T>(pre[preInicio + 1]);
			cout << endl << "P: " << n1->getInfo() << endl;
			cout << endl << "H: " << n2->getInfo() << endl;
			n1->setRight(n2);
			n2->setParent(n1);
			return n1;
		}
		else
		{
			BNode<T> * n1 = new BNode<T>(pre[preInicio + 1]);
			BNode<T> * n2 = new BNode<T>(pre[preInicio]);
			n1->setLeft(n2);
			n2->setParent(n1);
			return n1;
		}
    }
    int raizIn=0;

    for(int i = inInicio; i<inFin; i++)
    {
        if(inO[i]==pre[preInicio])
            raizIn= i;
    }

    int elemIzq = raizIn - inInicio;

    BNode<T> * n = new BNode<T>(pre[preInicio]);
    BNode<T> *izq = original(pre, preInicio + 1, preInicio + elemIzq, inO, inInicio, raizIn - 1);
    if (izq != NULL)
    {
        n->setLeft(izq);
        izq->setParent(n);
    }

    BNode<T> *der = original(pre, preInicio + elemIzq + 1, preFin, inO, raizIn + 1, inFin);
    if (der != NULL)
    {
        n->setRight(der);
        der->setParent(n);
    }

    return n;




    }

template <class T>
void BinaryTree<T>::printTree(BNode<T> *node, string str, string left, string right)
{

    if (node != NULL)
    {
        printTree(node->getRight(), right + "  ", right + "  |", right + "   ");
        cout << str << "|----" << *node << endl;
        printTree(node->getLeft(), left + "  ", left + "   ", left + "  |");
    }



}

}

#endif
