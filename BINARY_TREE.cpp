#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != NULL || !st.empty()) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left; // Move left
            }

            curr = st.top();
            st.pop();
            result.push_back(curr->val); // Visit node

            curr = curr->right; // Move right
        }

        return result;
    }
};

