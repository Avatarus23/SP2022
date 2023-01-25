#include <stdio.h>
#include <math.h>

////1. maksimum od 2 broja vneseni od tastatura
//int main()
//{
//    int a, b;
//    scanf("%d%d",&a,&b);
//    if (a>b)
//        printf("Pogolem e: %d",a);
//    else
//        printf("Pogolem e: %d",b);
//    return 0;
//}

////2. Dali edna godina e prestapna ili ne sho se vnesuva od tastatura
//int main()
//{
//    int godina;
//    scanf("%d",&godina);
//
//    if ((godina%4==0 && godina%100!=0)||godina%400==0)
//        printf("Godinata e prestapna");
//    else
//        printf("Godinata ne e prestapna");
//
//    return 0;
//}

////3. Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.
//int main()
//{
//    float x, y;
//    printf("Vnesi koordinati x i y: \n");
//    scanf("%f%f",&x,&y);
//
//    if(x>0&&y>0)
//        printf("Tockata pripagja vo I kvadrant");
//    if(x<0&&y>0)
//        printf("Tockata pripagja vo II kvadrant");
//    if(x<0&&y<0)
//        printf("Tockata pripagja vo III kvadrant");
//    if(x>0&&y<0)
//        printf("Tockata pripagja vo IV kvadrant");
//
//    return 0;
//}

////4. Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка според следната табела:
//int main()
//{
//    int poeni;
//    printf("Vnesi broj na poeni: ");
//    scanf("%d",&poeni);
//    if(poeni>=0 && poeni<=100)
//    {
//        if (poeni>=51 && poeni<=50)
//            printf("Ocena 5");
//        else if (poeni>=51 && poeni<=60)
//            printf("Ocena 6");
//        else if (poeni>=61 && poeni<=70)
//            printf("Ocena 7");
//        else if (poeni>=71 && poeni<=80)
//            printf("Ocena 8");
//        else if (poeni>=81 && poeni<=90)
//            printf("Ocena 9");
//        else if (poeni>=91 && poeni<=100)
//            printf("Ocena 10");
//    }
//    else
//    printf("Brojot na poeni e nevaliden");
//    return 0;
//}

////5. Да се промени претходната програма, така што покрај оценките ќе се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:
//int main()
//{
//    int poeni;
//    printf("Vnesi broj na poeni: ");
//    scanf("%d",&poeni);
//    int pc; //posledna cifra
//    pc = poeni%10;
//    int ocena = 0;
//    char znak;
//
//    //so ovoj if se dobiva ocenata
//    if(poeni>=0 && poeni<=100)
//    {
//        if (poeni>=51 && poeni<=50)
//            ocena=5;
//        else if (poeni>=51 && poeni<=60)
//            ocena=6;
//        else if (poeni>=61 && poeni<=70)
//            ocena=7;
//        else if (poeni>=71 && poeni<=80)
//            ocena=8;
//        else if (poeni>=81 && poeni<=90)
//            ocena=9;
//        else if (poeni>=91 && poeni<=100)
//            ocena=10;
//    }
//    else
//    printf("Brojot na poeni e nevaliden");
//
//
//    //so ovoj if se dobiva znakot
//    if(pc>=1 && pc<=3)
//        znak = '-';
//    else if(pc>=4 && pc<=7)
//        znak = (' ');
//    else if (pc==8 || pc==9 || pc==0)
//        znak = '+';
//
//
//    printf("%d%c", ocena, znak);
//    return 0;
//}

////6. Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да
////се напише програма што ќе провери дали од отсечките може да се конструира
////триаголник, при што ако може, да се провери дали истиот е правоаголен и да
////се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни
////пораки.
//int main()
//{
//    int a, b, c;
//    printf("Vnesi 3 otsecki: ");
//    scanf("%d%d%d",&a,&b,&c);
//    if ((a+b<c)||(a+c<b)||(b+c<a))
//    {
//        printf("NE mozhe da se konstruira triagolnik\n");
//    }
//    else
//    {
//        printf("Mozhe da se konstruira triagolnik\n");
//
//        if(a>=b)
//        {
//            int temp=a;
//            a=b;
//            b=temp;
//        }
//        if(a>=c)
//        {
//            int temp=a;
//            a=c;
//            c=temp;
//        }
//        if(b>=c)
//        {
//            int temp=b;
//            b=c;
//            c=temp;
//        }
//        printf("a = %d\nb = %d\nc = %d\n",a,b,c);
//
//        if((a*a) + (b*b) == (c*c))
//            printf("Triagolnikot e pravoagolen\n");
//        else
//            printf("Triagolnikot ne e pravoagolen\n");
//
//        float P;
//        float S;
//        S=(a+b+c)/2;
//        P=sqrt(S*(S-a)*(S-b)*(S-c));
//        printf("Plostinata e %.2f\n",P);
//    }
//        return 0;
//}

////7. Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да
////се провери дали од дадените отсечки може да се конструра триаголник. Ако
////може, да се испечати дали триаголникот е разностран, рамностран или
////рамнокрак и да му се пресмета плоштината.
//int main()
//{
//    int a, b, c;
//    printf("Vnesi tri otsecki ");
//    scanf("%d%d%d",&a,&b,&c);
//    if ((a+b<=c)||(a+c<=b)||(b+c<=a))
//    {
//        printf("Ne mozhe da se konstruira triagolnik!\n");
//    }
//    else
//    {
//        printf("Mozhe da se konstruira triagolnik\n");
//
//        if((a==b)&&(a==c)&&(b==c))
//        {
//            printf("Triagolnikot e ramnostran\n");
//        }
//        else if ((a!=b)&&(a!=c)&&(b!=c))
//        {
//            printf("Triagolnikot e raznostran\n");
//        }
//        else
//        {
//            printf("Triagolnikot e ramnokrak\n");
//        }
//
//        float P;
//        float S;
//        S=(a+b+c)/2;
//        P=sqrt(S*(S-a)*(S-b)*(S-c));
//        printf("Plostinata e %.2f\n",P);
//
//    }
//    return 0;
//}

////Za doma 1. За три внесени отсечки да се одреди дали е можно да се конструира
////триаголник и притоа дали триаголникот е правоаголен, остроаголен или
////тапоаголен
//int main()
//{
//    int a, b, c;
//    printf("Vnesi tri otsecki: ");
//    scanf("%d%d%d",&a,&b,&c);
//    if ((a+b<=c)||(a+c<=b)||(b+c<=a))
//    {
//        printf("Ne mozhe da se konstruira triagolnik\n");
//    }
//    else
//    {
//        printf("Mozhe da se konstruira triagolnik\n");
//
//        if(a>=b)
//        {
//            int temp=a;
//            a=b;
//            b=temp;
//        }
//        if(a>=c)
//        {
//            int temp=a;
//            a=c;
//            c=temp;
//        }
//        if(b>c)
//        {
//            int temp=b;
//            b=c;
//            c=temp;
//        }
//        if (a*a + b*b == c*c)
//        {
//            printf("Triagolnikot e pravoagolen\n");
//        }
//        else if (a*a + b*b < c*c)
//        {
//            printf("Triagolnikot e tapoagolen\n");
//        }
//        else
//        {
//            printf("Triagolnikot e ostroagolen\n");
//        }
//    }
//    return 0;
//}

//Za doma 2. За даден центар на кружница и нејзин радиус да се одреди низ кои квадранти минува кружницата.
int main()
{
    float x,y;
    float rad;
    printf("Vnesi koordinati za centar na kruznica: \n");
    scanf("%f%f",&x,&y);
    printf("Vnesi radius na kruznica: \n");
    scanf("%f",&rad);
    if(x>rad && y>rad)
    {
        if(x>0&&y>0)
            printf("Kruznicata pripagja vo I kvadrant");
    }






    return 0;
}

//RESENIE2
//int main()
//{
//    int kv1 = 0, kv2 = 0, kv3 = 0, kv4 = 0;
//    float x, y, r;
//    scanf("%f%f%f", &x, &y, &r);
//
//    if((x == 0 && y == 0 && r > 0) || (r > sqrt(x * x + y * y)))
//    {
//        kv1=kv2=kv3=kv4=1;
//    }
//
//    if(x >= 0 && y >= 0)
//    {
//        kv1=1;
//        if(r > abs(x))
//        {
//            kv2=1;
//        }
//        if(r > abs(y))
//        {
//            kv4=1;
//        }
//    }
//
//    if(x <= 0 && y <= 0)
//    {
//        kv3=1;
//        if(r > abs(x))
//        {
//            kv4=1;
//        }
//        if(r > abs(y))
//        {
//            kv2=1;
//        }
//    }
//
//    if(x <= 0 && y >= 0)
//    {
//        kv2=1;
//        if(r > abs(x))
//        {
//            kv1=1;
//        }
//        if(r > abs(y))
//        {
//            kv3=1;
//        }
//    }
//
//    if(x >= 0 && y <= 0)
//    {
//        kv4=1;
//        if(r > abs(x))
//        {
//            kv3=1;
//        }
//        if(r > abs(y))
//        {
//            kv1=1;
//        }
//    }
//
//    printf("Kruznicata pominuva niz slednite kvadranti:\nKvadrant 1: %d\nKvadrant 2: %d\nKvadrant 3: %d\nKvadrant 4: %d\n", kv1, kv2, kv3, kv4);
//    return 0;
//}
