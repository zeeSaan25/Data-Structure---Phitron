 #include<bits/stdc++.h>
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        queue<TreeNode*> q;
        if(root != NULL) q.push(root);
        while(!q.empty()){
            TreeNode * f = q.front();
            q.pop();
            v.push_back(f->val);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        int mn = INT_MAX;
        sort(v.begin(), v.end());
        for(int i=1; i<v.size(); i++){
            mn = min(mn, v[i]-v[i-1]);
        }
        return mn;
    }
};
