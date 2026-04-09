#include <stdio.h>

int smallestEvenMultiple(int n)
{
    return n%2==0?n:2*n;
}

int main() {
    int n,mini;
    printf("n=");
    scanf("%d",&n);
    mini=smallestEvenMultiple(n);
    printf("mini=%d",mini);
    return 0;
}
