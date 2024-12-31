
#include <iostream>
using namespace std;

struct Book{
    string title, writer, publisher;
    int publication_year, pages;

    //pointer yang menunjukkan elemen berikutnya
    Book *next;

    };

Book *head,*tail,*cur, *newNode, *del;

void CreateLinkedList(string title, string writer, string publisher, int publication_year, int pages){
    head = new Book();
    head->title = title;
    head->writer = writer;
    head->publisher = publisher;
    head->publication_year = publication_year;
    head->pages = pages;
    head->next = newNode;
    tail = head;
    }

void addLast(string title, string writer, string publisher, int publication_year, int pages){
    newNode = new Book();
    newNode->title = title;
    newNode->writer = writer;
    newNode->publisher = publisher;
    newNode->publication_year = publication_year;
    newNode->pages = pages;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
    }

void RemoveFirst(){
    del = head;
    head = head->next;
    delete del;
    }


void PrintSingleLinkedList(){
    cur = head;
    while(cur != NULL){
    cout << "title Book = " << cur->title << endl;
    cout << "writer Book = " << cur->writer << endl;
    cout << "publisher Book = " << cur->publisher << endl;
    cout << "publication_year = " << cur->publication_year << endl;
    cout << "pages = " << cur->pages << endl;
    cout << endl;

    cur = cur-> next;
    }
}
int main(){
    CreateLinkedList("kata","rintik sedu","gramedia",2012,200);

    cout << endl;

    addLast("ayah","nabila","guepedia",2019,209);

    cout << endl;

    RemoveFirst();
    PrintSingleLinkedList();


    }
