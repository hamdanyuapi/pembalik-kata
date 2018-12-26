#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[100];
int b,c;
int main()
{
    printf( "masukkan kata :");
    gets(a);
    strrev(a);
    printf( "balikkan kata : %s",a);
}
