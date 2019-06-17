//
// Created by keer on 2019/6/17.
//
/**
 * 此文件是学习计算机的浮点数计算而写，主要针对王道组成原理2.3.3中综合应用的第十题。
 * 涉及到将int类型转换为二进制数 用 itoa函数即可。
 * float类型转换为二进制数目前没有现成的库，还需要调研，不行只能自己去写。
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * 题目中涉及的函数1
 * @param n
 * @return
 */
int f1(unsigned n){
    int sum=1,power=1;
    for(unsigned i=0;i<=n-1;i++){
        power *=2;
        sum+=power;
    }
    return sum;
}
/**
 * 题目中涉及的函数2
 * @param n
 * @return
 */
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

//TODO：float转化为二进制输出，没有现成的函数，需要自己写；二进制已经有了，itoa函数就能办到。
    printf("hello, world");

}

