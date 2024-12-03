#include<stdio.h>
int main(){
  int a = 10,b;

  printf("a = %d\n",a);
  a++;
  printf("After a++ = %d\n",a++);
  ++a;
  printf("After ++a = %d\n",++a);
  b = a++;
  printf("b = a++ = %d\n",b);
  b = ++a;
  printf("b = ++a = %d\n",b);
  a--;
  printf("After a-- = %d\n",a);
  --a;
  printf("After --a = %d\n",--a);
  b = a--;
  printf("b = a-- = %d\n",b);
  return 0;
}