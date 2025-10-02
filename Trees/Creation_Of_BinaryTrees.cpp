// Method 1 Normal Implementation
#include <iostream>
#include <queue>
using namespace std;
class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node (int value) {
            data = value;
            left = right = NULL;
        }
};

int main() {
    queue<Node*>q;
    int x;
    cout<<"Enter the root element : ";
    cin>>x;
    Node* root = new Node(x);
    q.push(root);
    while(!q.empty()) {
        Node*temp = q.front();
        q.pop();
        int left,right;
        cout<< "Enter the value of left child : ";
        cin>>left;
        if (left!=-1) {
            Node *leftnode = new Node(left);
            temp->left = leftnode;
            q.push(leftnode);
        }
        cout<< "Enter the value of right child : ";
        cin>>right;
        if(right !=-1) {
            Node*rightnode = new Node(right);
            temp->right = rightnode;
            q.push(rightnode);
        }

    }
    system("pause");
}




// METHOD 2 - Recursive Implementation
