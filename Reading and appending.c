//writing marks and name of n student and append the information 
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
int i;
int n;
printf("enter the number of students:");
scanf("%d",&n);
    struct student students[5];
    FILE*filepointer=fopen("students.txt","a");
    
    //using conditional statement to declare error 
    if(filepointer==NULL){
      printf("error in opening the file!");
      exit(1);
      }
      for(i=n; i<n; i++){
      printf("enter the names of students: %d\n",i+1);
      scanf("%s", &students[i].name);
      
      
      printf ("enter the marks of students: %f\n",i+1);
      scanf("%f", &students[i].marks);
      
      }
      fclose(filepointer);
      printf("the data is appended successful");
      
    return 0;
}
