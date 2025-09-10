# week01-2.py LeetCode 學習計畫 python
# LeetCode 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #字串長度
        N = len(needle)   #字串長度
        for i in range(H-N+1): #長度9 找 長度3 有0...6 共7組
            if haystack[i:i+N] == needle: #若兩個相同
            #把字串,從i開始,取到i+N結束 共 N 個字
                return i #成功找到位置
        return -1 #沒有成功
