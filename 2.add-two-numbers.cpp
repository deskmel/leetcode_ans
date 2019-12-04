/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* resverse(ListNode* a){
        ListNode *n=a->next;
        ListNode *head=a;
        a->next=NULL;
        while (n!=NULL){
            ListNode* tmp = n->next;
            n->next = head;
            head = n;
            n = tmp;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1_ = resverse(l1);
        ListNode* l2_ = resverse(l2);
        ListNode* tmp1=l1_;
        ListNode* tmp2=l2_;
        ListNode* l3=new ListNode(0);
        int j=0
        ListNode* p=l3;
        while (tmp1!=NULL and tmp2!=NULL){
            p->next = new ListNode((tmp1->val+tmp2->val+j)%10);
            j = (tmp1->val+tmp2->val+j)/10;
            tmp1=tmp1->next;tmp2=tmp2->next;p=p->next;
        }
        if (tmp1!=NULL){
            p->next = new ListNode((tmp1->val+j)%10);
            j = (tmp1->val+j)/10;
            tmp1=tmp1->next;
        }
        if (tmp2!=NULL){
            p->next = new ListNode((tmp2->val+j)%10);
            j = (tmp2->val+j)/10;
            tmp2 = tmp2->next;
        }
        return l3->next;
    }
};
// @lc code=end

