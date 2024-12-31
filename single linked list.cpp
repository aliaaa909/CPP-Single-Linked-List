//
// The pointer variable only points to the next node, while the tail points to null
/* struct LinkListName{
    //component
    //dtaTypeData1 dataName1:
    ...
    LinkListName *next;}

//int main()
    /*
    LinkListName *node1,*nodeN;
    node1 = (LinkListName*) malloc(sizeof(LinkListName));
    nodeN = new LinkListName();
    */
    /*
    node1 -> dataName1 = valData1;
    ...
    node 1 _> next = nodeN;
    ...
    nodeN -> dataNameN = valDataN;
    ...
    nodeN -> next = NULL;
    */
//}

/*Print single linked list =
    LinkListName *cur;
    cur = node1;
    while( cur != NULL ){
        print
        cur = cur -> next;
    }*/


//33333333333333333333333333333333333333333333

#include <iostream>
using namespace std;

struct Book{
    string title, writer, publisher;
    int publication_year, pages;

    //pointer yang menunjukkan elemen berikutnya
    Book *next;

    };

int main (){
    //inisialisasi single linked list
    Book *node1, *node2, *node3;

    //node1 = (Book*) malloc(sizeof(Book));
    //re : node1 ada di structur buku, then do memory allocation dr sizeof linked list of book
    node1 = new Book();
    node2 = new Book(); //read same way as node1
    node3 = new Book();

    //pengisian node1
    node1 -> title = "cpp";
    node1 -> writer = "alia";
    node1 -> publisher = "guepedia";
    node1 -> publication_year = 1990;
    node1 -> pages = 200;
    node1 -> next = node2;

    //pengisian node2
    node2 -> title = "python";
    node2 -> writer = "nabila";
    node2 -> publisher = "gramedia";
    node2 -> publication_year = 1991;
    node2 -> pages = 201;
    node2 -> next = node3;

    //pengisian node3
    node3 -> title = "ruby";
    node3 -> writer = "eci";
    node3-> publisher = "geez";
    node3 -> publication_year = 1992;
    node3 -> pages = 202;
    node3 -> next = NULL;

    //print linkedlist
    Book *cur; //current
    cur = node1;
    while(cur != NULL){
    cout << "title = " << cur->title << endl;
    cout << "writer = " << cur->writer << endl;
    cout << "publisher  = " << cur->publisher << endl;
    cout << "publication year = " << cur->publication_year << endl;
    cout << "pages = " << cur->jumlah_halaman << endl;
    cout << endl;

    cur = cur-> next;

}


}
