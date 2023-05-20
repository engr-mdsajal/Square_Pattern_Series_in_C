//C program to print number pattern with 1/0 at even/odd position
#include<stdio.h>
 int main(){

   int rows,cols,i,j;

   printf("Enter Numbers of Columns=");
   scanf("%d",&cols);

   printf("Enter Numbers of rows=");
   scanf("%d",&rows);

   for(i=1;i<=cols;i++){

    for(j=1;j<=rows;j++){

        if(j%2!=1){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    printf("\n");
   }

 return 0;
 }
