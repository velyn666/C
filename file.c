#include <stdio.h>
int main(){
    char sunbaenimmotpuljulalathjoe[501] = {0,};
    int plus = 0, i = 0;
    while (scanf("%c", &sunbaenimmotpuljulalathjoe[i]) != EOF) {
        plus+=sunbaenimmotpuljulalathjoe[i];
        i++;
    }
    if(plus % 3==0) printf("1");
    else printf("0");
}