#include <stdio.h>
#include <math.h>

//1.1 Да се напише програма за пресметување на сумата на сите парни двоцифрени броеви. Добиената сума се печати на екран.
//int main()
//{
//    int sum=0;
//    for (int i=10;i<100;i++)
//    {
//        if(i%2==0)
//            sum+=i;
//        else
//            continue;
//    }
//    printf("Sumata na site parni dvocifreni broevi e: %d",sum);
//    return 0;
//}

//1.2 Да се напише програма за пресметување на сумата на сите непарни
//двоцифрени броеви. Програмата ја печати сумата на екран во следниот
//формат: 11 + 13 + 15 + 17 + ... + 97 + 99 = 2475 *bez koristenje if
//int main()
//{
//    int sum=0;
//    int i=11;
//    printf("%d",i);
//    sum=i;
//    i=i+2;
//    while(i<=99)
//    {
//        sum+=i;
//        printf(" + %d",i);
//        i+=2;
//    }
//    printf(" = %d",sum);
//    return 0;
//}

//2. Да се напише програма за пресметување на y = x^n за даден природен број n, n >= 1 и реален број x.
//int main()
//{
//    int brojac, n;
//    int x, y=1;
//    printf("Vnesi realen broj x: \n");
//    scanf("%d",&x);
//    printf("Vnesi go stepenot n: \n");
//    scanf("%d",&n);
//    for (brojac = 1;brojac<=n;brojac++)
//    {
//        y=y*x;
//    }
//    printf("%d^%d = %d",x,n,y);
//    return 0;
//}

//3. Да се напише програма што од n броеви (внесени од тастатура) ќе го определи
//бројот на броеви што се деливи со 3, при делењето со 3 имаат остаток 1, односно 2.
//int main()
//{
//    int n, broj, o0=0, o1=0, o2=0;
//    printf("Kolku broevi ke vneses? ");
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)
//    {
//        scanf("%d",&broj);
//        if(broj%3==0)
//            o0++;
//        if(broj%3==1)
//            o1++;
//        if(broj%3==2)
//            o2++;
//    }
//    printf("%d %d %d",o0,o1,o2);
//    return 0;
//}

//4. Да се напише програма што на екран ќе ги испечати сите четири-цифрени
//броеви кај кои збирот на трите најмалку значајни цифри е еднаков со
//најзначајната цифра.
//int main()
//{
//    int x, q, w, e, r;
//    for (x=1000;x<=9999;x++)
//    {
//        q=x%10;
//        w=x/10%10;
//        e=x/100%10;
//        r=x/1000;
//        if(q+w+e==r)
//            printf("%d ",x);
//    }
//    return 0;
//}

//5. Да се напише програма што ќе ги испечати сите броеви од зададен опсег кои се
//читаат исто и одлево надесно и оддесно налево.
//int main()
//{
//    int a,z;
//    printf("Vnesi minimalen i maksimalen broj na nizata: ");
//    scanf("%d%d",&a,&z);
//    for(int i=a;i<z;i++)
//    {
//        if ()
//    }
//
//
//
//    return 0;
//}
//
//int main()
//{
//    int y,i,n,x;
//    scanf("%d%d",&x,&n);
//    for (i=1,y=x;i<n;i++)
//    {
//        x*=x;
//    }
//    printf("%d=%d^%d",x,y,n);
//    return 0;
//}
