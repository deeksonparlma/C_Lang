/*
Display marks entered
Find sum,average
grade based on average
Display number of failed subjects
Make recommendations
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  int ArraySize = 8,i=0;
  int MarksArray[ArraySize],Mark,Error=0,FailCount=0,apples;
  float Average,sum=0;
  char Grade;
  char UnitArray[8][50]={"Introduction to programming","Maths for science","Discrete Structures","Software applications","Physics","Computer networks","Communicaton SKills","Development Studies"};
  //Data collection
  while (i<ArraySize)
  {
    printf("Enter marks for %s : ",UnitArray[i]);
    scanf("%d",&MarksArray[i]);
  //check for absurd figures
    if (MarksArray[i]<=100) {
      sum += MarksArray[i];
      if (MarksArray[i] <40) {
        FailCount += 1;
      }
      i++;
    }
    else{
      Error += 1;
      break;
    }
  }

  // get average
  Average = sum/ArraySize;

  //processing
  if (Error == 0)
  {
    i=0;
    //Display marks
    while (i<ArraySize) {
      printf("\n\t%s - %d \n",UnitArray[i],MarksArray[i]);
      i++;
    }
  //Assign the marks and grade
    if (Average>70)
    {
      Grade = 'A';
    }
    else if(Average>60)
    {
      Grade = 'B';
    }
    else if(Average>50)
    {
      Grade = 'C';
    }
    else if(Average>40)
    {
      Grade = 'D';
    }
    else if(Average<40)
    {
      Grade = 'F';
    }

    //recommendations
    if (FailCount == 0) {
      printf("\nStatus : Proceed\n");
    }
    else if (FailCount<=3) {
      printf("\nStatus : Take supplementary\n" );
    }
    else if (FailCount <=5 ) {
      printf("\nStatus : Retake Unit\n");
    }
    else if (FailCount>5) {
      printf("\nStatus : Discontinued\n");
    }
    for (i=0; i<ArraySize; i++) {
      for (int j=0; j<ArraySize; j++) {
        if (MarksArray[j]<MarksArray[i]) {
          apples=MarksArray[i];
          MarksArray[i]=MarksArray[j];
          MarksArray[j]=apples;
        }
      }
    }

  //output
    printf("Failed = %d\n",FailCount );
    printf("Sum = %.2f\n",sum );
    printf("Average = %.2f\n",Average);
    printf("Grade = %c\n", Grade);
    printf("Marks in descending order :");
    for (i=0; i<ArraySize; i++) {
    printf("\t %d ",MarksArray[i]);
    }
  }
  else{
    printf("Error check your inputs\n");
  }
  printf("\n");
  return 0;
}
