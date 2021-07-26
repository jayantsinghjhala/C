#include <stdio.h>
#include <string.h>
 
typedef struct Books
{
    int bookid;
    char title[50];
    char author[50];
    float price;

} Book;

void print(struct Books Book)
{
    printf( "Book's book_id : %d\n",Book.bookid);
    printf( "Book title : %s\n",Book.title);
    printf( "Book author : %s\n",Book.author);
    printf( "Book price : %.2f\n",Book.price);
}
 
void main( ) {

    Book book;
 
    book.bookid = 56778800;
    strcpy( book.title, "The Monk Who Sold His ferrari");
    strcpy( book.author, "robin Sharma"); 
    book.price=2000;
    print(book);
}