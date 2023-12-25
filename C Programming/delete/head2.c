#include"head.h"

int top =-1;  //indicates index of last entry
int i=0 ;   // for looping on the database


bool isFull()
{
    if(top == MAX_SIZE -1)
        return 1;
    else
        return 0;
}

uint8 GetUsedSize()
{
    return (top+1);
}

bool AddEntry(uint8 id ,uint8 y, uint8* subjects , uint8 *grades)
{
    if (isFull())
    {
        printf("Database is Full !!!!!! \n");
        return 0;
    }
    if( grades[0]<0 || grades[0]>100 || grades[1]<0 || grades[1]>100 ||grades[2]<0 || grades[2]>100 )
    {
        printf("There is Error in the grades , check them then try again !\n");
        return 0;
    }
        top++; // increment to position where student entry is added

        // assign the data of the student:

        database[top].student_id=id;
        database[top].year=y;
        database[top].course_1_id = subjects[0];
        database[top].course_2_id = subjects[1];
        database[top].course_3_id = subjects[2];
        database[top].course_1_grade = grades[0];
        database[top].course_2_grade = grades[1];
        database[top].course_3_grade = grades[2];

        printf("Data is assigned successfully !!\n");

        return 1 ;


}

void deleteEntry(uint8 id)
{
    for(i=0; i<=top ; i++)
    {
        if(database[i].student_id == id)
        {
            for(int j=i;j<top;j++)
            {
                database[j]=database[j+1];
            }
            top--;
            printf("Student data is deleted successfully  !!\n");
            return;
        }
    }
    printf("STUDENT DATA WAS NOT DELETED !!!\n");

}

bool ReadEntry(uint8 id, uint8 *y ,uint8 *subjectsOP , uint8 *gradesOP)
{
    for(i=0; i<=top ; i++)
    {
        if(database[i].student_id == id)
        {
            printf("Data will be Read now....\n");
            printf("......loading.......\n");
            (*y) = database[i].year;
            subjectsOP[0]=database[i].course_1_id;
            subjectsOP[1]=database[i].course_2_id;
            subjectsOP[2]=database[i].course_3_id;
            gradesOP[0]=database[i].course_1_grade;
            gradesOP[1]=database[i].course_2_grade;
            gradesOP[2]=database[i].course_3_grade;


           printf("Data is READ successfully !!\n");
           return 1;
        }
    }
    printf("data is NOT Read !!");
    return 0;
}

void GetIDList(uint8* count,uint8* list)
{

    *count=top+1;

    for(i=0;i<=top;i++)
    {
        list[i]=database[i].student_id;
    }
    printf("list is obtained successfully !\n");


}

bool IsIDexist(uint8 id)
{
    for(i=0;i<=top;i++)
    {
        if(database[i].student_id==id)
        {
            printf("ID %d is Found at index %d !\n",id,i);
            return 1;
        }

    }
    printf("ID is not Found !!\n");
    return 0;
}
