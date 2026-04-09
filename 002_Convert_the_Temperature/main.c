#include <stdio.h>
#include <stdlib.h>

double* convertTemperature(double celsius,int* returnSize)
{
    double *ans=(double*)malloc(sizeof(double)*2);
    ans[0]=celsius+273.15;
    ans[1]=celsius*1.80+32.00;
    *returnSize=2;
    return ans;

}

int main() {
    double celsius;
    double* ans;
    int returnSize;
    printf("摄氏度：");
    scanf("%lf",&celsius);
    ans=convertTemperature(celsius,&returnSize);
    printf("【开氏度：%.5lf,华氏度：%.5lf】",ans[0],ans[1]);
    return 0;
}
