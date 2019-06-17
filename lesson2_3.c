//
// Created by keer on 2019/6/17.
//

#include <stdio.h>
#include <stdlib.h>

int f1(unsigned n){
    int sum=1,power=1;
    for(unsigned i=0;i<=n-1;i++){
        power *=2;
        sum+=power;
    }
    return sum;
}

float f2(unsigned n) {
    float sum = 1, power = 1;
    for (unsigned i = 0; i <= n - 1; i++) {
        power *= 2;
        sum += power;
    }
    return sum;
}

main(){
    int a,b;
    float c;
    char string[32];
    printf("请输出二进制位数：");
    scanf("%d",&a);
    b=f1(a);
    c=f2(a);
    itoa(b,string,2);
    printf("\n方法一：");
    printf("\n十进制：%d，  二进制：%s \n",b,string);


    printf("hello, world");

}

