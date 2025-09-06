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

NODE* Create_LL(int arr[],int index,int n) {
    if (index == n) {
        return NULL;
    }
    else {
        NODE* temp;
        temp = new NODE(arr[index]);
        temp->next = Create_LL(arr,index+1,n);
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
NODE* Delete_first(NODE* head) {
    if (head!=NULL) {
        NODE*temp = head;
        head = head->next;
        delete temp;
    }
    return head;
}
NODE* Delete_Last(NODE*head) {
    if (head!=NULL) {
        if (head->next == NULL) {
            NODE*temp = head;
            head = NULL;
            delete temp;
        }
        else {
            NODE*tail = head;
            NODE*prev= NULL;
            while(tail->next !=NULL) {
                prev = tail;
                tail = tail->next;
            }
            delete tail;
            prev->next = NULL;
        }
    }
    return head;
}



NODE* Delete_At_Pos(NODE* head,int pos) {
    if (head!=NULL) {
        if (pos == 1) {
            NODE*temp = head;
            head = head->next;
            delete temp;
        }
        else {
            NODE*temp = head;
            NODE*prev = NULL;
            for (int i = 1;i<pos;i++) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
        
    }
    return head;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    DisplayLL(Delete_first(Create_LL(arr,0,5));
    DisplayLL(Delete_Last(Create_LL(arr,0,5)));
    
}
