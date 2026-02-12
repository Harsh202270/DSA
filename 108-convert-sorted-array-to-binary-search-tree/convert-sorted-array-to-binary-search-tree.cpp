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
    TreeNode* ArrayToBST(vector<int>& nums, int start, int end) {
        int ans;
        if (start > end) {
            return NULL;
        }
        int mid = start + (end - start) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = ArrayToBST(nums, start, mid - 1);
        node->right = ArrayToBST(nums, mid + 1, end);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return ArrayToBST(nums, 0, nums.size() - 1);
    }
};