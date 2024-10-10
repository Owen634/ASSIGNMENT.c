//program to calculate electricity bill charges
/*
Author:Murithi Owen muthomi
Reg No:CT101/G/23216/24
Date:8/10/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>
int main() {
	
	int customerID;
	char customername[50];
	float unitsconsumed;
    float charges;
    float totalbill;
    
    
 printf("Enter customerID:");
 scanf("%d", &customerID);
 printf("The customerID: is %d \n",customerID);
 
 printf("Enter customername:");
 scanf("%s",customername);
 printf("The customername is: %s \n",customername);
 
 printf("Enter unitsconsumed:");
 scanf("%f",&unitsconsumed);
 printf("Unitsconsumed:  %.2f \n",unitsconsumed);

   
   if(unitsconsumed<83.5){
   	totalbill=100;
   	printf("the totalbill is %.2f \n");
   }
   
   else if(unitsconsumed<200){
   	totalbill=unitsconsumed*1.20;
    printf("the totalbill is %.2f \n",totalbill);
   }  	
    
    else if(unitsconsumed<400){
   	totalbill=unitsconsumed*1.50;
    printf("the totalbill is %.2f \n",totalbill); 
	} 	
    
    else if(unitsconsumed<600){
   	totalbill=unitsconsumed*2.07;
    printf("the totalbill is %.2f \n",totalbill);
	}
	
	else{
		(unitsconsumed>600);
		totalbill=unitsconsumed*2.30;
		printf("the totalbill is %2.f \n",totalbill);
	}
return 0;
 
}