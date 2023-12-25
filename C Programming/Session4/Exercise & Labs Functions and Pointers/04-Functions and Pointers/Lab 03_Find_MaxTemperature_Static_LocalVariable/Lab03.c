/*
========================================================
Name: Lab 03
Author: AMIT Learning
Target: Static variable
========================================================
Description:
+ Create a function to compare an input temperature with
a stored temperature and update the maximum.
+ The stored temperature should be static.
+ Receive the input temperature from user.
+ Pass the input temperature to the function to compare.
+ Print max temperature after updating.
========================================================
*/

#include <stdio.h>
#include <stdlib.h>

int max_temp(int max)
{
    static int maxtemp = 0;

    if (maxtemp < max)
        maxtemp = max;
    return maxtemp;
}

int main()
{
    int sensor=0;
    while (1)
    {
        printf("Please enter the sensor read.\n");
        scanf("%d", &sensor);
        printf("The max temp reached till now is: %d\n\n", max_temp(sensor));
    }
    return 0;
}
