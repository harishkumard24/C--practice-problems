#include "DAY2HEAD.h"
#include<stdio.h>

int sum_of_digits(int a)
{
    int c=0;
    while(a>0)
    {
        int b =a%10;
        c=c+b;
        a=a/10;
    }
    return c;
}

int occurance(int a, int b)
{
     int count=0;

    while(a>0)
    {
        int c= a%10;
        if(c == b)
        {
           count++;
        }
        a=a/10;
    }

    return count;
}
int palindrome(int a)
{
    int r=0;
    int temp= a;

    while(a>0)
    {
        int b= a%10;
        int r= r * 10 + b;
        a=a/10;
    }
    if (r==temp)
        return 0;
    else
        return 1;
}
int is_prime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2; i*i<=num; i++)
    {
        if (num % i==0)
            return 0;
    }
    return 1;
}
int no_of_prime(int n)
{
    int count=0;
    int current_number = 2;
    while (count<n)
    {
        if(is_prime(current_number))
        {
            count++;
            printf("%d\n",current_number);
        }
        current_number++;
    }
}

int series_sum(int s)
{
    int n=0;
    for(int i=0;i<s;i++)
    {
        n=n*10+1;
    }
    printf("%d",n);
    int sum=0;
    while(n>0)
    {
        sum=sum+n;
        n=n/10;
    }
    printf("\n\n%d",sum);
    return 0;
}

int electricity(int n)
{
    int charge=0;

    if(n>=1&&n<=200)
    {
        charge=5*n;
    }

    else if (n>=201&&n<=300)
    {
         n=n-200;
        charge= 200*5+n*7;
    }

    else if (n>300)
       {
            n=n-300;
        charge=200*5+100*7+n*10;

       }
        return charge;
}
int armstrong(int a)
{
    int sum=0;
    int temp=a;
    while(a>0)
    {
        int b= a%10;
        sum = sum+b*b*b;
        a=a/10;
    }
    if (temp == sum)
        return 99;
    else
        return -99;
}
void sum_comb()
{
    int sum=0;
    for(int i=0;i<9;i++)
    {
         for (int j=0;j<9;j++)
         {
              sum=i+j;
              if (sum == 9)
                    printf("%d, %d\n",i,j);
         }

    }
}
int binary_conversion(int a)
{
    int i=0;
    int binary=0;
    while(a>0)
    {
        int b=a%10;
        binary=binary+pow(2 ,i);
        a=a/10;
        i++;
    }
        return binary;
}

