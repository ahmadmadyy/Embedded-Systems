#include <stdio.h>

void TaskB()
{
    /* Task B
solve it by pen and paper and then do it by coding
write code to take from user two number 
and print the following 
	- n1 >> 4
	- n2 << 3
	- n1 & n2
	- n2 | n1
	- n1 ^ n2
    */
    int n1;
    int n2;
    printf("Enter first num: ");
    scanf(" %d",&n1);
    printf("Enter second num: ");
    scanf(" %d",&n2);
    printf("n1 >> 4 : %d \n", n1 >> 4);
    printf("n2 << 3 : %d \n", n2 << 3);
    printf("n1 & n2 : %d \n", n1 & n2);
    printf("n2 | n1 : %d \n", n2 | n1);
    printf("n1 ^ n2 : %d \n", n1 ^ n2);
}

void TaskC()
{
    /*
    // solve it by pen and paper 
    what is the output of the following :-
	unsigned char n1 = 250;
	signed char n2 = -8;
	print("%d , %d",(signed char)n1,(unsigned char)n2);
	A.-7 , 250 
	B.-6 , 248
	C.-5 , 246
	D.-4 , 242
    */
    unsigned char n1 = 250;
    signed char n2 = -8;
    printf("%d , %d",(signed char)n1,(unsigned char)n2);
    // Answer B. -6, 248
}

void TaskD()
{
    /*
    solve it by pen and paper 
    what is the output of the following :-
    	unsigned char n1 = 250;
    	signed char n2 = -8, n3 = 0;
    	n3 = n1 + n2;
    	printf("%d", n3);
	A.  242 
	B. -15
	C. -14
    */
    unsigned char n1 = 250;
    signed char n2 = -8, n3 = 0;
    n3 = n1 + n2;
    printf("%d", n3);
    // Answer: C. -14
}


void TaskE()
{
    /*
    solve it by pen and paper 
what is the output of the following :-
    	unsigned char n1 = 250;
    	signed char n2 = -8, n3 = 0;
    	n3 = n1 + n2;
    	printf("%d",(unsigned char)n3);
	A.  242 
	B. -15
	C. -14
    */
    unsigned char n1 = 250;
    signed char n2 = -8, n3 = 0;
    n3 = n1 + n2;
    printf("%d",(unsigned char)n3);
    // Answer: A.  242
}

void TaskF()
{
    /*
    solve it by pen and paper 
    what is the output of the following :-
    	char n1=15,n2=10;
    	printf("%d , %d", n1++ , ++n2);
	A. 15 , 11
	B. 16 , 11
	C. 15 , 10
    */
    char n1=15,n2=10;
    printf("%d , %d", n1++ , ++n2);
    //Answer: C. 15 , 10
}

void TaskG()
{
    /*
    solve it by pen and paper 
    what is the output of the following :-
    	char n1=15,n2=10,n3=12;
    	printf("%d ", (n1< n2) && (n3<n1));
	A. 1
	B. 0
    */
    char n1=15,n2=10,n3=12;
    printf("%d ", (n1< n2) && (n3<n1));
   //Answer: B. 0
}

void TaskH()
{
    /*
    solve it by pen and paper
	- write code to  clear   bit 5  in the binary number 0b11111101 using AND operator
	- write code to  set     bit 1  in the binary number 0b11010101 using OR  operator
	- write code to  toggle  bit 6  in the binary number 0b11011101 using XOR operator
    */
    int a = 0b11111101;
    int b = a & 0b11011111;
    printf("Clearing by AND: %d \n",b);
    int ac = a & ~(1<<5);
    printf("Clearing by AND method 2: %d \n",ac);

    int c = 0b11010101;
    int d = c | 0b00000010;
    printf("Setting by OR: %d \n",d);
    int dc = c | (1<<1);
    printf("Setting by OR method 2: %d \n",dc);

    int e = 0b11011101;
    int f = e ^ 0b01000000;
    printf("Toggling by XOR: %d \n",f);

}

int main()
{
    // TaskB();
    // TaskC();
    // TaskD();
    // TaskE();
    // TaskF();
    // TaskG();
    // TaskH();
}