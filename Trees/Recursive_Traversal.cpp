void PreOrder(Node*temp) {
    if (temp == NULL) {
        return;
    }
    cout<<temp->data<<" ";
    PreOrder(temp->left);
    PreOrder(temp->right);
}


void Inorder(Node*temp) {
    if (temp == NULL) {
        return;
    }
    Inorder(temp->left);
    cout<<temp->data<<" ";
    Inorder(temp->right);
}


void Postorder(Node*temp) {
    if (temp == NULL) {
        return;
    }
    Postorder(temp->left);
    Postorder(temp->right);
    cout<<temp->data<<" ";
}
