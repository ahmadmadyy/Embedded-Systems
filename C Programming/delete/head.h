#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include<stdbool.h>
#define MAX_SIZE 10

typedef unsigned char uint8;


bool isFull(void);
uint8 GetUsedSize(void);
bool AddEntry(uint8 id , uint8 y , uint8 *subjects, uint8 *grades );
void deleteEntry(uint8 id);
bool ReadEntry(uint8 id, uint8* y ,uint8 *subjectsOP , uint8 *gradesOP );
void GetIDList(uint8* count , uint8* list);
bool IsIDexist(uint8 id);


struct student
{
    uint8 student_id;
    uint8 year;
    uint8 course_1_id;
    uint8 course_2_id;
    uint8 course_3_id;
    uint8 course_1_grade;
    uint8 course_2_grade;
    uint8 course_3_grade;

};

struct student database[MAX_SIZE];


#endif // HEAD_H_INCLUDED
