/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    vector <int> result;
    if(root==NULL){
        return result;
    }
    queue <TreeNode<int>*> queue;
    queue.push(root);

    while(!queue.empty()){
        TreeNode<int>* currnode = queue.front();
        queue.pop();
        result.push_back(currnode->val);
        if(currnode->left!=NULL)
        queue.push(currnode->left);
        if(currnode->right!=NULL)
        queue.push(currnode->right);
    }
    int start = 0;
    int end = result.size()-1;
    while(start<end){
        swap(result[start],result[end]);
        start++;
        end--;
    }
    return result;
}
