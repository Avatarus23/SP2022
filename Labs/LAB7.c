#include <stdio.h>

//PONEDELNIK
//1. promena na znakot na glavnata dijagonala
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for (int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for (int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(i==j)
//                a[i][j]*=(-1);
//        }
//    }
//    for (int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            printf("%3d",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//2.prosek na suma levo od sporedna dijagonala i desno clenovite sto se pomali od toj prosek da se zamenat so -1
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    float suma=0,brojac=0;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=1;i<n-1;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(i+j==n-1) continue;
//            suma+=a[i][j];
//            brojac++;
//            if(i+j>n-1)
//            {
//                if(a[i][j]<(suma/brojac))
//                {
//                    a[i][j]=(-1);
//                }
//            }
//        }
//        suma=0;
//        brojac=0;
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            printf("%3d",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//test primer
//4
//2 3 5 9
//7 8 4 2
//4 2 3 5
//7 10 9 2

//3.
//int main()
//{
//    int n, m;
//    scanf("%d %d",&n,&m);
//    float a[n][m];
//    float min, max;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int j=0;j<m;j++)
//    {
//        for(int i=0;i<n;i++)
//        {
//            if(i==0 && j==0)
//            {
//                min=a[i][j];
//                max=a[i][j];
//            }
//            if(a[i][j]>max)
//                max=a[i][j];
//            if(a[i][j]<min)
//                min=a[i][j];
//
//            if(i==n-1)
//            {
//                for(int i=0;i<n;i++)
//                {
//                    for(int j=0;j<m;j++)
//                    {
//                        a[i][j]=(a[i][j]-min)/(max-min);
//                    }
//                }
//            }
//        }
//    }
////    for(int i=0;i<n;i++)
////    {
////        for(int j=0;j<m;j++)
////        {
////            a[i][j]=(a[i][j]-min)/(max-min);
////        }
////    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            printf("%5.2f",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//test primer
//5 5
//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25

//SREDA
//3. Diplenje na matrica
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for (int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    if(n%2!=0)
//        printf("GRESKA");
//    else
//    {
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<n/2;j++)
//            {
//                a[i][j]+=a[i][n-1-j];
//            }
//        }
//        for(int i=0;i<n/2;i++)
//        {
//            for(int j=0;j<n;j++)
//            {
//                a[i][j]+=a[n-1-i][j];
//            }
//        }
//        for(int i=0;i<n/2;i++)
//        {
//            for(int j=0;j<n/2;j++)
//            {
//                printf("%3d",a[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//1.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                if(i==j)
//                a[i][j]*=(-1);
//            }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            printf("%3d",a[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//CETVRTOK
//1.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(i==j)
//            {
//                a[i][j]*=(-1);
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            printf("%3d",a[i][j]);
//        } printf("\n");
//    }
//
//    return 0;
//}

//2.fudbalski teren
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int a[n][m];
//    int xIgrac, yIgrac;
//    scanf("%d %d",&xIgrac,&yIgrac);
//    int xTopka, yTopka;
//    scanf("%d %d",&xTopka,&yTopka);
//    int xGol, yGol;
//    scanf("%d %d",&xGol,&yGol);
//
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(i==xIgrac && j==yIgrac){
//                printf("i ");
//            }
//            else if(i==xGol && j==yGol){
//                printf("] ");
//            }
//            else if(i==xTopka && j==yTopka){
//                printf("o ");
//            }
//            else
//            printf("- ");
//        } printf("\n");
//    }
//    int pomxTopka,pomyTopka;
//    scanf("%d %d",&pomxTopka,&pomyTopka);
//    int flag=1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//             if(pomxTopka==xGol && pomyTopka==yGol)
//             {
//                 printf("GOAL !");
//                 break;
//             }
//             else if(pomxTopka>n && pomyTopka>m)
//             {
//                printf("OUT !");
//                break;
//             }
//             else
//             {
//                 flag=0;
//             }
//        }
//    }
//    if(flag==0)
//    {
//        for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(i==xIgrac && j==yIgrac){
//                printf("i ");
//            }
//            else if(i==xGol && j==yGol){
//                printf("] ");
//            }
//            else if(i==pomxTopka && j==pomyTopka){
//                printf("o ");
//            }
//            else
//            printf("- ");
//        } printf("\n");
//    }
//    }
//    return 0;
//}

//3.
//int main()
//{
//    int n, m;
//    scanf("%d %d",&n,&m);
//    int a[n][m],b[n][m];
//    int br=0;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            scanf("%d",&b[i][j]);
//        }
//    }
//
//    for(int k=0;k<m;k++)
//    {
//        //int f = 1;
//        for(int i=0;i<m;i++)
//        {
//            int f=1;
//            for(int j=0;j<n;j++)
//            {
//                if(a[j][k] != b[j][i])
//                {
//                    f = 0;
//                    break;
//                }
//            }
//            if(f)
//            {
//                br++; //brojac
//            }
//        }
//    }
//    printf("%d", br);
//    return 0;
//}
//4 4
//1 2 4 6
//2 3 4 5
//5 1 3 1
//1 3 4 4
//
//2 2 2 4
//3 2 3 5
//5 2 1 3
//1 1 3 4
