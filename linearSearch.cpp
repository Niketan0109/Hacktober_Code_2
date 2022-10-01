#include<bits/stdc++.h>
using namespace std;

int main(){
int n,key;
int a[1000];

cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

cin>>key;
int i;
for(i=0;i<n;i++)
{
    if(a[i]==key)
    {
        cout<<"Element found at index "<<i<<endl;
        break;
    }

}

if(i==n)
{
    cout<<"Element not found"<<endl;
}
return 0;
}

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* node = head, *offsetNode = head;
    for (int i = 0; i < n; ++i)
        node = node->next;
    
    // if node is NULL n is equal to the length of the linked list and we have to remove the head
    if (node == NULL)
        return head->next;
    
    while (node->next != NULL) {
        node = node->next;
        offsetNode = offsetNode->next;
    }
    
    offsetNode->next = offsetNode->next->next;
    
    return head;
    }
};
