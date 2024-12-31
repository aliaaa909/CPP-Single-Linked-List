
#include <iostream>
using namespace std;

struct Book{
    string title, writer, publisher;
    int publication_year, pages;

    //pointer yang menunjukkan elemen berikutnya
    Book *next;

    };

Book *head,*tail,*cur;

void CreateLinkedList(string title, string writer, string publisher, int publication_year, int pages){
    head = new Book();
    head->title = title;
    head->writer = writer;
    head->publisher = publisher;
    head->publication_year = publication_year;
    head->pages = pages;
    head->next = NULL;
    tail = head;
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

    PrintSingleLinkedList();
    }
