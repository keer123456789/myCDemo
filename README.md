# myCDemo

此代码库是刷LeetCode题，准备机考用！
题源：https://leetcode-cn.com/problemset/all/
##使用方法
运行`main.c`中的mian函数

##题目
###第1题
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个整数，并返回他们的数组下标。你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。   

 实例：   
 给定 nums = [2, 7, 11, 15], target = 9    
 因为 nums[0] + nums[1] = 2 + 7 = 9    
 所以返回 [0, 1]  
 
 ###第3题
   
  给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。   
      
  示例 1:   
  输入: "abcabcbb"   
  输出: 3   
  解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。     
      
  示例 2:    
  输入: "bbbbb"     
  输出: 1     
  解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。   
    
  示例 3:    
  输入: "pwwkew"      
  输出: 3     
  解释: 因为无重复字符的最长子串是?"wke"，所以其长度为 3。   
      
     
  请注意，你的答案必须是 子串 的长度，"pwke"?是一个子序列，不是子串。   


###第1295题
*注意：本题没有按照LeetCode官网给出的限制条件所做，而是删除了限制条件*       


  给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。
  
  示例 1：     
  输入：nums = [12,345,2,6,7896]     
  输出：2   
  解释：      
  12 是 2 位数字（位数为偶数）      
  345 是 3 位数字（位数为奇数）         
  2 是 1 位数字（位数为奇数）     
  6 是 1 位数字 位数为奇数）      
  7896 是 4 位数字（位数为偶数）       
  因此只有 12 和 7896 是位数为偶数的数字      
 
  示例 2：       
  输入：nums = [555,901,482,1771]       
  输出：1     
  解释：   
  只有 1771 是位数为偶数的数字。    