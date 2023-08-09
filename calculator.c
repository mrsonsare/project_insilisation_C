#include <stdio.h>

int main(void) {
  float fv;//first value
  char op; //oprator
  float sv;//second value
  float ans =0;//Answer
  printf("Enter the Values : \n");
  scanf("%f %c %f",&fv,&op,&sv);
  
  switch(op)
{
  case '+' :  printf("ADDTION :\n"); ans = fv + sv ;
    
  break;
  case '-' : printf("SUBTRACTION :\n");
    ans = fv - sv ;
   
  break;
  case '*' :printf("MULTIPLICATION :\n");
    ans = fv * sv ;
   
  break;
  case '/' :printf("DIVISION :\n");
    ans = fv / sv ;
  
  break;
}
  
  
 // printf("%f %c %f = %f",fv,op,sv,ans);
    printf("%.9g%c%.9g =  %.6g\n\n",fv,op,sv,ans);
  printf(" ");// To Stay the Answer
  
  return 0;
}
