class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int64_t> q;
        int64_t n = 0, i, j;
        for(auto x : nums)
            q.push(-x);
        while(q.size() >= 2 && -q.top() < k) {
            n++;
            i = -q.top();
            q.pop();
            j = -q.top();
            q.pop();
            q.push(-(max(i,j) + 2*min(i,j)));
        }
        return n;
    }
};