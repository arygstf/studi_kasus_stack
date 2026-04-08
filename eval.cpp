#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int eval(string exp){
    
    stack<int> st;
    
    for(char c : exp){
        
        if(isdigit(c)){
            st.push(c - '0');
        }
        
        else {
            
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            
            
            switch (c) {
                case '+' : st.push(val1 + val2); break;
                case '-' : st.push(val1 - val2); break;
                case '*' : st.push(val1 * val2); break;
                case '/' : st.push(val1 / val2); break;
            }
            
        }
        
    }
    
    return st.top();
    
}




int main() {
   
   string post;
   cout << "Masukkan ekspresi postfix: ";
   cin >> post;
   
   cout << "Hasil evaluasi: " << eval(post) << "\n";
    
    
    
    
    
    
    return 0;
}