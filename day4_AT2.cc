#include <stack>
#include <iostream>
#include <climits>

using namespace std;

class MinStack
{
private:
    stack<int> mainStack;
    stack<int> auxStack;

public:
    MinStack() {}
    void push(int value)
    {
        mainStack.push(value);
        if (auxStack.empty() || value <= auxStack.top())
        {
            auxStack.push(value);
        }
    }
    void pop()
    {
        if (mainStack.top() == auxStack.top())
        {
            auxStack.pop();
        }
        mainStack.pop();
    }
    int top()
    {
        return mainStack.top();
    }
    int getMin()
    {
        return auxStack.top();
    }
};