static bool comp(pair<char,int>p1,pair<char,int>p2){
        if(p1.second>p2.second)return 1;
        if(p1.second<p2.second)return 0;
//        when second is same then 
        if(p1.first<p2.first)return 1;
          return 0;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<char,int>>temp;
        for(auto i:mp){
            temp.push_back(i);
        }
        sort(temp.begin(),temp.end(),comp);
         string ans="";
        for(auto i:temp){
            while(i.second>0){
                ans+=i.first;
                i.second--;
            }
        }
        return ans;
    }
