//Task #1 (Class and Objects)

#include <iostream>
using namespace std;

class Book {
private:
    int price;
    string title;
    string author;

public:

    void setPrice(int p) {
        price = p;
    }

    void setTitle(string t) {
        title = t;
    }
    
    void setAuthor(string a) {
        author = a;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book book1;
    book1.setTitle("Harry Potter");
    book1.setAuthor("J.K. Rowling");
    book1.setPrice(1500);
    book1.display();

    cout << "------------------------" << endl;

    Book book2;
    book2.setTitle("Programming in C++"); // Fixed typo
    book2.setAuthor("Robert Lafore");
    book2.setPrice(2200);
    book2.display();

    return 0;
}