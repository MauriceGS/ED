#include <iostream>
#include "BinaryTree.h"
#include "BNode.h"


#include <iostream>


using namespace vcn;
using namespace std;

int main()
{
   char pre[]={'G','E','A','I','B', 'M', 'C', 'L','D','F','K','J','H'};
   char in[]={'I','A','B','E','G','L','D','C','F','M','K','H','J'};

      int length = sizeof(in)/sizeof(in[0]);


   BinaryTree<char> * nuevo= new BinaryTree<char>();

   BNode<char> *n =new BNode<char>(*nuevo->original(pre,0,length-1,in,0,length-1)); //metodo dentro de la clase de BInaryTree

        nuevo= new BinaryTree<char>(n);
        nuevo->preOrder();
   cout<<endl;

   nuevo->printTree(nuevo->getRoot(),"","","");
   nuevo = new BinaryTree<char>(n);
   cout << endl;

    nu->printTree(nu->getRoot(), "", "", "");
    nu->inOrder();
    cout<<endl;

    return 0;
}
