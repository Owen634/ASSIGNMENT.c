//program to calculate compound interest

/*
Progam to calaculate compound interest
Author:Murithi Owen Muthomi
Reg No:CT101/G/23216/24
Date:21/09/2024`
*/

//preprocessor directive-printf(),scanf

#include <stdio.h>
int main(){
	int principal ='p'//%d
	;float time ='t'//%f
	;float rate ='r'//%f
	;float compoundInterest ='CI'//%f
	;float numberofcompoundingayear ='n'//%f
	
 

	;printf("Enter the principal amount: ");
	scanf("%d",&principal);
	printf("The princpal is \t %d \n",principal);
	
	
	;printf("Enter the time(in years):");
	scanf("%f", &time);
	printf("The time is \t %.1f \n",time);
	
	
	
   	;printf("Enter the rate of interest:(%%)");
	scanf("%f", &rate);
	printf("The rate is \t %.2f \n",rate);
	
	
    ;printf("Enter the number compounded yearly:");
    scanf("%f", &numberofcompoundingayear);
    printf("The number compounded is \t %.1f \n",numberofcompoundingayear);
    
    compoundInterest = principal*pow(1+rate/(100*numberofcompoundingayear),time*numberofcompoundingayear) -principal;
		
	printf("The compoundInterest is \t %.2f\n",compoundInterest);
	
	return 0;
}