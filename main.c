//
// Created by keer on 2019/12/26.
//
#include <stdio.h>
#include "LeetCode.h"



void line_start(int a){
    printf("********************LeetCode_%d********************\n",a);
}
void line_end(){
    printf("**************************************************\n");
}

void main(){

    /**
     * 调用LeetCode_1中的函数
     */
    line_start(1);
    int nums[]={2,11,15,7};
    int sum1[]={0,0};
    int *sum=sum1;
    sum=twoSum(nums,4,9,sum);
    printf("%d,,,%d\n",sum1[0],sum1[1]);
    line_end();


    line_start(3);
    char *s="abcbefg";
    printf("结果=%d\n",lengthOfLongestSubstring(s));
    line_end();
}