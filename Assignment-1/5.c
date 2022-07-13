#include <stdio.h>
int main()
{
    int length;
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    length=printf("%s",str);
    printf("\nlength = %d",length);
    return 0;

}