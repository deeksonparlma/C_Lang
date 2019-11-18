//creating a file
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char Name[20], Course[20];
  int Age;
  FILE *info;
  printf("Enter the first name :");
  scanf("%s",Name);

  printf("Enter the Course name :");
  scanf("%s",Course);

  printf("Enter your age : ");
  scanf("%d",&Age);

  info = fopen("/home/dickson/Documents/C/BCS/details.txt","a");
  fprintf(info,"%s ",Course);
  fprintf(info,"%s ",Name);
  fprintf(info,"%d \n",Age);
  fprintf(info, "___________________ \n");
  return 0;
}
