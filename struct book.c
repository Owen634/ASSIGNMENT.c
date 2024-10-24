//program to define the structure of a book

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
	strcpy(book1.title,"introduction to C programming");
	strcpy(book1.author,"John Smith");
	book1.publicationyear = 2022;
	strcpy(book1.ISBN,"9780131103627");
	book1.price = 49.99;
	
printf("title: %s \n",book1.title);
printf("author: %s \n",book1.author);
printf("publicationyear %d \n",book1.publicationyear);
printf("ISBN: %s \n",book1.ISBN);
printf("price: %.2f \n",book1.price);

return 0;
}
