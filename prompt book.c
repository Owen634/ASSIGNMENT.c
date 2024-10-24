//program to prompt the structure of a book

/*
Author:Murithi Owen Muthomi
Reg no:CT101/G/23216/24
Date:23/10/2024
*/
//preprocessor directive-printf(),scanf()

#include <stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	int publicationyear;
	char ISBN[13];
	float price;
}book1,book2;

int main(){
	//struct book book1,book2;
	//strcpy(book1.title,"introduction to C programming");
	printf("Enter the book title:");
	scanf("%s",&book1.title);
	printf("title: %s \n",book1.title);
	
    printf("Enter the author:");
	scanf("%s",&book1.author);
	printf("author: %s \n",book1.author);
	
	
		printf("Enter the publicationyear:");
	scanf("%d",&book1.publicationyear);
	printf("publicationyear: %d \n",book1.publicationyear);

	printf("Enter ISBN:");
	scanf("%s",&book1.ISBN);
	printf("ISBN: %s \n",book1.ISBN);
	
	printf("Enter price:");
	scanf("%f",&book1.price);
	printf("price: %.2f \n",book1.price);
	
		
printf("title: %s \n",book1.title);
printf("author: %s \n",book1.author);
printf("publicationyear %d \n",book1.publicationyear);
printf("ISBN: %s \n",book1.ISBN);
printf("price: %.2f \n",book1.price);

return 0;
}
