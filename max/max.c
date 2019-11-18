#include <stdio.h>
int Marks(int A,int B);
int main(int argc, char const *argv[]) {
  int Num1,Num2,count=0;
  printf("Enter number :");
  scanf("%d",&Num1);
  printf("Enter number :");
  scanf("%d",&Num2);
  printf("the bigger number is %d\n",Marks(Num1,Num2));
  return 0;
}
int Marks(int A,int B)
{
  if(A>B)
  {
    return A;
  }
  else
  {
    return B;
  }
}
