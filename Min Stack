/*
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
 *
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 */


#include <iostream>
#include  <stack>
using namespace std;


class MinStack
{
public:
    void push(int x)
    {

        data.push(x);
        if(minData.empty() || minData.top() >= x)
        {
            minData.push(x);
        }
    }

    void pop()
    {
        if(data.top() == minData.top())
            minData.pop();
        data.pop();

    }

    int top()
    {
        return data.top();
    }

    int getMin()
    {
        return minData.top();
    }
private:
    stack <int> data;
    stack <int> minData;
};
int main()
{
    MinStack s;
    s.push(10);
    s.push(2);
    s.push(10);
    s.push(1);
    s.push(12);
    s.pop();
    cout<<s.top()<<" "<<s.getMin()<<endl;
    s.pop();
    cout<<s.top()<<" "<<s.getMin()<<endl;
    return 0;
}
