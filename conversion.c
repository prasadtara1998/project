#include <stdio.h>

int main()
{
  float km;
  int a;
  printf("Enter the distance between two cities: ");
  scanf("%f",&km);
  printf("To display in feet type 1\nTo display in meters type 2\nTo display in inches type 3\nTo display in centimeters type 4: ");
  scanf("%d",&a);
  switch(a)
  {
      case 1:
      printf("Distance in feet is: %.2f",3281*km);
      break;
      case 2:
      printf("Distance in meters is: %.2f",1000*km);
      break;
      case 3:
      printf("Distance in inches is: %.2f",39370*km);
      break;
      case 4:
      printf("Distance in centimeters is: %.2f",100000*km);
      break;
  }
    return 0;
}
