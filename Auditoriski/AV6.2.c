#include <stdio.h>

//1.Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
//разликата на збирот на елементите на непарните колони и збирот на
//елементите на парните редици. Матрицата не мора да биде квадратна.
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int a[n][m];
//    int nk=0,pr=0;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            if(i%2==0)
//                pr=pr+a[i][j];
//            if(j%2!=0)
//                nk=nk+a[i][j];
//        }
//    }
//    printf("Razlikata e: %d",nk-pr);
//    return 0;
//}

//2. Да се напише програма која за матрица внесена од тастатура ќе ги замени
//елементите од главната дијагонала со разликата од максималниот и
//минималниот елемент во матрицата. Резултантната матрица да се испечати
//на екран.
//int main()
//{
//    int n,m;
//    scanf("%d %d",&n,&m);
//    int a[n][m];
//    int min,max,razlika;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            if(i==0 && j==0)
//            {
//                max=a[i][j];
//                min=a[i][j];
//            }
//            else if(a[i][j]<min)
//                min=a[i][j];
//            else if(a[i][j]>max)
//                max=a[i][j];
//        }
//    }
//    razlika=max-min;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            if(i==j)
//                a[i][j]=razlika;
//        }
//    }
////    printf("razlika: %d\n",razlika);
////    printf("max: %d\n",max);
////    printf("min: %d\n",min);
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            printf("%d\t",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//3. Да се напише програма која за квадратна матрица внесена од тастатура ќе
//испечати на екран дали таа е симетрична во однос на главната дијагонала.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    int flag=1;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(a[i][j]!=a[j][i])
//            {
//                flag=0;
//                break;
//            }
//        }
//        if(flag==0)
//            break;
//    }
//    if(flag==0)
//        printf("Matricata NE e simetricna");
//    if(flag==1)
//        printf("Matricata e simetricna");
//    return 0;
//}
