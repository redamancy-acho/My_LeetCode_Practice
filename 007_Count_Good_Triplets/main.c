#include <stdio.h>
#include <stdlib.h>

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int cnt=0;
    
    for(int i=0;i<arrSize;i++){
        for(int j=i+1;j<arrSize;j++){
            for(int k=j+1;k<arrSize;k++){
                if((abs(arr[i]-arr[j])<=a)&&(abs(arr[j]-arr[k])<=b)&&(abs(arr[i]-arr[k])<=c)){
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main(){
    int a,b,c,n,count,arr[1000];
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    printf("n=");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count=countGoodTriplets(arr, n, a, b, c);
    printf("%d",count);
    return 0;
}
