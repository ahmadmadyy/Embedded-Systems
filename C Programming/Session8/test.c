#include <stdio.h>

int main(){
    long unsigned int x;
    long unsigned int y;
    char bitN;
    printf("Enter any number: "); 
    scanf("%lu", &x);
    y=x;
    printf("Enter nth bit to toggle (0-31): ");
    scanf_s("%d",&bitN);
    printf("%lu", x);
    printf("\n");
    printf("Number before toggling %d bit: %lu (in decimal) \n", bitN, y );
    printf("Number after toggling %d bit: %lu (in decimal)", bitN, y^(1<<bitN));

}