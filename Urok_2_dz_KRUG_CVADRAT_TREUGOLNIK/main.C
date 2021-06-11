#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,R,l,a2,r2,aS,bS,RS,p,vop1,vop2,otv, otv1, otv2, otv3;
    printf("vvedite a: ");
    scanf("%lf", &a);
    printf("vvedite b: ");
    scanf("%lf", &b);
    printf("vvedite R: ");
    scanf("%lf", &R);
    l=sqrt(3);
    a2=a*a;
    aS=l/4*a2;
    printf("ploshad treugolnika:%lf", aS);
    bS=b*b;
    printf("\nploshad cvadrata:%lf", bS);
    r2=R*R;
    p=3.14;
    RS=p*r2;
    printf("\nploshad kruga:%lf", RS);
    otv=aS>bS?aS:bS;
    otv=otv==aS?aS:bS;
    if ("%lf", otv == bS)
        otv=bS>RS?bS:RS;
    printf("\nnaibolshaya ploshad:%lf", otv);
    return 0;
}
