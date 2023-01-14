#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char c,s[50],sen[100];
    scanf("%c", &c);
    scanf("%s\n", &s);
    scanf("%[^\n]s", &sen);
    printf("%c", c);
    printf("\n%s", s);
    printf("\n%s", sen);
    return 0;
}