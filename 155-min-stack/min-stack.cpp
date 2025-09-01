// class MinStack {
//     stack<int> s1, s2;
// public:
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         s1.push(val);
//         if(s2.empty() || val<=s2.top())s2.push(val);
//     }
    
//     void pop() {
//         if(s1.top()==s2.top())s2.pop();
//         s1.pop();
//     }
    
//     int top() {
//         return s1.empty()?-1:s1.top();
//     }
    
//     int getMin() {
//         return s2.empty()?-1:s2.top();
//     }
// };

// Encoded values (O(1) Space)
typedef long long ll;
class MinStack {
    stack<ll> s; ll minele;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minele=val;
        }
        else if(val<minele){
            s.push(2LL*val - minele);
            minele=val;
        }
        else s.push(val);
    }
    
    void pop() {
        ll t=s.top();s.pop();
        if(t<minele)
            minele=2*minele-t;
    }
    
    int top() {
        return s.top()<minele?(int)minele:(int)s.top();
    }
    
    int getMin() {
        return (int)minele;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */