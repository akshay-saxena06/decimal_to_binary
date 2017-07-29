#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int binary_conversion(int);

int main()
{
   int num, bin,i,number;

   printf("Enter a number: ");
   scanf("%d", &num);
	number=pow(2,num);
   for(i=0;i<number;i++){
	bin = binary_conversion(i);
	if(bin==0||bin==1)
    printf("0%d\n",bin);
    else
	printf("%d\n",bin);
   }
   //bin = binary_conversion(num);
   //printf("The binary equivalent of %d is %d\n", num, bin);
system("pause");
   return 0;
}

int binary_conversion(int num)
{
    if (num == 0)
    {
        return 00;
    }
    else if(num==1)
    return 01;
    else
    {
        return (num % 2) + 10 * binary_conversion(num / 2);
    }
}
