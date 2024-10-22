//c structure 
#include<stdio.h>
#include<string.h>

struct students
{
   char name[30];
   char reg_no[15];
   char email[20];
   int phone_no[10];
   int ID_no[10];
   float height;
   float marks;
   };
   int main(){
   struct students student1;
   
   //student1 details;
   strcpy(student1.name,"Nancy");
   strcpy(student1.reg_no,"CT101/G/23248/24");
   strcpy(student1.email, "NANCYMORAA207@GMAIL.COM");
   strcpy(student1.phone_no,"0794255521");
   student1. marks=100;
   student1. height=5.5;
   
   //print student1 details;
  
   printf("name: %s\n", student1.name);
   
   printf("height: %f\n", student1.height);
   printf("reg_no: %s\n", student1.reg_no);
   printf("email: %s\n", student1.email);
   printf("phone_no: %f\n", student1.phone_no);
   
   
   return 0;
   }
   
    
