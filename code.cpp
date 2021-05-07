ist solution with vector



class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>list;
        while(head!=NULL)
        {
            list.push_back(head->val);
            head=head->next;
        }
        vector<int>res(list.size(),0);
        for(int i=0;i<list.size();i++)
        {
            int a=list[i];
            for(int j=i+1;j<list.size();j++)
            {
                if(list[j]>a)
                {
                    res[i]=list[j];
                    break;
                }
            }
        }
        return res;
    }
};



2nd solution with linkedlist

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        int count=0;
        ListNode *temp;
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        vector<int>res(count,0);
        int i=0;
        while(head!=NULL)
        {
            int a=head->val;
            ListNode *temp2=head->next;
            while(temp2!=NULL)
            {
                if(temp2->val>a)
                {
                    res[i]=temp2->val;
                    break;
                }
                temp2=temp2->next;
            }
            i++;
            head=head->next;
        }
        return res;
    }
};
