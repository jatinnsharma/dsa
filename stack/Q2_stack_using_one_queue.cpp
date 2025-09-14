#include <queue>
class MyStack {
    std::queue q;
public:
    void push(int x) {
        q.push(x);
    }

    int pop() {
        int n = q.size();
        for (int i = 0; i < n - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
        int top = q.front();
        q.pop();
        return top;
    }

    int top() {
        int n = q.size();
        for (int i = 0; i < n - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
        int top = q.front();
        q.pop();
        q.push(top);
        return top;
    }

    bool empty() {
        return q.empty();
    }
};
    