class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> freq;
        int flag = -1, cnt = 0;

        for (int i = 0; i < tasks.size(); i++) {
            freq[tasks[i]]++;
        }

        for (auto m : freq) {
            if(m.second==1)
             return flag;
            cnt+=m.second/3;
            if(m.second%3!=0)
            cnt++;
        }
        return cnt;
    }
};
