class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
   queue<TreeNode*>q;
        if(root==NULL) return ans;
   q.push(root);
   while(!q.empty()){
       int s=q.size();
       for(int i = 1; i <= s; i++)
        {
           TreeNode* t = q.front();
           q.pop();
           if(i==s){
               ans.push_back(t->val);
           }
           if(t->left) q.push(t->left);
           if(t->right) q.push(t->right);
       }
   }
   return ans;
    }
    
};
