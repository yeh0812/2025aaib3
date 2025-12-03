//week13-3.cpp
//LeetCode 2. Add Two Numbers
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode(999);
        ListNode*ans2 = ans;//會滑動的指標,把ans後面的Linked List逐一處理好
        int carry = 0;//一開始沒有進位 放0
        while( l1 != nullptr || l2 != nullptr ){//只要有一個不是空指標!
            int now = carry;
            if(l1 != nullptr){//處理左邊的list1
                now += l1->val;//把值加進去
                l1 = l1->next;//換下一筆
            }

            if(l2 != nullptr){//處理右邊的list2
                now += l2->val;//把值加進去
                l2 = l2->next;//換下一筆
            }
            ans2->next = new ListNode(now % 10);//慢慢接好後面的答案
            ans2 = ans2->next;//繼續往後(待命接好)
            carry = now / 10;
        }
        if(carry>0){//還有近位 要再多準備一位, 給最高的進位
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};
