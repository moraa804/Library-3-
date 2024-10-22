//c structure to show book details;
 /*
 author: Nancy moraa Kebaso 
 reg no:CT101/G/23248/24
*/

#include<stdio.h>
#include<string.h>

struct books
{
char author[30];
char title[30];
int publication_year;
int ISBN[13];
float price;
};
int main()
{
//book type;
  struct books book1;
  //book1 specifications;
  printf("enter book1. title:\n");
  scanf("%s", &book1. title);
  printf("enter book1. author:\n");
  scanf("%s", &book1. author);
  printf("enter book1. ISBN:\n");
  scanf("%d", &book1. ISBN);
  printf("enter book1.publication_year:\n");
  scanf("%d", &book1. publication_year);
  printf("enter book1. price:\n");
  scanf("%f", &book1. price);
  /*
  strcpy(book1.title,"introduction to C_programming");
  strcpy(book1.author,"John_Smith");
  strcpy(book1.ISBN,"9780131103627");
  book1. publication_year=2022;
  book1. price=49.99;
  */
  //print book1 information;
  printf("book1 title: %s\n", book1. title);
  printf("book1 author: %s\n", book1. author);
  printf("book1 publication_year: %d\n", book1. publication_year);
  printf("book1 ISBN: %d\n", book1. ISBN);
  printf("book1 price: %f\n", book1. price);
  
  return 0;
  }
  
  

    
