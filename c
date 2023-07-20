#include <stdio.h>
int main ( void){
int salary;
  printf("enter you salary :");
    scanf("%d",& salary);
  if(salary >=250000 && salary<500000){
    printf("you should give up to 5 %% tax\n. ");
    float tax= 0.05 * salary;
    printf("%f\n",tax);
  }
   else if  (salary >=500000 && salary <1000000 ){
     printf(" you should give  20 %% tax\n");
     float tax2 =0.2 * salary;
     printf("%f\n",tax2);
   }
  else  if (salary >=100000 && salary <=2000000 ){
     printf(" you should give  30 %% tax\n");
     float tax3 =0.3 * salary;
     printf("%f\n",tax3);
   }
  else {
    printf(" no information regarding this salary ");
  }
  return 0;
}
