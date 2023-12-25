#include <stdio.h>

struct University
{
    int buildings;
    float price;
    char *course; 
};

int main()
{
    struct University GUC = {4,200.5,"Embedded"};
    struct University AUC = {7,750.7,"Computer Science"};
    struct University BUE = {3,350.4,"Medicine"};

    printf("GUC Buildings: %d , Price: %0.2f , course: %s \n",GUC.buildings,GUC.price,GUC.course);
    printf("AUC Buildings: %d , Price: %0.2f , course: %s \n",AUC.buildings,AUC.price,AUC.course);
    printf("BUE Buildings: %d , Price: %0.2f , course: %s \n",BUE.buildings,BUE.price,BUE.course);
}