// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";

//         sort(strs.begin(), strs.end());

//         int n = strs.size();
//         string f = strs[0], l = strs[n - 1], ans ;

//         for (int i =0; i< f.size(); i++){
//             if (f[i] == l[i]){
//                 ans += f[i];
//             }else {
//                 break;
//             }
//         }

//         return ans;

//     }
// };