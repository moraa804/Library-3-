//writing the students name and marks and store the data in a file
/*
author: Nancy moraa Kebaso 
reg no:CT101/G/23248/24
*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
char name[50];
int marks;
};
int main()
{
int i=5;
char name;
char filepointer;
int flag;
    struct student students[5];
    //writing the file
    filepointer=fopen("students.bin","wb");
    if(filepointer==NULL){
      printf("error in opening the file!");
      exit(1);
     }
    for(i=0; i<=4; ++i){
      printf("enter the names of student: %d\n",i++);
      scanf("%s", &students[i].name);
      printf ("enter the marks of student: %f\n",i++);
      scanf("%f", &students[i].marks);
      flag=fwrite(&students, sizeof(struct student),5, filepointer);
      }
      fclose(filepointer);
      printf("the file is written successful\n");
      //reading the file
      filepointer=fopen("students.bin","rb");
      if(filepointer==NULL){
      printf("error in opening the file");
      exit(1);
      }
      
      fclose(filepointer);
      printf("data read from the file\n");
      for(i=0;i<=4;i++){
      printf("name:%s,marks:%d",students[i].name, students[i].marks);
      }
    return 0;
}    



    
