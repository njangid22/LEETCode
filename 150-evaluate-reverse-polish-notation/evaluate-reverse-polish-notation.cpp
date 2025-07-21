class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        int n=t.size();
        for(int i=0;i<n;i++){
            if(t[i]=="+"||t[i]=="-"||t[i]=="*"||t[i]=="/"){
                int b=s.top(); s.pop();
                int a=s.top(); s.pop();
                if(t[i]=="+") s.push(a+b);
                else if(t[i]=="-") s.push(a-b);
                else if(t[i]=="*") s.push(a*b);
                else s.push(a/b);
            }else{
                s.push(stoi(t[i]));
            }
        }
        return s.top();
    }
};