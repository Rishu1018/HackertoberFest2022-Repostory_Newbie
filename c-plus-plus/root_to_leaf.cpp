class Solution {
public:
    bool isleaf(TreeNode *root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return false;
    }
    void solve(TreeNode *root, string &ds, vector<string> &s){
        if(root==NULL){
            return;
        }
        if(isleaf(root)){
            s.push_back(ds+to_string(root->val));
            return;
        }
        ds+=to_string(root->val);
        ds+="->";
        solve(root->left,ds,s);
        solve(root->right,ds,s);
        int n=abs(root->val);
        while(n>0){
            ds.pop_back();
            n=n/10;
        }
        if(root->val<0){
            ds.pop_back();
        }
        ds.pop_back();
        ds.pop_back();
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>s;
        string ds="";
        solve(root,ds,s);
        return s;
    }
};
