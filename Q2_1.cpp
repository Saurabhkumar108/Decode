#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(): val(0),next(NULL){}
    ListNode(int x): val(x),next(NULL){}
    ListNode(int x,ListNode* next): val(x),next(next){}
};
int main(){
    ListNode l1;
    ListNode* temp_1 = l1,temp_2 = l2;
    int n,m;
    while(temp_1->next != NULL || temp_2->next != NULL){
        if(temp_1->next != NULL){
            number_1 += (temp_1->val)*pow(10,n-1);
            n--
        }
        if(temp_2->next != NULL){
            number_2 += (temp_2->val)*pow(10,m-1);
            m--
        }
    }
    int sum = number_1 + number_2; //   1 2 3 4 5 6 
    sum = 807;
}