#include <stdio.h>

//1 zadaca cetvrtok //
//int divisibleByK(int number, int k); //vrakja 1 ako k e delitel na number vo sprotivno 1
//int nextDivisibleByK(int number, int k); //vrakja prv broj pogolem od number deliv so k koristejki ja prethodnata funkc.
//2 zadaca cetvrtok //interesen broj

//zadaca od Davor Neta
//Од стандарден влез се чита цел број К, по што се читаат N цели броеви. Да се напише програма која за секој прочитан број на
//стандарден излез ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени. Печатењето на
//цифрите поголеми од K да се реализира со посебна рекурзивна функција.
//Пример: Доколку К = 5, за бројот 8423871 треба да се отпечати 887 : 23

void pogolem(int n,int k)
{
    if(n==0){
        return 0;
    }
    if(n%10 > k){
        return pogolem
    }
}

int main()
{
    int k,n;
    scanf("%d",&k);
    scanf("%d",&n);
    printf("%d",(pogolem(n,k)));
    return 0;
}
