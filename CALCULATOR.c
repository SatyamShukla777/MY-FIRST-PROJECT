#include <stdio.h>
#include <math.h>
void roots(float,float,float);
void equation(int,int,int,int,int,int);
int main(void)
{
    float a,b,c;
    printf("\t\t\tCALCULATOR\n");
    printf("\tSUM\t\t1\nSUBSTRACTION\t\t2\nMULTIPLICATION\t\t3\nDIVISION\t\t4\nROOTS OF QUADRATIC\t5\nSOLVE EQUATION\t\t6\n");
    printf("\tEnter Your Choice: ");
    int ch;
    scanf("\t%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter two numbers : ");
        scanf("%f %f",&a,&b);
        printf("= %f",a+b);
        break;
        case 2:
        printf("Enter two numbers : ");
        scanf("%f %f",&a,&b);
        printf("= %f",a-b);
        break;
        case 3:
        printf("Enter two numbers : ");
        scanf("%f %f",&a,&b);
        printf("= %f",a*b);
        break;
        case 4:
        printf("Enter two numbers : ");
        scanf("%f %f",&a,&b);
        printf("= %f",a/b);
        break;
        case 5:
        printf("Enter the value of a , b and c: ");
        scanf("%f %f %f",&a,&b,&c);
        roots(a,b,c);
        break;
        case 6:
        printf("Enter the value of a1 b1 c1 a2 b2 c2 : ");
        int a1,b1,c1,a2,b2,c2;
        scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
        equation(a1,b1,c1,a2,b2,c2);
        break;
        default:printf("INVALID INPUT");

    }
}
void roots(float a,float b,float c)
{
    float d=b*b-4*a*c;
    float x1,x2;
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Roots : %f and %f",x1,x2);
    }
    else if(d==0)
    {
        printf("Root = %f",-b/(2*a));
    }
    else
    {
        float x=-b/(2*a);
        float imag=sqrt(-d)/(2*a);
        printf("Roots = %f+%fi",x,imag);
        printf("Roots = %f-%fi",x,imag);
    }
    
}
void equation(int a1,int b1,int c1,int a2,int b2,int c2)
{
    float x,y;
    x=(b1*c2-b2*c1)/(a1*b2-b1*a2);
    y=(a1*c2-a2*c1)/(b1*a2-b2*a1);
    printf(" x = %f and y = %f",x,y);
}
