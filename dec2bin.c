#include<stdio.h>
void decimalTobinary(int num)
{
    if (num == 0){
        printf("Binary : 0\n");
        return;
    }
    int binary[32];
    int i = 0;

    while (num > 0)
    {
        binary[i] = num %2;
        num /=2;
        i++;
    }
    printf("binary : ");
    for
}

int main()
{
    int decimal;
    printf("ENter a dicimal number")
}