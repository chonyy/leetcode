/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
private:
    vector<pair<int, int>> stk;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        int localMin;
        if(stk.size() == 0) {
            localMin = x;
        }
        else {
            localMin = min(stk.back().second, x);
        }
        stk.push_back({x, localMin});
    }
    
    void pop() {
        stk.pop_back();
    }
    
    int top() {
        return stk.back().first;
    }
    
    int getMin() {
        return stk.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

