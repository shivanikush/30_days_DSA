bool isValid(string s) {
        stack<char> stk;
        for(auto ch:s){
            switch(ch){
                case '{': stk.push('}'); 
                    break;
                case '[': stk.push(']');
                    break;
                case '(': stk.push(')');
                    break;
             default :
                    if(stk.empty() || ch!=stk.top()) return false;
                    else stk.pop();
                    
            }
        }
        return stk.empty();
    }
