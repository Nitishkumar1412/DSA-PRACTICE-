stack<int> mn;

void push(stack<int>& s, int a) {
    s.push(a);
    if (mn.empty() || a <= mn.top())
        mn.push(a);
}

bool isFull(stack<int>& s, int n) {
    return s.size() == n;
}

bool isEmpty(stack<int>& s) {
    return s.empty();
}

int pop(stack<int>& s) {
    if (s.empty()) return -1;
    
    int x = s.top();
    s.pop();
    
    if (!mn.empty() && x == mn.top())
        mn.pop();
        
    return x;
}

int getMin(stack<int>& s) {
    if (mn.empty()) return -1;
    return mn.top();
}