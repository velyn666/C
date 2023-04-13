#include <stdio.h>
int main(){
    int num, sum=0, arr[100001], a=-1;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[++a]);
        if (arr[a]==0)
        {
            if(a != -1){
                while(arr[a-1]==0){
                    a--;
                }
                arr[a-1] = 0;
                a -= 2;
            }
        }
        
    }
    for (int i = 0; i <= a; i++)
    {
        sum+=arr[i];
    }
    printf("%d", sum);
}