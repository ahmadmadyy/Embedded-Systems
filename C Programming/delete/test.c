#include <stdio.h>

void SDB_DeletEntry(int id, int database[],int top)
{
    int position;
    int i;
    for(i = 0; i <= top; i++)
    {
        if(database[i] == id)
        {
            position = i;
        }
    }
    for(int j = position; j<top ; j++)
    {
        database[j] = database[j+1];
    }

}
int num = 1;

void fun2(int n)
{
switch(n)
        {
            case 1: printf("%d \n",1);break;
            case 0: num=0;break;
        }
}
void function1()
{
    int x;
    while(num)
    {
        printf("enter: ");
        scanf("%d",&x);
        fun2(x);
    }

}

int main()
{
    // int database[10] = {0,1,2,3,4,5,6,7,8,9};
    // SDB_DeletEntry(2, database, 10);
    // for(int i=0;i<10;i++)
    // {
    //     printf("database[%d] = %d \n",i,database[i]);
    // }
    // int x;
    // int num=1;
    // while(num)
    // {
    //     printf("enter: ");
    //     scanf("%d",&x);
    //     switch(x)
    //     {
    //         case 1: printf("%d \n",1);break;
    //         case 0: num=0;break;
    //     }
    // }
    function1();
}

