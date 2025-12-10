//week14-3.cpp
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>a;
       while(head != nullptr){//不是結尾的nullptr
            a.push_back( head->val );//塞入「伸縮自如」的陣列
            head = head->next;//接下一輪
       }//以上Linked List 裡面的值,逐一放入陣列

       ListNode* ans = new ListNode(999);//答案排在這裡
       ListNode* now = ans;//現在要處理的node,幫忙ans收尾
       for(int i=a.size()-1;i>=0;i--){//到過來的迴圈
        now->next = new ListNode( a[i] );//建出新的node,接起來
        now = now->next;//接下一筆
       }
       //return ans;//錯了
       return ans->next;
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
