//program to prompt the marks and names of students
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
	
	printf("Enter name:");
	scanf("%s",&student1.name);
	printf("name: %s \n",student1.name);
	
	
		printf("Enter marks:");
	scanf("%d",&student1.marks);
	printf("marks: %d \n",student1.marks);
	
	

FILE *fptr;
fptr     = fopen("C:\\users\\mmaitethia\\Documents\\projects\\sample.txt","w");


	 if (fptr==NULL){
 	printf("Error opening the file");
 	exit(1);
	 }


 fprintf(fptr, "%s \n",student1.name);
 fprintf(fptr, "%d \n",student1.marks);
 

 

fclose(fptr);


return 0;
}
