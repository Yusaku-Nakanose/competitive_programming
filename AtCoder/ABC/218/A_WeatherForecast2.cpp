#include <stdio.h>
int main() {
    int n;
    char s[8]; // 余裕を持つため
    scanf("%d %s", &n, s);
    if(s[n-1] == 'o')puts("Yes");
    else puts("No");
    return 0;
}