#include <stdio.h>
int main(int argc, char const *argv[]) {
  int NTerms,Term = 2,sum =0,Ratio =3;
  int counter;
  printf("How many terms : ");
  scanf("%d",&NTerms);
  for (counter =1 ;counter<=NTerms;counter++) {
    sum += Term;
    printf("\t %d",Term);
    Term *= Ratio;
  }
  printf("\n\n\t sum= %d \n",sum);
  return 0;
}
