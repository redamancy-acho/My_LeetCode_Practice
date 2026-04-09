#include <stdio.h>

int numIdenticalPairs(int* nums, int numsSize){
    int cnt=0;
    for(int i=0; i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n,nums[1000],count=0;

    printf("n=");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    count=numIdenticalPairs(nums,n);
    printf("%d",count);
    return 0;
}
