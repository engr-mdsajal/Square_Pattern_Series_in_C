#include<stdio.h>
int main(){


  int row,col,num;

  printf("Enter Rows=");
  scanf("%d",&num);

  for(row=1;row<=num;row++){


    for(col=1;col<=row;col++){

             printf("%d",col);

    }

    printf("\n");


  }



return 0;

}
