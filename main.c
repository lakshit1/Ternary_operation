#include <stdio.h>
#include <conio.h>

void main() {
    int a,b,c;
    printf("Enter two numbers to find greater number \n");
    printf("Show ternary operation \n");
    scanf("%d %d",&a,&b);
    printf("Value of a=%d, b=%d \n",a,b);
    c=(a>b)?a:b;
    printf("Greater number of two numbers a=%d, b=%d is %d \n",a,b,c);
    getch();
}