//Program to calculate charges in the library
/*
program to calcuate charges in the library
Author:Murithi Owen Muthomi
Reg no:CT101/G/23216/24
Date:30/09/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>

int main(){
	int BookID ='BI'//%d
	;int DueDate ='DD'//%d
	;int ReturnDate='RD'//%d
	;float Overdue ='Od'//%f
	;int but ='b'//%d
	;float Charges='C'//%f
	
	;printf("Enter the BookID:");
	scanf("%d",&BookID);
	printf("The BookID is \t %d \n",BookID);
	
	printf("Enter the DueDate:");
	scanf("%d",&DueDate);
	printf("The Due Date is \t %d \n",DueDate);
	
	printf("Enter the ReturnDate:");
	scanf("%d",&ReturnDate);
	printf("The ReturnDate is \t %d \n",ReturnDate);
	
	Overdue =(ReturnDate-DueDate);
	printf("The Overdue is:%.1f \n",Overdue);
	
	
	if(Overdue <=7){
	Charges=Overdue*20;
	printf("The Charges is:%.1f \n",Charges);}
	
	
    
	  else if(Overdue<=14){
    ;Charges=Overdue*50
    ;printf("The Charges is:%.1f \n",Charges);}
    
   
    
  
      else{
	  (Overdue>=15)
    ;Charges=Overdue*100
    ;printf("The Charges is:%.1f \n",Charges);}
 
	return 0;
}
	
