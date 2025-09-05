#include <iostream>
using namespace std;
class NODE 
{   
    public:
    int data;
    NODE* next;
    NODE (int value)
    {
        data = value;
        next = NULL;
    }
};


int count = 0;
NODE* RecursiveInsertEnd(int arr[],int index,int n) {
    if (index == n) {
        return NULL;
    }
    else {
        NODE* temp;
        temp = new NODE(arr[index]);
        temp->next = RecursiveInsertEnd(arr,index+1,n);
        return temp; 
    }
}
void DisplayLL(NODE* head) {
    NODE*temp = head;
    while (temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main() {
    int arr[5] = {1,2,3,4,5};
    NODE *p = RecursiveInsertEnd(arr,0,5);
    DisplayLL(Deletefirst(p));
    
}
