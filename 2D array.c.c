//program to calculate 2D array
/*
Author:Murithi Owen Muthomi
Reg no:CT101/G/23216/24
Date:16/10/2024
*/
//preprocessor directive-printf(),scanf()

#include<stdio.h>
int main(){
	int i,j;
	  int marks[2][3]={ {40,50,60},{80,30,92} };
	  for(i=0;i<2;i++){
	      for(j=0;j<3;j++){
	  printf("marks[%d][%d]=%d \n",i,j,marks[i][j]);
 }
	  }
return 0;
}