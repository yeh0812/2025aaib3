# week01-2.py LeetCode �ǲ߭p�e python
# LeetCode 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�����
        N = len(needle)   #�r�����
        for i in range(H-N+1): #����9 �� ����3 ��0...6 �@7��
            if haystack[i:i+N] == needle: #�Y��ӬۦP
            #��r��,�qi�}�l,����i+N���� �@ N �Ӧr
                return i #���\����m
        return -1 #�S�����\
