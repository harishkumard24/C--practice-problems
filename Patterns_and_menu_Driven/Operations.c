#include <stdio.h>
#include "header.h"

void age_and_grade() {
    int age;
    char name[20];
    printf("Please Enter Your Age and Your Name \n");
    scanf("%d %19s",&age,name);
    printf("Your Age is %d \nName is %s \n",age,name);

    if(age<18) {
        printf("Your a Minor \n");
    }
    else if(age<60 && age>18) {
        printf("Your an Adult \n\n");
    }
    else if(age>60 && age<120) {
        printf("Your a Senior Citizen \n");
    }
    else {
        printf("Please enter a VALID INPUT AS YOUR AGE \n");
    }

    char Grade;
    printf("Please enter your Grade\n");
    scanf(" %c",&Grade);

    switch(Grade) {
        case 'A': printf("Excellent! \n"); break;
        case 'B': printf("Good \n"); break;
        case 'C': printf("Fair! \n"); break;
        case 'F': printf("Fail! \n"); break;
        default: printf("Invalid Grade Please enter the input in capslock. \n");
    }
}

void print_hello_world() {
    for(int i=0; i<=5;i++) {
        printf("Hello \n");
    }
    int a=1;
    while(a<10) {
        printf("World \n");
        a++;
    }
}

void sum_max_min() {
    int i,num,sum=0;
    printf("Enter the total No of integer you want to enter ");
    scanf("%d", &num);
    int arr[num];
    for(i=0; i<num; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<num; i++) {
        sum= sum+arr[i];
    }
    printf("The sum is %d \n", sum);

    int max=arr[0];
    int min=arr[0];
    for(i=0;i<num;i++) {
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    printf("The Max no is %d and the Min no is %d \n",max,min);
}

void right_triangle() {
    int x , y, z;
    printf("please enter the no of rows \n");
    scanf("%d",&z);
    for(x=1;x<=z;x++) {
        printf(" ");
        for(y=1;y<=x;y++)
            printf("*");
        printf("\n");
    }
}

void diamond_pattern() {
    int row,space,n,star;
    printf("Enter the no of rows \n");
    scanf("%d",&n);
    //upper part
    for(row=1;row<=n;row++) {
        for(space=1;space<=n-row;space++) printf(" ");
        for(star=1;star<=row*2-1;star++) printf("*");
        printf("\n");
    }
    //down part
    for(row=n-1;row>=1;row--) {
        for(space=1;space<=n-row; space++) printf(" ");
        for(star=1;star<=row*2-1;star++) printf("*");
        printf("\n");
    }
}

void hollow_square() {
    int s,n,i,space;
    printf("enter the no of rows ");
    scanf("%d",&n);
    for(s=1;s<=n;s++) {
        if(s==1 || s==n) {
            for(i=1;i<=n;i++) printf("*");
        }
        else {
            printf("*");
            for(space=1;space<=n-2;space++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

void hollow_square_border() {
    int row,col,n;
    printf("Enter the no of rows \n");
    scanf("%d",&n);
    for(row=1;row<=n;row++) {
        for(col=1;col<=n;col++) {
           if(row==1 || row==n || col==1 || col==n)
                printf("*");
           else
                printf(" ");
        }
        printf("\n");
    }
}

void hollow_pyramid() {
    int row,space,star,n;
    printf("Enter the no of rows \n");
    scanf("%d",&n);
    for(row=1;row<=n;row++) {
        for(space=1;space<=n-row;space++) printf(" ");
        for(star=1;star<=(2*row-1);star++) {
            if(star==1 || star==2*row-1 || row==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void hollow_diamond() {
    int n,row,star,space;
    printf("Enter the no of Rows \n");
    scanf("%d",&n);
    for(row=1;row<=n;row++) {
        for(space=1;space<=n-row;space++) printf(" ");
        for(star=1;star<=2*row-1;star++) {
            if(star==1 || star==2*row-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--) {
        for(space=1;space<=n-row;space++) printf(" ");
        for(star=1;star<=2*row-1;star++) {
            if(star==1 || star==2*row-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

