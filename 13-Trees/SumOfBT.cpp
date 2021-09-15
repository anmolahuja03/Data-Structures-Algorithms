long int sumBT(Node* root)
{
    // Recursive
    if(root == NULL) return 0;
    else
    return sumBT(root->left) + sumBT(root->right) + root->key;
    
    
    
    // Iterative
    if(root == NULL) return 0;
    int sum = 0;
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty()) {
        Node *temp = q.front();
        q.pop();
        sum += temp->key;
        
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return sum;
}