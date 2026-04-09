#include <stdio.h>

int xorOperation(int n, int start) {
    int res;
    for(int i=0;i<n;i++){
        res=res^(start+2*i);
    }
    return res;
}

int main() {
    int n,start,res;

    printf("n=");
    scanf("%d",&n);
    printf("start=");
    scanf("%d",&start);

    res=xorOperation(n,start);
    printf("%d",res);

    return 0;
}
