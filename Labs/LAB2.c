#include <stdio.h>

////1
//int main ()
//{
//    int x;
//    scanf("%d", &x);
//    int uslov = 0;
//    uslov = x>-100 && x<100 || x>=200 && x<300;
//    printf("%d", uslov);
//
//    return 0;
//}

////2
//int main()
//{
//
//    int trans;
//    int a, b, c, d, e;
//    scanf("%d",&trans);
//    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//    trans=trans+a+b+c+d+e;
//    if(trans>0)
//    {
//        printf("1");
//    }
//    else{
//        printf("0");
//    }
//    return 0;
//}

////3
//int main()
//{
//    int index;
//    float a, b, c, d, e, f, prosek=0;
//    scanf("%d\n",&index);
//    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
//    prosek = (a+b+c+d+e+f)/6;
//    printf("Prosek: %.3f\n",prosek);
//    printf("Student: %d\n",index);
//    printf("%d godina\n",23-(index/10000));
//    if(prosek>=9.5)
//    {
//        printf("Nagraden: 1");
//    }
//    else
//        printf("Nagraden: 0");
//    return 0;
//}

////+zadaca
//int main(){
//int a, b, c, d, e, x, f;
//printf("Vnesi shestcifren broj\n");
//scanf("%d", &x);
//a=x/100000;
//b=(x/10000)%10;
//c=(x/1000)%10;
//d=(x/100)%10;
//e=(x/10)%10;
//f=x%10;
////printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
//if (a==f && b==e && c==d)
//    printf("DA\n");
//    else printf("NE\n");
//return 0;
//}

////Da se ispecati 1 ako e vnesena mala bukva vo sprotivno 0;
//int main()
//{
//    char x;
//    int uslov = 0;
//    scanf("%c",&x);
//    uslov = (x>='a')&&(x<='z');
//    printf("%d",uslov);
//    return 0;
//}
