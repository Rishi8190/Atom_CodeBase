#include<stdio.h>
#include<math.h>

long int rev_digit(long int num)
{
  long int rev_num = 0;

  while(num)
  {
    rev_num = rev_num*10 + num%10;
    num = num/10;
  }
  return rev_num;
}

int find_digit(long int num, int pos)
{
  int digit = 0;
  while(pos)
  {
    digit = num%10;
    pos--;
    num = num/10;
  }
  printf("Digit is %d\n",digit);
  return digit;
}

int even_odd(int num)
{
  int result = 0;
  if(num&1)
  {
    printf("The digit is ODD\n");
  }else{
    printf("The digit is Even\n");
  }
  return 0;
}

int ispoweroftwo(int num)
{
  return (num && (!(num&(num-1))));
}

int main()
{
  long int num = 12345679934,rev_num = 0;
  int pos = 0,digit = 0;
  int result = 0;
  printf("The given number is : %ld\n", num);
  rev_num = rev_digit(num);
  printf("The number after reversal is : %ld\n",rev_num);
  printf("Enter the digit to check for even/odd : \n");
  scanf("%d",&pos);
  printf("\nEntered pos is : %d\n",pos);
  digit = find_digit(num,pos);
  printf("The digit at given position : %d is %d\n",pos,digit);
  even_odd(digit);
  return 0;
}
