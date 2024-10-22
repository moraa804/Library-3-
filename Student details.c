/*
author: Nancy moraa Kebaso 
reg no:CT101/23248/24
*/
//c structure 
#include<stdio.h>
#include<string.h>

struct student{ 
   char name[30];
   char reg_no[15];
   char email[20];
   int phone_no[10];
   int ID_no[10];
   float height;
   float marks;
   } student1;
   int main(){
   //struct student1;
   //strcpy(student1.name,"Nancy");
   printf("enter your name:");
   scanf("%s", student1.name);
   student1.height=5.5;
   strcpy(student1.reg_no,"CT101/G/23248/24");
   strcpy(student1.email, "NANCYMORAA207@GMAIL.COM");
   strcpy(student1.phone_no, "94255521");
   
   printf("name: %s\n", student1.name);
   /*
   printf("height: %f\n", student1.height);
   printf("reg_no: %s\n", stident1.reg_no);
   printf("email: %s\n", student1.email);
   printf("phone_no: %f\n", student1.phone_no);
   */
   
   return 0;
   }

   
