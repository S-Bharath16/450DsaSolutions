#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> result;
    if(root == NULL)
    return result;

    queue <BinaryTreeNode<int>*> queue;
    queue.push(root);

    while(!queue.empty())
    {
        BinaryTreeNode<int>* currentNode = queue.front();
        queue.pop();
        result.push_back(currentNode->val);
        if(currentNode->left!=NULL)
        queue.push(currentNode->left);
        if(currentNode->right!=NULL)
        queue.push(currentNode->right);
    }
    return result;
}
