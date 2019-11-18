#include <stdio.h>
#include <math.h>
int Hyp(int A,int B);
int main(int argc, char const *argv[]) {
  int Opposite,Adjacent,hypotenus;

  //collect input
  printf("Enter the Opposite side : ");
  scanf("%d",&Opposite);
  printf("Enter the Adjacent side : ");
  scanf("%d",&Adjacent);

  printf("Hypotenus is %d\n",Hyp(Opposite,Adjacent));
  return 0;
}
int Hyp(int A,int B)
{
  return sqrt(pow(A,2)+(pow(B,2)));
}
