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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> vc(m, vector<int>(n, -1));
        ListNode* temp = head;
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        while (temp && top <= bottom && left <= right) {

            for (int i = left; i <= right && temp; i++) {
                vc[top][i] = temp->val;
                temp = temp->next;
            }

            top++;
            for (int i = top; i <= bottom && temp; i++) {
                vc[i][right] = temp->val;
                temp = temp->next;
            }
            right--;

            for (int i = right; i >= left && temp; i--) {
                vc[bottom][i] = temp->val;
                temp = temp->next;
            }
            bottom--;
            for (int i = bottom; i >= top && temp; i--) {
                vc[i][left] = temp->val;
                temp = temp->next;
            }
            left++;
        }
        return vc;
    }
};