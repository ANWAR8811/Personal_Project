#include<stdio.h>

enum days_of_week
{
    sun,mon,tue,wed,thu,fri,sat
};

int main()
{
    enum days_of_week day1,day2;
    day1 = thu;
    day2 = mon;

    int dif = day1-day2;
    printf("day1 = %d\n",day1);
    printf("Difference = %d\n",dif);
}
