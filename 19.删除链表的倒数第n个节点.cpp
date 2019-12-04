/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* q=head,*p=head,*old=head;
        int k=n;
        while (k>0) {p=p->next;k--;}
        if (p==NULL) return head->next;
        else{
            q=q->next;
            p=p->next;
        }
        while (p!=NULL){
            q=q->next;
            p=p->next;
            old=old->next;
        }
        old->next=q->next;
        return head;

    }
};
// @lc code=end

