#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode *next;

    ListNode(int val){
        this->val = val;
        next = NULL;
    }
};
//Q 1->LEETCODE ->24
ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* c = new ListNode(6);
        ListNode * tempc = c,*temp = head;
        while(temp && temp->next){

        tempc->next = temp->next;
        tempc = tempc->next ;            
        ListNode* Next = tempc->next;
        tempc->next = temp;
        tempc = tempc->next;
        temp = Next;
       
        }
        tempc->next = temp;
        return c->next;

    }
//Q 2->LEETCODE->2181
ListNode* mergeNodes(ListNode* head) {
    ListNode* c = new ListNode(0);
    ListNode *tempc = c,*temp = head->next;
    int sum =0;
    while(temp){
        if(temp->val == 0){
            ListNode *s = new ListNode(sum);
            tempc->next = s;
            tempc = s;
            sum =0;
            }
        else sum+=temp->val;
            temp = temp->next;
        }
    return c->next;
    }
int main(){




}