//https://leetcode.com/problems/add-two-numbers/solution/
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
        int p=1;
        int m=1;
        long long count1=0;
        long long count2=0;
        long long sum;
        ListNode* resHead=NULL;
        ListNode* resTail=NULL;
        
        while(l1->next!=NULL)
        {
           count1+=(l1->val * p);
               p=p*10;
            l1=l1->next;
        }
        count1+=(l1->val * p);
        
        while(l2->next!=NULL)
        {
           count2+=(l2->val * m);
               m=m*10;
            l2=l2->next;
        }
        count2+=(l2->val * m);
        sum=count1+count2;
       do
       {
       	int s=sum;
       	sum=sum/10;
       	s=s-sum*10;
       	 ListNode* node=new ListNode(s);
            
         if(resHead==NULL)
         {
             resHead=node;
             resTail=node;
         }
         else
            {
                resTail->next=node;
                resTail=node;
            }
       }
       while(sum>0)

        
        return resHead;
    }
};