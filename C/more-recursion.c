#include <stdio.h>

//unsigned long factorial(int n);
int power(int base, int power);
int main(void)
{
    printf("Enter 2 number: ");
    int num , num2 = 0;
    scanf("%d", &num);
    scanf("%d", &num2);

    //printf("%ld\n", factorial(num));
    printf("%d\n", power(num, num2));
}

//unsigned long factorial(int n)
//{
   // if (n <= 1)
//        return 1;
    
  //  return n * factorial(n - 1);
//}

int power(int base, int power)
{
    for(power; power > 1; power--)
    {
        base = base * base;
    }
    return base;
}
