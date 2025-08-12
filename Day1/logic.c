#include "head.h"

int add(const int x,const int y) //return sum of 2 input parameters
{
    return x+y;
}
int sub(const int x, const int y)
{
    return x-y;
}
int is_even(const int input)// return True or False
{
    return !(input%2);
}
int circle_area(int r)
{
    int a= 3.14*r*r;
    return a;
}
int charactre_dif(char a, char b)
{
    int c= a;
    int d= b;
    int dif= d-c-1;
    return dif;
}
int F(int c)
{
    int f= (9/5*c)+32;
    return f;
}
int is_integer(int a)
{
    if(a>=0&&a<=9)
        return 1;
    else
        return 0;
}
int leap_year(int a)
{
    int b= a%4;
    if(b == 0)
        return 1;
    else
        return 0;
}
int power(int a)

{
    int b = 1<<a;
    return b;
}
int sum_of_digits(int a)
{
    int sum= 0;
    while(a>0)
    {
        int b = a%10;
    sum= sum+b;
    a=a/10;
    }
     return sum;
}
int reversee(int a)
{
    int r= 0;
    while (a>0)
    {
        int b=a%10;
        r=r*10+b;
        a=a/10;
    }
    return r;
}

