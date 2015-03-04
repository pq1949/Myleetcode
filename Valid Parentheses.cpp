#include <iostream>
#include <stack>
#include <string>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack <char> myStack;
        if(s.length() % 2 != 0)return false;
        for(unsigned i = 0;i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                myStack.push(s[i]);
            else if(s[i] ==')' || s[i] ==']' || s[i] == '}')
            {
                if(myStack.empty())return false;
                if(myStack.top() == '(' && s[i] != ')')return false;
                else if(myStack.top() == '[' && s[i] != ']')return false;
                else if(myStack.top() == '{' && s[i] != '}')return false;
                else myStack.pop();
            }

        }
        if(myStack.empty())return true;
        else return false;
    }
};

int main()
{
    Solution s;
    string tem = ")}{({))[{{[}";
    cout<<s.isValid(tem)<<endl;
    return 0;
}
