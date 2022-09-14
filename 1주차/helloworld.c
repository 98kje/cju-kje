#include <stdio.h>
//가위바위보 만들기

int main(void)
{
int num1;

printf("가위바위보시작\n");
printf("1, 2, 3 중 하나를 쓰세요 : \n");
scanf("%d", &num1);
if(num1 == 1)
{
  printf("이겼습니다\n");d
}
else if(num1 == 2)
{
  printf("비겼습니다\n");
}
else if(num1 == 3)
{
  printf("졌습니다\n");
}
 
  return 0;
}
