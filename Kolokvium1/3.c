#include <stdio.h>
#include <math.h>
//Dali e broj delliv so 3 i 5
//int main()
//{
//    int x;
//    scanf("%d",&x);
//    if ((x%5==0)&&(x%3==0))
//    {
//        printf("Brojot e delliv i so 3 i so 5\n");
//    }
//    else if (x%5==0)
//    {
//        printf("Brojot e delliv so 5\n");
//    }
//    else if (x%3==0)
//    {
//        printf("Brojot e delliv so 3\n");
//    }
//    else
//    {
//        printf("Brojot NE e delliv so 3 i 5\n");
//    }
//    return 0;
//}

//Po rastecki redosled da naredi 3 broja
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d",&a,&b,&c);
//    if(a>=b)
//    {
//        int temp=a;
//        a=b;
//        b=temp;
//    }
//
//    if(a>=c)
//    {
//        int temp=a;
//        a=c;
//        c=temp;
//    }
//
//    if(b>=c)
//    {
//        int temp=b;
//        b=c;
//        c=temp;
//    }
//
//    printf("%d%d%d",a,b,c);
//
//    return 0;
//}

//Kvadratna od 3 vneseni broja
int main()
{
    float a,b,c;
    float x, y;
    scanf("%f%f%f",&a,&b,&c);
    x=(-b+(sqrt((b*b)-(4.0*a*c))))/(2.0*a);
    y=(-b-(sqrt((b*b)-(4.0*a*c))))/(2.0*a);
    printf("%f\n%f",x,y);
    return 0;
}
