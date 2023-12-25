#include <stdio.h>

typedef struct Student
{
    char *name;
    int age;
    int degree;
    int section;

} Student;

void print(Student arr[],int n);

int main()
{
    Student Student1 = {"Ahmad",23,100,6};
    Student Student2 = {"Ali",22,80,4};
    Student Student3 = {"Rawan",20,50,2};
    Student Student4 = {"Yehia",18,33,1};
    Student Student5 = {"Omar",19,48,5};
    Student arr[5] = {Student1,Student2,Student3,Student4,Student5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr,n);
}

void print(Student arr[],int n)
{
    Student *ptr = NULL;
    ptr = arr;

    for(int i=0;i<n;i++)
    {
        printf("Student %d: \n",i+1);
        printf("Name:    %s \n",ptr->name);
        printf("Age:     %d \n",ptr->age);
        printf("Degree:  %d \n",ptr->degree);
        printf("Section: %d \n",ptr->section);
        printf("\n");
        ptr++;
    }
}   