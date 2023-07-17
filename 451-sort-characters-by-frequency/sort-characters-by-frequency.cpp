class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x:s)
         mp[x]++;
        priority_queue<pair<int,char>>pq;
        for(auto m:mp)
        {
            pq.push(make_pair(m.second,m.first));
        }
        string cs="";
        while(!pq.empty())
        {
            int frq=pq.top().first;
            char c=pq.top().second;
            while(frq--)
             cs+=c;
            pq.pop();
        }
        return cs;
    }
};

/*class Solution {
     struct CompareChars {
    unordered_map<char, int> freq;
    bool operator()(char a, char b) {
        if (freq[a] == freq[b]) {
            return a > b; // if characters have same frequency, return the one with higher ASCII value
        }
        return freq[a] < freq[b]; // otherwise, return the one with lower frequency
    }
    };
public:
   
    string frequencySort(string s) {
        unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    priority_queue<char, vector<char>, CompareChars> pq;
    CompareChars cmp = { freq };
    for (auto it : freq) {
        pq.push(it.first);
    }
    string cs="";
    while (!pq.empty()) {
        cs+ = pq.top();
        pq.pop();
    }
    return cs;
};*/