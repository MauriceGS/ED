int main()
{
    Biblioteca b;
    Libro libro1("The Lord of the Rings", "Tolkien", 1000, 1, "A", 1950);
    Libro libro2("Harry Potter", "Rowling", 350, 1, "B", 2000);
    Libro libro3("The Hobbit", "Tolkien", 300, 1, "C", 1940);
    Libro libro4("Black Beauty", "Sewell", 455, 1, "D", 1877);
    Libro libro5("Lolita", "Nabokov", 390, 1, "E", 1955);

    b.agregar(libro1);
    b.agregar(libro2);
    b.agregar(libro3);
    b.agregar(libro4);
    b.agregar(libro5);

    b.imprime("The Lord of the Rings");
    b.imprime("Harry Potter");
    b.imprime("The Hobbit");
    b.imprime("Black Beauty");
    b.imprime("Lolita");

    b.eliminar("Lolita");
	
    cout << endl<<"Libros antes de 2000"<<endl;
    b.antes(2000);

    cout << endl<<"Libros despues de 2000"<<endl;
    b.despues(2000);
    
    cout << endl<<"Libros entre 1950 y 2000"<<endl;
    b.rangoFecha(1950,2000);

    cout << "Libros con autor: Rowling" << endl;
    b.verAutor("Rowling");

    cout << endl<<"Libros con Editorial: A" << endl;
    b.verEditorial("A");

   

    return 0;
}
