#include <stdio.h>

float multiple (float base, int power){
  float ans = base;
  for(int i = 1 ; i < power ; i++){
    ans *= base;
  }
  if(ans < 0 && power % 2 == 0){
    ans = ans * (-1);
  }
  return(ans);
}

int main(void) {
  float x, y, result;
  while(1){
  printf("Enter Your Value : ");
  scanf("%f",&x);
  printf("Enter Your Multiple : ");
  scanf("%f",&y);
  if (y != (int)y || y < 0){
    break;
  }
  else if (y == 0){
    result = 1;
  }
  else {
    result = multiple(x, y);
    printf("Your Result is : %.2f\n",result);
  }
  }
  return 0;
}

