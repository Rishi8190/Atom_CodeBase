#include <stdio.h>

unsigned int reverse_bits(unsigned int num)
{
  int Total_Bits = sizeof(num)*8 ;
  uinsigned int rev_num = 0;
  while (num&1)
  {
    rev_num |= 1<<(Total_Bits-1);
    num = num>>1;
  }
  return rev_num;
}

int main()
{
  unsigned int rev_num = 0;
  unsigned int num = 0;
  printf("Enter num : \n");
  scanf("%d",&num );
  printf("\n");
  rev_num = reverse_bits(num);
  printf("Reverse_num is : %d\n",rev_num );
  return 0;
}
