#include <stdio.h>

typedef struct University // Another way using typedef
{
    int buildings;
    float price;
    char *course; 
} University;

void function(University* ptr)
{
    ptr->buildings++;
}

int main()
{
    University GUC = {4,200.5,"Embedded"};
    University AUC = {7,750.7,"Computer Science"};
    University BUE = {3,350.4,"Medicine"};

    printf("GUC Buildings: %d , Price: %0.2f , course: %s \n",GUC.buildings,GUC.price,GUC.course);
    printf("AUC Buildings: %d , Price: %0.2f , course: %s \n",AUC.buildings,AUC.price,AUC.course);
    printf("BUE Buildings: %d , Price: %0.2f , course: %s \n",BUE.buildings,BUE.price,BUE.course);

    University U1; // pointer to struct
    University *ptr = &U1;
    ptr->buildings = 4;
    ptr->price = 450;
    ptr->course = "Robotics";
    printf("U1 Buildings: %d , Price: %0.2f , course: %s \n",ptr->buildings,ptr->price,ptr->course);

    University U2;
    University *ptr2 = &U2;
    ptr2->buildings = 6;
    ptr2->price = 660.76;
    ptr2->course = "Machine Learning";
    printf("U2 Buildings: %d , Price: %0.2f , course: %s \n",ptr2->buildings,ptr2->price,ptr2->course);

    University arr[4]; // array of struct
    arr[0] = GUC;
    arr[1] = AUC;
    arr[2] = BUE;
    arr[3] = U1;
    arr[4] = U2;

    function(&GUC);
    for(int i=0;i<=4;i++)
    {
        printf("Buildings of %d : %d\n",i,arr[i].buildings);
    }
    // printf("%d",sizeof(double));
}