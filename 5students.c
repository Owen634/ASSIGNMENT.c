//program to prompt the structure of a book
/*
Author:Murithi Owen Muthomi
Reg no:CT101/G/23216/24
Date:31/10/2024
*/

//preprocessor directive-printf(),scanf()

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[30];
	int marks;
}student1,student2,student3,student4,student5;

int main(){
	
	strcpy(student1.name,"james");
	student1.marks = 75;
	strcpy(student2.name,"postekoglal");
	student2.marks = 60;
	strcpy(student3.name,"maresca");
	student3.marks = 55;
	strcpy(student4.name,"ndwoski");
	student4.marks = 65;
	strcpy(student5.name,"amorim");
	student5.marks = 80;


FILE *fptr;
fptr     = fopen("C:\\users\\mmaitethia\\Documents\\projects\\sample.txt","w");


	 if (fptr==NULL){
 	printf("Error opening the file");
 	exit(1);
	 }
	
printf("name: %s \n",student1.name);
printf("marks %d\n",student1.marks);

printf("name: %s \n",student2.name);
printf("marks %d \n",student2.marks);

printf("name: %s \n",student3.name);
printf("marks %d \n",student3.marks);

printf("name: %s \n",student4.name);
printf("marks %d \n",student4.marks);

printf("name: %s \n",student5.name);
printf("marks %d \n",student5.marks);


 fprintf(fptr, "%s \n",student1.name);
 fprintf(fptr, "%d \n",student1.marks);
 
 fprintf(fptr, "%s \n",student2.name);
 fprintf(fptr, "%d \n",student2.marks);
 
 fprintf(fptr, "%s \n",student3.name);
 fprintf(fptr, "%d \n",student3.marks);
 
 fprintf(fptr, "%s \n",student4.name);
 fprintf(fptr, "%d \n",student4.marks);
 
 fprintf(fptr, "%s \n",student5.name);
 fprintf(fptr, "%d \n",student5.marks);
 
fclose(fptr);


return 0;
}
