#include <stdio.h>
#include <math.h>

int main()
{
    double x,e,y,cos2,chislitel,p2,chislitel_top, ln2, slag_znam, slag_znam2, sinus, znamenatel,mnog,mnog2;
    double p=3.14;
    double coren2;
    scanf("%lf", &x);
    scanf("%lf", &e);
    coren2 = sqrt(2);
    p2=p/6;
    chislitel=x-p2;
    cos2=cos(chislitel)*2+coren2;
    chislitel_top=cos2;
    ln2=log(x)*2;
    slag_znam=1/ln2;
    sinus=sin(x*x);
    slag_znam2=sinus*sinus;
    znamenatel = slag_znam + slag_znam2;
    mnog=chislitel_top/znamenatel;
    mnog2=pow(e,3*x);
    y=mnog*mnog2;
    printf("%lf", y);
    return 0;
}
