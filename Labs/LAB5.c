#include <stdio.h>

//1. Polu elka
//int main()
//{
//    int n;
//    int temp=2;
//    int z;
//    scanf("%d",&n);
//    for(int i=0;i<n+n-1;i++)
//    {
//        if(i==0)
//        {
//        printf("*\n");
//        }
//        else if(i!=0 && i%2!=0)
//        {
//            printf("|\n");
//        }
//        else if(i!=0 && i%2==0)
//        {
//            printf("|");
//            z=temp;
//            while(z>0)
//            {
//                printf("*");
//                z--;
//            }
//            temp++;
//            printf("\n");
//        }
//    }
//    return 0;
//}
//1.1 Polu elka obid br.2 (iako prviot e tocen xd)
//int main()
//{
//    int n;
//    int temp=2;
//    int lampioni;
//    scanf("%d",&n);
//    for(int i=0;i<n+n-1;i++)
//    {
//        if(i==0)
//        {
//            printf("*\n");
//        }
//        else if(i%2!=0)
//        {
//            printf("|\n");
//        }
//        else if(i%2==0)
//        {
//            printf("|");
//            lampioni=temp;
//            while(lampioni!=0)
//            {
//                printf("*");
//                lampioni--;
//            }
//            temp++;
//            printf("\n");
//        }
//    }
//    return 0;
//}

//2. Morzeova azbuka
//int main()
//{
//    int n;
//    int broj;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        if(broj%5==0)
//            printf("-----\n");
//        if(broj%5==1)
//            printf(".----\n");
//        if(broj%5==2)
//            printf("..---\n");
//        if(broj%5==3)
//            printf("...--\n");
//        if(broj%5==4)
//            printf("....-\n");
//    }
//    return 0;
//}

//3. Kolok zad 1, na pravoagolnikot ili vnatre DA, nadvor NE
//int main()
//{
//    int x1,x2,x3,x4;
//    int y1,y2,y3,y4;
//    scanf("%d %d",&x1,&y1);
//    scanf("%d %d",&x2,&y2);
//    scanf("%d %d",&x3,&y3);
//    scanf("%d %d",&x4,&y4);
//    if(x3>=x1 && x3<=x2 && y3>=y1 && y3<=y2)
//    {
//        printf("DA\n");
//    }
//    else
//        printf("NE\n");
//    if(x4>=x1 && x4<=x2 && y4>=y1 && y4<=y2)
//    {
//        printf("DA\n");
//    }
//    else
//        printf("NE\n");
//    return 0;
//}

//4. Kolok zad 1, na pravoagolnikot DA, vnatre ili nadvor NE
//int main()
//{
//    int x1,x2,x3,x4;
//    int y1,y2,y3,y4;
//    scanf("%d %d",&x1,&y1);
//    scanf("%d %d",&x2,&y2);
//    scanf("%d %d",&x3,&y3);
//    scanf("%d %d",&x4,&y4);
//    if(x3==x1 || x3==x2)
//    {
//        if(y3>=y1 && y3<=y2)
//        {
//            printf("DA\n");
//        }
//        else
//            printf("NE\n");
//    }
//    else if(y3==y1 || y3==y2)
//    {
//        if(x3>=x1 && x3<=x2)
//        {
//            printf("DA\n");
//        }
//        else
//            printf("NE\n");
//    }
//
//    if(x4==x1 || x4==x2)
//    {
//        if(y4>=y1 && y4<=y2)
//        {
//            printf("DA\n");
//        }
//        else
//            printf("NE\n");
//    }
//    else if(y4==y1 || y4==y2)
//    {
//        if(x4>=x1 && x4<=x2)
//        {
//            printf("DA\n");
//        }
//        else
//            printf("NE\n");
//    }
//    return 0;
//}

//5. Format na saat vo makedonska forma
//int main()
//{
//    int h,m,s;
//    scanf("%d %d %d",&h,&m,&s);
//    if(h==12 && m==0 && s==0)
//    {
//        printf("%d:%02d:%02dNOON",h,m,s);
//    }
//    else if(h>=0 && h<12)
//    {
//        if(h==0)
//        {
//            h=12;
//        }
//        else if(h>=13 && h<=23)
//        {
//            h=h-12;
//        }
//        printf("%02d:%02d:%02dAM",h,m,s);
//    }
//    else if(h>=13 && h<=24)
//    {
//        if(h==0)
//        {
//            h=12;
//        }
//        else if(h>=13 && h<=23)
//        {
//            h=h-12;
//        }
//        printf("%02d:%02d:%02dPM",h,m,s);
//    }
//    return 0;
//}

//6. Forma na saat vo makedonska forma 2.0
//int main()
//{
//    int h,m,s;
//    char znak;
//    scanf("%d %d %d\n",&h,&m,&s);
//    scanf("%c",&znak);
//    if(znak=='A')
//    {
//        if(h==12)
//            h=0;
//        if(h>12 && h<=24)
//            h-=12;
//        printf("%02d:%02d:%02d",h,m,s);
//    }
//    else if(znak=='P')
//    {
//        if(h>=0 && h<=12)
//            h+=12;
//        printf("%02d:%02d:%02d",h,m,s);
//    }
//    return 0;
//}

//7. Sezoni i studenti
//int main()
//{
//    int n,broj;
//    scanf("%d",&n);
//    if(n<100)
//    {
//       for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        if(broj%4==1)
//            printf("esen\n");
//        if(broj%4==2)
//            printf("zima\n");
//        if(broj%4==3)
//            printf("prolet\n");
//        if(broj%4==0)
//            printf("leto\n");
//    }
//    }
//    else
//        printf("Nevaliden broj na studenti");
//    return 0;
//}

//8. Ako ima dve isti bukvi edna do druga vo nekoj zbor vo recenica prvata da ja napravi golema
//int main()
//{
//    char c, c0;
//    scanf("%c",&c0);
//    while(scanf("%c",&c))
//    {
//        if(c=='.')
//            break;
//        else
//        {
//            if(c0==c)
//                printf("%c",c0-32);
//            else
//                printf("%c",c0);
//            c0=c;
//        }
//    }
//    return 0;
//}

//9. Podreden Broj (sekoja sledna cifra >= prethodnata), da se ispecati sekoj takov broj, zbir na site takvi broevi, kolku takvi broevi ima
//int main()
//{
//    int n,broj;
//    int zbir=0,broevi=0;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        int temp=broj;
//        int cifra;
//        int flag=1;
//        while(temp)
//        {
//            cifra=temp%10;
//            if(cifra<temp/10%10)
//            {
//                flag=0;
//            }
//            if(flag==0)
//                break;
//            temp=temp/10;
//        }
//
//        if(flag==1)
//        {
//            zbir+=broj;
//            broevi++;
//            printf("Takov broj e: %d\n",broj);
//        }
//    }
//    printf("Zbirot e:%d\nBrojot na takvi broevi e: %d\n",zbir,broevi);
//    return 0;
//}

//10. Ako ima dve soglaski edna do druga vo nekoj zbor od recenica, smeni im gi mestata (max 2 soglaski edna do druga)
//koga ana ili goran oro igraat site gledaat.
//int main()
//{
//    char c, c0;
//    scanf("%c",&c0);
//    while(scanf("%c",&c))
//    {
//        if(c=='.')
//            break;
//        else
//        {
//            if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c0!='a'&&c0!='e'&&c0!='i'&&c0!='o'&&c0!='u'&&c!='32'&&c0!='32'&&c!='46'&&c0!='46')
//            {
//                char temp;
//                temp=c0;
//                c0=c;
//                c=temp;
//                printf("%c",c0);
//            }
//
//            else
//                printf("%c",c0);
//            c0=c;
//        }
//    }
//    return 0;
//}

//11. Sreden broj (cifri po opagjacki redosled), da se ispecati sekoj sreden broj, minimalniot sreden broj, ako ne postoi sreden broj printf -1
//int main()
//{
//    int n, broj, min=0;
//    int flag=1;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        int brojObratno=0;
//        int temp=broj;
//        int cifra;
//        while(temp)
//        {
//            cifra=temp%10;
//            brojObratno=brojObratno*10+cifra;
//            temp/=10;
//        }
//        printf("%d",brojObratno);
//        cifra=0;
//        temp=brojObratno;
//        while(temp)
//        {
//            cifra=temp%10;
//            if(cifra<temp/10%10)
//            {
//                flag=0;
//            }
//            if(flag==0)
//                break;
//            temp=temp/10;
//        }
//        printf("DA");
//        if(flag==1)
//        {
//            min=broj;
//            flag=0;
//        }
//        if(broj<min)
//        {
//            min=broj;
//        }
//        printf("%d",min);
//    }
//    return 0;
//}
//USTE EDNAS (PRV PAT NEUSPESNO)
//int main()
//{
//    int n;
//    int broj;
//
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        int temp=broj;
//        int cifra;
//        int flag=1;
//        while(temp)
//        {
//            cifra=temp%10;
//            if(cifra>temp/10%10)
//            {
//                flag=0;
//            }
//            if(flag==0)
//                break;
//            temp=temp/10;
//        }
//
//        if(flag==1)
//        {
//            printf("Takov broj e: %d\n",broj);
//        }
//    }
//    return 0;
//}

//12.brojanica
//int main()
//{
//    int n;
//    int broj=0;
//    int obratno=0;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)
//    {
//        broj=broj*10+i;
//        int temp=broj;
//        int cifra;
//        obratno=0;
//        while(temp)
//        {
//            cifra=temp%10;
//            obratno=obratno*10+cifra;
//            temp/=10;
//        }
//        printf("%d\n",broj);
//        printf("%d\n",obratno);
//    }
//    return 0;
//}
//OD MARTO
//int main ()
//{
//	int i,j,n,k;
//	printf("Kolku da iznesuva krajniot broj? ");
//	scanf("%i",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%i",j);
//		}
//		printf("\n");
//		for(k=i;k>=1;k--)
//		{
//			printf("%i",k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//LABS 5 STO MI SE PADNAA
//1.Бројаница е „број“ добиен со слепување на првите N броеви, по редослед. На пример, за N=4 тоа е 1234, за N=11 тоа е 1234567891011.
//Обратна бројаница е слично како погоре, но се започнува од N па броевите се слепуваат обратно. Така за N=5 тоа е 54321.
//За дадено N, на екран испишете ги по редослед: Бројаница за 1, обратна бројаница за 1, бројаница за 2, обратна бројаница за 2...,
//се така до обратна бројаница за N.
//int main()
//{
//    int i, j, N;
//    scanf("%d", &N);
//    for(i = 1; i <= N; i++){
//        for(j = 1; j <= i; j++){
//            printf("%d",j);
//        }
//        printf("\n");
//        for(j = i; j > 0; j--){
//            printf("%d",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//2.Среден број е број кај кој секоја следна цифра е помала на претходната (гледајќи од најзначајната кон најмалку значајната).
//На пример, 7421. Едноцифрените броеви не се средни броеви.
//Да се напише програма во која прво се внесува број N кој го определува вкупниот број на броеви кои ќе бидат внесени од тастатура.
//Потоа се внесуваат N-те броеви, еден по еден. На излез, потребно е да се испечатат сите броеви кои го исполнуваат условот за среден број,
//а потоа да се отпечати и минималниот среден број од внесените броеви.
//Доколку не постои број кој го задоволува условот се печати вредност -1.
//int main()
//{
//    int broj1,broj,prev,segasen;
//    int suma=0;
//    int brojac=0;
//    int n;
//    int min;
//    int flag=1;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj1);
//        broj=broj1;
//        while(broj>0)
//        {
//            if(broj>0 && broj<=9)
//            {
//                suma=suma+broj1;
//                printf("%d\n",broj1);
//                brojac++;
//                if(flag==1)
//                {
//                    min=broj1;
//                    flag=0;
//                }
//                else
//                {
//                    if(min>broj1)
//                    {
//                        min=broj1;
//                    }
//                }
//                break;
//            }
//            else
//            {
//                prev=broj%10;
//                segasen=broj/10%10;
//            }
//            if(prev<segasen)
//            {
//                broj=broj/10;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//    }
//    if(brojac==0)
//        printf("-1");
//    else
//    printf("%d",min);
//
//    return 0;
//}
//3.Од тастатура се читаат знаци (од некој текст кој се состои од различни знаци и кој претставува некаква реченица,
//т.е. се состои од неколку збора составени од мали букви и секогаш завршува со точка) се дури не се прочита точка.
//Да се направи програма која на излез ќе ги отпечати истите зборови со таа разлика што на секое
//појавување на две согласки едно до друго ќе им ги замени местата.
//Забелешка: да се претпостави дека нема зборови кои ќе имаат повеќе од две согласки едно по друго.
//int main()
//{
//    char c0, c;
//    scanf("%c",&c0);
//    while(scanf("%c",&c))
//    {
//        if(c=='.')
//        {
//            break;
//        }
//        else
//        {
//           if(c0>='b' && c0<='z' && c0!='a' && c0!='e' && c0!='i' && c0!='o' && c0!='u' && c>='b' && c<='z' && c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
//           {
//            char temp;
//            temp=c0;
//            c0=c;
//            c=temp;
//            printf("%c",c0);
//        }
//        else
//        {
//            printf("%c",c0);
//        }
//        c0=c;
//        }
//    }
//    printf("%c.",c0);
//    return 0;
//}
