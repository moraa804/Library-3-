//writing the students name and marks and store the data in a file
/*
author: Nancy moraa Kebaso 
reg no:CT101/G/23248/24
*/

#include<stdio.h>

struct student
{
char name[50];
int marks;
};
int main()
{
int i=5;
char I=100;
    struct student students[5];
    FILE*filepointer=fopen("students.txt","w");
    
    //using conditional statement to declare error 
    if(filepointer==NULL){
      printf("error in opening the file!");
      exit(1);
      }
    for(i=0; i<=4; ++i){
      printf("enter the names of students: %d\n",i+1);
      scanf("%s", &students[i].name);
      }
      for(i=0; i<=4; ++i){
      printf ("enter the marks of students: %f\n",i+1);
      scanf("%f", &students[i].marks);
      
      }
      fclose(filepointer);
      printf("the file is written and saved successful");
      
    return 0;
}
