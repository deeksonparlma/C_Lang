#include <stdio.h>
int main(int argc, char const *argv[]) {
  int Age[5],Oldest,Youngest,Counter,OverEighteen=0,UnderEighteen=0;
  float Average,Sum=0;
  for (Counter =0;Counter<5;Counter++) {
    printf("Enter the age of student %d : ",Counter+1);
    scanf("%d",&Age[Counter]);
  }
  Oldest = Age[0];
  Youngest = Age[0];

  for (Counter = 0;Counter<5;Counter++) {
    Sum += Age[Counter];
    printf("\t\n %d \n",Age[Counter]);
    if (Oldest<Age[Counter]) {
      Oldest = Age[Counter];
    }
    if (Youngest>Age[Counter]) {
      Youngest = Age[Counter];
    }
  }
  for (Counter=0;Counter<5;Counter++) {
    if (Age[Counter]<18) {
      UnderEighteen +=1;
    }
    else{
      OverEighteen += 1;
    }
  }
  Average = Sum/5;
  printf("Sum = %.2f\n",Sum);
  printf("Average = %.2f\n",Average);
  printf("Youngest Age = %d \n",Youngest);
  printf("Oldest Age = %d \n",Oldest );
  printf("Number of Students Over Eighteen years = %d\n",OverEighteen );
  printf("Number of Students Under Eighteen years = %d\n",UnderEighteen );
  return 0;
}
