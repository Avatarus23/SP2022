#include <stdio.h>
#include <math.h>

//1. TIK TAK
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    if(n%3==0 && n%5==0)
//    {
//        printf("Tik-Tak");
//    }
//    else if(n%3==0)
//    {
//        printf("Tik");
//    }
//    else if(n%5==0)
//    {
//        printf("Tak");
//    }
//    else
//        printf("Losh Broj");
//    return 0;
//}

//2. KOLEGA   ????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
//int main()
//{
//    int n,a,b,c,d;
//    scanf("%d",&n);
//    a=n/1000;
//    b=n/100%10;
//    c=n/10%10;
//    d=n%10;
//    if(a)
//
//    return 0;
//}
//ResenaOdDrug
//int main()
//{
//    int n,m,n1,n2,n3,n4,m1,m2,m3,m4,brojac;
//    float procent;
//    scanf("%d",&n);
//    brojac=0;
//    n1=n/1000;
//    n2=(n/100)%10;
//    n3=(n/10)%10;
//    n4=n%10;
//    if (n1==5)
//    {m1=6;
//        brojac++;
//    }
//    else
//    {m1=n1;}
//     if (n2==5)
//    {m2=6;
//        brojac++;
//    }
//    else
//    {m2=n2;}
//     if (n3==5)
//    {m3=6;
//        brojac++;
//    }
//    else
//    {m3=n3;}
//    if (n4==5)
//    {m4=6;
//        brojac++;
//    }
//    else
//    {m4=n4;}
//    m=m1*1000+m2*100+m3*10+m4;
//    if (brojac>=2)
//    {
//    if (n>m)
//    {procent=((100.0*(n-m))/m*1.0);}
//    if (m>n)
//    {procent=((100.0*(m-n))/n*1.0);}
//    printf("%.4f%%",procent);}
//    else
//printf("Error");
//    return 0;
//}

//3.
//int main()
//{
//    float x;
//    int suma=0;
//    scanf("%f",&x);
//
//    if(x<=500)
//    {
//        suma=x*5.0;
//    }
//    else if(x>500 && x<=650)
//    {
//        suma = 500*5.0;
//        suma = suma + ((x-500)*7.5);
//    }
//    else if(x>650 && x<=850)
//    {
//        suma = 500*5;
//        suma = suma + (150*7.5);
//        suma = suma + ((x-650)*11.0);
//    }
//    else if (x>850)
//    {
//        suma = 500*5;
//        suma = suma + (150*7.5);
//        suma = suma + (200*11.0);
//        suma = suma + ((x-850)*13.5);
//    }
//    if (suma<=7000)
//    {
//        suma+=suma*0.1;
//    }
//    else if (suma>7000)
//    {
//        suma+=suma*0.18;
//    }
//
//    printf("%d",suma);
//
//}

//4. tip a A = 18% b B = 5% v V =0% vkupno ddv?
//int main()
//{
//    float c1,c2,c3;
//    char d1,d2,d3;
//    scanf("%f %c",&c1,&d1);
////    printf("%f %c",c1,d1);
//    scanf("%f %c",&c2,&d2);
////    printf("%f %c",c2,d2);
//    scanf("%f %c",&c3,&d3);
////    printf("%f %c",c3,d3);
//
//    if(d1=='a'||d1=='A')
//    {
//        c1=c1*0.18;
//    }
//    else if(d1=='b'||d1=='B')
//    {
//        c1=c1*0.05;
//    }
//    else if(d1=='v'||d1=='V')
//    {
//        c1=c1*0.0;
//    }
//
//    if(d2=='a'||d2=='A')
//    {
//        c2=c2*0.18;
//    }
//    else if(d2=='b'||d2=='B')
//    {
//        c2=c2*0.05;
//    }
//    else if(d2=='v'||d2=='V')
//    {
//        c2=c2*0.0;
//    }
//
//    if(d3=='a'||d3=='A')
//    {
//        c3=c3*0.18;
//    }
//    else if(d3=='b'||d3=='B')
//    {
//        c3=c3*0.05;
//    }
//    else if(d3=='v'||d3=='V')
//    {
//        c3=c3*0.0;
//    }
//
//    printf("%.2f",c1+c2+c3);
//
//    return 0;
//}

//NACIN2
//int main()
//{
//    int cena;
//    char tip_danok;
//    float ddv;
//
//    for (int i=0; i<3; i++){
//     scanf("%d %c", &cena, &tip_danok);
//
//        if (tip_danok=='A'||tip_danok=='a')
//            ddv=ddv+(cena*18/100.0);
//        else if (tip_danok=='B'||tip_danok=='b')
//            ddv=ddv+(cena*5/100.0);
//        else if (tip_danok=='V'||tip_danok=='v')
//
//        continue;
//
//    }
//    printf("%.2f", ddv);
//    return 0;
//}

//5. Video Igra ?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
//P1 za sekoe pominato nivo
//nad C1 nivoa dobiva P2 poeni
//nad C2 (C2>C1) nivoa se dobiva P3 poeni
//igrata se igra 3 pati -1pat A nivoa, -2pat B nivoa, -3pat C nivoa
//int main()
//{
//    int P1, P2, P3;//poeni
//    int C1, C2;//nivoa
//    int A, B, C; //pati
//    int sum1=0, sum2=0, sum3=0; //sumi
//    int sum; //glavna suma
//    scanf("%d %d %d %d %d %d %d %d",&P1,&C1,&P2,&C2,&P3,&A,&B,&C);
//
//    if (A>C2){
//        sum1=P3*A;
//    }
//    else if (A>C1){
//        sum1=P2*A;
//    }
//    else
//        sum1=P1*A;
//
//    if (B>C2){
//        sum2=P3*B;
//    }
//    else if (B>C1){
//        sum2=P2*B;
//    }
//    else
//        sum2=P1*B;
//
//    if (C>C2){
//        sum1=P3*C;
//    }
//    else if (C>C1){
//        sum1=P2*C;
//    }
//    else
//        sum1=P1*C;
//
//    printf("%d%d%d",sum1,sum2,sum3);
//    sum = sum1 + sum2 + sum3;
//    printf("%d",sum);
//
//    return 0;
//}

//RESENO OD DRUG
//int main()
//{
//    int p1,c1,p2,c2,p3,a,b,c,zbir=0;
//    scanf("%d%d%d%d%d", &p1, &c1, &p2, &c2, &p3);
//    scanf("%d%d%d", &a, &b, &c);
//    if(a<=c1)
//        zbir=a*p1;
//    else if (a>c1&&a<=c2)
//        zbir=a*p2;
//    else if(a>c2)
//        zbir=a*p3;
//
//    if(b<=c1)
//        zbir+=b*p1;
//    else if (b>c1&&b<=c2)
//        zbir+=b*p2;
//    else if(b>c2)
//        zbir+=b*p3;
//
//    if(c<=c1)
//        zbir+=c*p1;
//    else if (c>c1&&c<=c2)
//        zbir+=c*p2;
//    else if(c>c2)
//        zbir+=c*p3;
//    printf("%d", zbir);
//
//    return 0;
//}

//6. prag i procent ??????????????????????????????????????????????????????????????????????????????????????????????????????????????????
//int main()
//{
//    int x;
//    int proc0, proc1, proc2;
//    int prag1, prag2;
//    float sum=0;
//    scanf("%d%d%d%d%d%d\n",&proc0,&prag1,&proc1,&prag2,&proc2,&x);
//    if(prag1<=1000)
//    {
//        sum=sum+1000*0.1;
//    }
//    if(prag2>1000 || prag2<)
//    {
//        sum=sum+1000*0.1;
//    }
//
//    return 0;
//}

//NACIN2
//int main()
//{
//float a,ddv=0;
//printf("Vnesi ja sumata:\n");
//scanf("%f",&a);
//
//if(a>0 && a<=1000)
//    ddv=a*10/100;
//    else if(a>1000 && a<=2500){
//    ddv=100+((a-1000)*20/100);
//}
//    else if(a>2500 && a<=3800){
//        ddv=100+300+((a-2500)*30/100);
//    }
//    else if(a>3800){
//        ddv=100+300+390+((a-3800)*30/100);
//    }
//
//printf("%.2f",ddv);
//}

//7. Да се напише програма која за дадени поени од испит по 5 предмети внесени преку стандарден влез ќе
//пресмета оценка по секој предмет и вкупниот просек на студентот според оцените ( заокружени на две децимали)
//int main()
//{
//    int n;
//    float prosek=0;
//    for(int i=0; i<5; i++)
//    {
//    scanf("%d", &n);
//    int ocena;
//    if (n<50)
//        ocena=5;
//    else if(n>=50&&n<60)
//        ocena=6;
//    else if(n>=60&&n<70)
//        ocena=7;
//    else if(n>=70&&n<80)
//        ocena=8;
//    else if(n>=80&&n<90)
//        ocena=9;
//    else if(n>=90&&n<=100)
//        ocena=10;
//
//        prosek += ocena;
//        printf("%d ", ocena);
//    }
//    prosek /= 5.0;
//    printf("\n%.2f", prosek);
//    return 0;
//}

//8.Од тастатура се чита еден 2-цифрен број. Да се формира број чиј што цифри ќе бидат подредени од десно кон лево во растечки редослед
//и да се испечати на екран неговиот степен.
//int main()
//{
//    int x, a, b, temp=0, y;
//    printf("Vnesi dvocifren broj");
//    scanf("%d",&x);
//    b=x%10;
//    a=x/10;
////    printf("%d\n%d",a,b);
//    if(b>a)
//    {
//        temp=b;
//        b=a;
//        a=temp;
//    }
////    printf("%d\n%d",a,b);
//    a=a*10;
//    y=a+b;
//    printf("%d",y*y);
//
//    return 0;
//}

//9. Од стандарден влез се внесуваат три броја кои означуваат времињата (во минути) со кои 3 натпреварувачи истрчале 5км
//на Скопскиот маратон.  Да се испечати редниот број на најбрзиот натпреварувач. Доколку најбрзо време имаат повеќе од
//еден натпреварувачи се печатат редните броеви на сите такви натпреварувачи
//int main()
//{
//    float a,b,c;
//    printf("Vnesi 3 broja - vreminja na istrcani 5km vo minuti: ");
//    scanf("%f %f %f",&a,&b,&c);
//    if (a<=b&&a<=c){
//        printf("1 ");
//    }
//    if (b<=a&&b<=c){
//        printf("2 ");
//
//    }
//    if (c<=a&&c<=b){
//        printf("3 ");
//    }
//    return 0;
//}

//10. Za daden broj, ako e 7 cifren da se podredi sekoja cifra vo nov red isto taka i sumata i proizvodot,
//ako ne e 7 cifren, da se ispishe deka ne e.
//int main()
//{
//    int x,q,w,e,r,t,y,u;
//    int sum,proiz;
//    printf("Vnesi 7 cifren broj ");
//    scanf("%d",&x);
//    if(x>999999 && x<=9999999)
//    {
//    q=x/1000000;
//    w=x/100000%10;
//    e=x/10000%10;
//    r=x/1000%10;
//    t=x/100%10;
//    y=x/10%10;
//    u=x%10;
//    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",q,w,e,r,t,y,u,sum=q+w+e+r+t+y+u,proiz=q*w*e*r*t*y*u);
//    }
//    else
//    {
//        printf("Vneseniot broj ne e 7 cifren");
//    }
//    return 0;
//}

//ZASO NE RABOTI IF I ELSE OBRATNO?????????????????????????????????????????????????????????????
//int main()
//{
//    int x,q,w,e,r,t,y,u;
//    int sum,proiz;
//    printf("Vnesi 7 cifren broj ");
//    scanf("%d",&x);
//    if(x<1000000 || x>9999999)
//    {
//        printf("Vneseniot broj ne e 7 cifren");
//    }
//    else if(x>999999 && x<=9999999)
//    q=x/1000000;
//    w=x/100000%10;
//    e=x/10000%10;
//    r=x/1000%10;
//    t=x/100%10;
//    y=x/10%10;
//    u=x%10;
//    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",q,w,e,r,t,y,u,sum=q+w+e+r+t+y+u,proiz=q*w*e*r*t*y*u);
//
//    return 0;
//}

//11. OD standarden vlez se cita mobilen broj vo format XXYYYZZZ(70444888), a programata da ja ispecati vo format xxx/yyy-zzz(070/444-888).
// dopolnitelno operatorot da go ispecati 070/1/2-telekom 075/6/7/8-A1 079-Lycamobile
//int main()
//{
//    int x,q,w,e,r,t,y,u,i,o;
//    printf("Vnesi broj telefonski broj vo format XXYYYZZZ: ");
//    scanf("%d",&x);
//    q=x/100000000;
//    w=x/10000000%10;
//    e=x/1000000%10;
//    r=x/100000%10;
//    t=x/10000%10;
//    y=x/1000%10;
//    u=x/100%10;
//    i=x/10%10;
//    o=x%10;
//    printf("%d%d/%d%d%d-%d%d%d",q,w,e,r,t,y,u,i,o);
//    if(e==0 || e==1 || e==2)
//        printf(" - T-Mobile");
//    else if(e==9)
//        printf(" - Lycamobile");
//    else
//        printf(" - A1");
//
//    return 0;
//}

//12.Palindrom - pettocifren broj
//int main()
//{
//    int x,q,w,e,r,t;
//    printf("Vnesi pettocifren broj: ");
//    scanf("%d",&x);
//    q=x/10000;
//    w=x/1000%10;
//    e=x/100%10;
//    r=x/10%10;
//    t=x%10;
//    if(q==t&&w==r)
//        printf("Palindrom");
//    else if(x<10000||x>99999)
//        printf("Nevaliden vlez");
//    else
//        printf("Ne e palindrom");
//    return 0;
//}

//ZADACI 10.11.2022
//1. Од стандарден влез се внесуваат три броја кои означуваат времињата (во минути) со кои 3 натпреварувачи истрчале 5км
//на Скопскиот маратон.  Да се испечати редниот број на најбрзиот натпреварувач. Доколку најбрзо време имаат повеќе од
//еден натпреварувачи се печатат редните броеви на сите такви натпреварувачи
//int main()
//{
//    float a,b,c;
//    scanf("%f%f%f",&a,&b,&c);
//    if(a<=b&&a<=c)
//        printf("1");
//    if(b<=a&&b<=c)
//        printf("2");
//    if(c<=a&&c<=b)
//        printf("3");
//    return 0;
//}

//2.
//int main()
//{
//    int a, b, c, d, e, vkupno, ocena;
//    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//    vkupno=a+b+c+d+e;
//
//    if(vkupno>50&&vkupno<=100)
//    {
//    if(vkupno>50&&vkupno<=60)
//        ocena=6;
//    else if(vkupno>60&&vkupno<=70)
//        ocena=7;
//    else if(vkupno>70&&vkupno<=80)
//        ocena=8;
//    else if(vkupno>80&&vkupno<=90)
//        ocena=9;
//    else
//        ocena=10;
//    printf("Ocenka: %d, poeni: %d\n",ocena,vkupno);
//
//    if(vkupno==60||vkupno==70||vkupno==80||vkupno==90)
//        printf("Ima uslov za povisoka ocenka");
//    else if(vkupno!=100)
//        printf("Nema uslov za povisoka ocenka");
//    }
//    else
//        printf("Predmetot ne e polozen\n");
//    return 0;
//}

//3.Milan i Marko
//int main()
//{
//    float milan, marko;
//    float x1, x2, x3, y1, y2, y3;
//    char p; //pobednik
//    scanf("%f%f%f%f%f%f\n",&x1,&y1,&x2,&y2,&x3,&y3);
//    scanf("%c",&p);
//    milan=((0.25*x1)+(0.35*x2)+(0.4*x3));
//    marko=((0.25*y1)+(0.35*y2)+(0.4*y3));
//
//    printf("%.2f %.2f\n",milan,marko);
//
//    if(milan==marko)
//    {
//        printf("Nema pobednik");
//    }
//    else if(milan<marko)
//    {
//    if(p=='p'||p=='P')
//        printf("Pobednik e: Marko");
//    else if(p=='n'||p=='N')
//        printf("Pobednik e: Milan");
//    }
//    else if(milan>marko)
//    {
//    if(p=='p'||p=='P')
//        printf("Pobednik e: Milan");
//    else if(p=='n'||p=='N')
//        printf("Pobednik e: Marko");
//    }
//    return 0;
//}

//GI RESAVAM PAK ZA DA GI ZAPAMTAM
//1.
//int main()
//{
//    float a, b, c;
//    scanf("%f%f%f",&a,&b,&c);
//    if(a<=b&&a<=c)
//        printf("1");
//    if(b<=a&&b<=c)
//        printf("2");
//    if(c<=a&&c<=b)
//        printf("3");
//    return 0;
//}
//2.
//int main()
//{
//    int a,b,c,d,e;
//    int bodovi, ocena;
//    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//    bodovi=a+b+c+d+e;
//    if(bodovi>0 && bodovi<=50)
//    {
//        printf("Predmetot ne e polozen");
//    }
//    else
//    {
//        if(bodovi>50 && bodovi<=60)
//            ocena=6;
//        else if(bodovi>60 && bodovi<=70)
//            ocena=7;
//        else if(bodovi>70 && bodovi<=80)
//            ocena=8;
//        else if(bodovi>80 && bodovi<=90)
//            ocena=9;
//        else if(bodovi>90 && bodovi<=100)
//            ocena=10;
//
//        printf("Ocena: %d, bodovi: %d\n",ocena,bodovi);
//
//        if(bodovi==60||bodovi==70||bodovi==80||bodovi==90)
//            printf("Ima uslov za povisoka ocenka.");
//        else if (bodovi!=100)
//            printf("Nema uslov za povisok ocenka.");
//    }
//    return 0;
//}
//3.
//int main()
//{
//    float x1,x2,x3,y1,y2,y3;
//    float milan, marko;
//    char a; //pobednik
//    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
//    scanf("%c",&a);
//    milan=(0.25*x1)+(0.35*x2)+(0.4*x3);
//    marko=(0.25*y1)+(0.35*y2)+(0.4*y3);
//    printf("%.2f %.2f\n",milan,marko);
//    if(milan==marko)
//        printf("Nema pobednik");
//    else if(milan>marko)
//    {
//        if(a=='p'||a=='P')
//            printf("Pobednik e: Milan");
//        else if (a=='n'||a=='N')
//            printf("Pobednik e: Marko");
//    }
//    else if(marko>milan)
//    {
//        if(a=='p'||a=='P')
//            printf("Pobednik e: Marko");
//        else if (a=='n'||a=='N')
//            printf("Pobednik e: Milan");
//    }
//    return 0;
//}

//plus zadaca
//int main()
//{
//    int psuma, nsuma, razlika, n, broj;
//    scanf("%d",&n);
//    if(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        if(broj)
//
//
//    }
//
//
//
//    return 0;
//}

//int main()
//{
//    float x;
//    x=3/5*5;
//printf("%.2f",x);
//    return 0;
//}
