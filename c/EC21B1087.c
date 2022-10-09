
#include <stdio.h>
//1. Write a program which will find all such numbers which are divisible by 7 but are not a multiple of 5, between 2000 and 3200 (both included).
//The numbers obtained should be printed in a comma-separated sequence on a single line
int main()
{
    for(int i=2002 ; i<3201 ; i=i+7)// 2002 is multiple of seven . skip counting by 7
    {
        if(i%5!=0)// checking not an multiple of 5
        {
            if(i==2002)
                printf("%d",i);
            else
                printf(",%d",i);
        }
    }
}
