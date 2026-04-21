/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
       stack<TreeNode*> stk;
        stack<bool> visit;
        vector<int> res;

        stk.push(root);
        visit.push(false);

        while (!stk.empty()) {
            TreeNode* cur = stk.top();
            bool v = visit.top();
            stk.pop();
            visit.pop();

            if (cur) {
                if (v) {
                    res.push_back(cur->val);
                } else {
                    stk.push(cur);
                    visit.push(true);
                    stk.push(cur->right);
                    visit.push(false);
                    stk.push(cur->left);
                    visit.push(false);
                }
            }
        }

        return res; 
    }
};