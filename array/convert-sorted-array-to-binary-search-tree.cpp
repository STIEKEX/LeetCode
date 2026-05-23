class Solution {
public:
    TreeNode* helper(vector<int>& arr, int st, int end){
        if(st > end) return nullptr;
        
        int mid = st + (end - st) / 2;
        TreeNode* root = new TreeNode(arr[mid]);
        
        root->left = helper(arr, st, mid - 1);
        root->right = helper(arr, mid + 1, end);
        
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};
