//function to calculate electricitybill
/*
function to calculate electricitybill
Author:Murithi Owen Muthomi
Reg no:CT101/G/23216/24
Date:17/10/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>
#include<math.h>
float totalBill;
float unitsConsumed(float a,float b,float c,float d);

int main(){
     
	 float totalBill; 
	 float unitsConsumed;
	 int customerID;
	 char customerName[10];
	 float a,b,c,d;
	 
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
	
	
    printf("Enter Customer Name: ");
    scanf(" %s", customerName); 
		
		
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
 	

 	a=1.20;
 	b=1.50;
 	c=2.07;
 	d=2.30;
 	
 	
	printf("The customerID is %d \n",customerID);
	 
	printf("The customerName is: %s \n",customerName);	

 	printf("The unitsConsumed are %.2f \n",unitsConsumed);



   if(unitsConsumed<=83.4){
	   totalBill=100;
       return totalBill;
   }
	
   else if(unitsConsumed<=199){
	   totalBill=unitsConsumed*a;
	    return totalBill;
   }
   		
   else if(unitsConsumed<=399){
   	totalBill=unitsConsumed*b;
	    return totalBill;
   }
	
   else if(unitsConsumed<=599){
   	totalBill=unitsConsumed*c;
	   return totalBill;
   }	
	
   else {
        (unitsConsumed >=600);
        totalBill=unitsConsumed*d;
	   return totalBill; 
   }
   return 0;
}	
