// Add 1 to a Linked List Number

// class Solution {
//   public:
    
//     Node* reverse(Node* head) {
//         Node* prev = NULL;
//         Node* curr = head;
        
//         while (curr != NULL) {
//             Node* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
        
//         return prev;
//     }
    
//     Node* addOne(Node* head) {
        
//         head = reverse(head);
        
//         Node* curr = head;
//         int carry = 1;
        
//         while (curr != NULL && carry > 0) {
//             int sum = curr->data + carry;
//             curr->data = sum % 10;
//             carry = sum / 10;
            
//             if (curr->next == NULL && carry > 0) {
//                 curr->next = new Node(carry);
//                 carry = 0;
//                 break;
//             }
            
//             curr = curr->next;
//         }
        
//         head = reverse(head);
        
//         return head;
//     }
// };
