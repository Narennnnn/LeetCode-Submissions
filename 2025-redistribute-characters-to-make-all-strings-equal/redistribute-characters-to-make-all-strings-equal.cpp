class Solution {
public:
    bool makeEqual(vector<string>& words) {
      unordered_map<char,int>mp;
      //sort(words.begin(),words.end());
      for(auto word:words){
          for(int i=0;i<word.length();i++){
              mp[word[i]]++;
          }
      }
      int n =words.size();
      for (auto i = mp.begin(); i != mp.end(); i++) {
         if(i->second%n!=0)
          return false; 
      }
      return true;
    }
};