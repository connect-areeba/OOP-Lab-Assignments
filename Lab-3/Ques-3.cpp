#include<iostream>
#include<string>
using namespace std;

class bookType{
    string title;
    string authors[4];
    int numOfAuthors;
    string publisher;
    string ISBN;
    double price;
    int copiesInStock;
public:

    bookType();
    bookType(string t, string a[], int n, string p, string i, double pr, int c);

    void setTitle(string t);
    string getTitle();
    bool checkTitle(string t);

    void setAuthors(string a[], int n);
    void showAuthors();
    int getNumOfAuthors();

    void setPublisher(string p);
    string getPublisher();

    void setISBN(string i);
    string getISBN();
    bool checkISBN(string i);

    void setPrice(double pr);
    double getPrice();

    void setCopies(int c);
    void updateCopies(int c);
    int getCopies();

    void showBook();
};

bookType::bookType(){
    title = "";
    numOfAuthors = 0;
    publisher = "";
    ISBN = "";
    price = 0.0;
    copiesInStock = 0;
}

bookType::bookType(string t, string a[], int n, string p, string i, double pr, int c){
    title = t;
    numOfAuthors = n;

    for (int j = 0; j < n; j++)
        authors[j] = a[j];

    publisher = p;
    ISBN = i;
    price = pr;
    copiesInStock = c;
}

void bookType::setTitle(string t){ 
    title = t; 
}

string bookType::getTitle(){ 
    return title; 
}

bool bookType::checkTitle(string t){ 
    return title == t; 
}

void bookType::setAuthors(string a[], int n){
    numOfAuthors = n;
    for (int i = 0; i < n; i++)
        authors[i] = a[i];
}

void bookType::showAuthors(){
    for (int i = 0; i < numOfAuthors; i++)
        cout<<authors[i]<<endl;
}

int bookType::getNumOfAuthors(){ 
    return numOfAuthors; 
}

void bookType::setPublisher(string p){ 
    publisher = p; 
}

string bookType::getPublisher(){ 
    return publisher; 
}

void bookType::setISBN(string i){ 
    ISBN = i; 
}

string bookType::getISBN(){ 
    return ISBN; 
}

bool bookType::checkISBN(string i){ 
    return ISBN == i; 
}

void bookType::setPrice(double pr){ 
    price = pr; 
}

double bookType::getPrice(){ 
    return price; 
}

void bookType::setCopies(int c){ 
    copiesInStock = c; 
}

void bookType::updateCopies(int c){ 
    copiesInStock += c; 
}

int bookType::getCopies(){ 
    return copiesInStock; 
}

void bookType::showBook() 
{
    cout<<"Title: "<<title<<endl<<"Publisher: "<<publisher<<endl<<"ISBN: "<<ISBN<<endl
	<<"Price: "<<price<<endl<<"Copies in stock: "<<copiesInStock<<endl<<"Authors:"<<endl;
    showAuthors();
}

int main()
{
    bookType books[100];
    int count = 0;

    string authors1[2] = {"Ali Ahmed", "Sara Khan"};

    books[count++] = bookType("C++ Programming", authors1, 2, "Pearson", "978-12345", 1500.0, 10);

    string searchTitle = "C++ Programming";
    for (int i = 0; i < count; i++){
        if (books[i].checkTitle(searchTitle)){
            cout << "Book found by title:\n";
            books[i].showBook();
        }
    }

    string searchISBN = "978-12345";
    for (int i = 0; i < count; i++){
        if (books[i].checkISBN(searchISBN)){
            cout << "\nBook found by ISBN:\n";
            books[i].showBook();

            books[i].updateCopies(5);
            cout<<"\nUpdated stock: "<<books[i].getCopies()<<endl;
        }
    }

    return 0;
}
