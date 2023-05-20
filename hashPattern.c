//# print with Square Patterns

#include<stdio.h>
int main(){

    int rows,cols,x,y;

    printf("Enter Number of Rows= ");
    scanf("%d",&rows);

    printf("Enter Number of colums= ");
    scanf("%d",&cols);

    for(x=1;x<=rows;x++){

        for(y=1;y<=cols;y++){
            printf("#");
        }

        printf("\n");
    }




return 0;
}
