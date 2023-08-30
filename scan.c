#include<stdio.h>
int main()
{
    int a;
    float f;
    char s[10];
    printf("ENter value: ");
    //scanf("%d", &a); //integer = %d
    //scanf("%f", &f)
    scanf("%s", s);
    //printf("Value is %d", a);
    //printf("Value is %.2f", f);
    printf("Value is %s", s);
    return 0;
}