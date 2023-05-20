//C program to print square number pattern

 #include<stdio.h>
 int main(){

   int rows,cols,i,j;

   printf("Enter Numbers of Columns=");
   scanf("%d",&cols);

   printf("Enter Numbers of rows=");
   scanf("%d",&rows);

   for(i=1;i<=cols;i++){

    for(j=1;j<=rows;j++){

        printf("1");
    }
    printf("\n");
   }

 return 0;
 }
