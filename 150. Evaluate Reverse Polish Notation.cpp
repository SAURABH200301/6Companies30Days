class Solution {
#define ll long long
public:
        int evalRPN(vector<string>& tokens) {
        stack<ll>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
                s.push(stoi(tokens[i]));
            else{
                ll a=s.top();
                s.pop();
                if(tokens[i]=="+")
                    s.top()+=a;
                else if(tokens[i]=="-")
                    s.top()-=a;
                else if(tokens[i]=="*")
                    s.top()*=a;
                else if(tokens[i]=="/")
                    s.top()/=a;
            }
        }
        return s.top();
    }
};
