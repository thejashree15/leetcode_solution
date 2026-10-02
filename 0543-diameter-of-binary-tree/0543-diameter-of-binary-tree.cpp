class Solution {
public:
    int findMax(TreeNode* node, int& maxi) {
        if (node == NULL) {
            return 0;
        }

        int lh = findMax(node->left, maxi);
        int rh = findMax(node->right, maxi);

        maxi = max(maxi, lh + rh);

        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        findMax(root, maxi);
        return maxi;
    }
};