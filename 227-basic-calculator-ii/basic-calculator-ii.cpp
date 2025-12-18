// class Solution {
// public:
//     int calculate(string s) {
//         stack<int> st;
//         char sgn = '+';
//         long n = 0;
//         for(int i = 0; i<s.size(); i++){
//             if(isdigit(s[i])){
//                 n = n*10 + (s[i]-'0');
//             }
//             if((!isdigit(s[i]) && !isspace(s[i])) or i == s.size()-1){
//                 if(sgn=='-') st.push(-n);
//                 else if(sgn=='+')st.push(n);
//                 else{
//                     if(sgn=='*'){
//                         n = st.top()*n;
//                     }else{
//                         n = st.top()/n;
//                     }
//                     st.pop();st.push(n);
//                 }
//                 sgn = s[i];
//                 n=0;
//             }
//         }
//         while(st.size()){
//             n += st.top();
//             st.pop();
//         }
//         return n;
//     }
// };

// In O(1) Memory - without stack
class Solution {
public:
    int calculate(string s) {
        istringstream expr_stream('+'+s+'+');
        long total = 0, term = 0, n;
        char op;
        while(expr_stream >> op){
            if(op=='+' || op=='-'){
                total += term;
                expr_stream >> term;
                term *= 44 - op; // ASCII 43->'+' and 45->'-' => 44 - '+'=1, 44 - '-' = -1
            }
            else{
                expr_stream >> n;
                if(op=='*')term *= n;
                else term /= n;
            }
        }
        return total;
    }
};