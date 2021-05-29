//https://leetcode.com/problems/merge-k-sorted-lists/submissions/
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

struct cmp
{
    bool operator() (ListNode * lhs,  ListNode *rhs) const
    {
        return lhs->val>rhs->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode *,vector<ListNode *>,cmp>pq;
        for (int i=0;i<lists.size();i++)
        {
            if (lists[i]!=NULL)pq.push(lists[i]);//lists[i]!=NULL
        }
        ListNode *head=NULL,*ptr=NULL;
        while (!pq.empty())
        {
            ListNode *tmp=pq.top();
            pq.pop();
            if (!head)
            {
                head=ptr=tmp;
            }
            else 
            {
                ptr->next=tmp;
                ptr=tmp;
            }
            if (tmp->next)
            {
                pq.push(tmp->next);
            }
        }
        return head;
    }
};