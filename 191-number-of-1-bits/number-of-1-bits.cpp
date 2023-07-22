class Solution {
public:
    int hammingWeight(uint32_t t) {
        int c=0;
        for(int i=0;i<32;i++){
            if(t&1<<i)
            c++;
        }
        return c;
    }
};