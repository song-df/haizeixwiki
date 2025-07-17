/*************************************************************************
	> File Name: 3.LC1367.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  7/14 15:49:01 2025
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    const long long base1 = 13131, base2 = 9973, mod = 1e9+7;
    vector<long long> buff, b1, b2;
    bool dfs(int k, TreeNode *root, long long c1, long long c2,
        long long h1, long long h2, int n) {
        if (buff.size() <= k) buff.push_back(0);
        buff[k] = root->val;
        h1 = (h1 * base1 + buff[k]) % mod;
        h2 = (h2 * base2 + buff[k]) % mod;
        if (k >= n) {
            h1 = (h1 - buff[k - n] * b1[n] % mod + mod) % mod;
            h2 = (h2 - buff[k - n] * b2[n] % mod + mod) % mod;
        }
        if (k + 1 >= n && c1 == h1 && c2 == h2) return true;
        if (root->left && dfs(k + 1, root->left, c1, c2, h1, h2, n)) return true;
        if (root->right && dfs(k + 1, root->right, c1, c2, h1, h2, n)) return true;
        return false;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        long long c1 = 0, c2 = 0, n = 0;
        b1.push_back(0), b2.push_back(0);
        for (ListNode *p = head; p; p = p->next) {
            c1 = (c1 * base1 % mod + p->val) % mod;
            c2 = (c2 * base2 % mod + p->val) % mod;
            n += 1;
            b1.push_back(0);
            b2.push_back(0);
        }
        b1[0] = b2[0] = 1;
        for (int i = 1; i <= n; i++) {
            b1[i] = b1[i - 1] * base1 % mod;
            b2[i] = b2[i - 1] * base2 % mod;
        }
        return dfs(0, root, c1, c2, 0, 0, n);
    }
};
