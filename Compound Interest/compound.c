/*calculats compound interest
displays interest yearly
display all the compounded interest yearly
*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int Time,Principle,Years =1;
  const float Rate = 0.1;
  float Interest,compoundedTotal;

  //collect data
  printf("Enter Principle Amount: ");
  scanf("%d", &Principle);

  printf("Enter the Years: ");
  scanf("%d",&Time);

  //calculations
  while (Years <= Time) {
    Interest = Principle * Rate * 1;
    compoundedTotal = Principle + Interest;
    Principle += Interest;
    printf("\t Interest in year %d is %.2f and compounded total Amount is %.2f \n",Years,Interest,compoundedTotal);
    Years++;
  }
 // Interest =compoundedTotal -  Principle;
  // printf("\n\tThe total compounded  interest is %.2f",Interest);
  printf("\n\t Compounded Amount is %.2f \n",compoundedTotal );
  return 0;
}
