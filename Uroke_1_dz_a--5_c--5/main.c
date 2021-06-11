#include <assert.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int b, d, d2,a2,a3,c2,c3,a4,c4,b2;
    int a = 5;
    int c = 5;
    int summa_a_b_c;

    system("chcp 1251");
    system("cls");
    printf("vvedite b: ");
    scanf("%d", &b);
    printf("vvedite d: ");
    scanf("%d", &d);
    system("cls");
    d2=d;
    a2=a;
    a3=a;
    c2=c;
    c3=c;
    a4=a;
    c4=c;
    b2=b;
    a=a+b-2;
    printf("1)a=a+b-2; a=%d", a);
    c=c+1;
    printf("                                                                                                          ");
    printf("2)c=c+1; c=%d", c);
    d=c2-a2+d;
    printf("                                                                                                            ");
    printf("3)d=c-a+d; d=%d", d);
    a2=a2*c2;
    printf("                                                                                                          ");
    printf("4)a=a*c; a=%d", a2);
    c2=c2-1;
    printf("                                                                                                           ");
    printf("5)c=c-1; c=%d", c2);
    a3=a3/10;
    printf("                                                                                                            ");
    printf("6)a=a/10; a=0.5");
    c3=c3/2;
    printf("                                                                                                         ");
    printf("7)c=c/2; c=2.5");
    b=b-1;
    printf("                                                                                                          ");
    printf("8)b=b-1; b=%d", b);
    summa_a_b_c=c4+b2+a4;
    d2=d2*summa_a_b_c;
    printf("                                                                                                            ");
    printf("9)d=d*(a+c+b); d=%d",d2);
    return 0;
}
