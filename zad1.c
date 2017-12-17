#include<stdio.h>
#include<stdlib.h>
int czas(int x){
  int h = x/60;
  int m = x%60;
  printf("Czas = %dh %dm\n",h,m);
  
}
int main()
{
  int minuty;
  printf("Podaj ilosc minut: \n");
  scanf("%d",&minuty);
  const int x = minuty;
  czas(minuty);

}
