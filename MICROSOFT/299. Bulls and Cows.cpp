class Solution {
public:
    string getHint(string secret, string guess) {
        int bull =0,cow=0;
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]) bull++;
        }
        unordered_map<char,int> m,n;
        for(int i=0;i<secret.length();i++){
            m[secret[i]]++;
            n[guess[i]]++;
        }
        for(auto i: m){
            cow+=min(i.second,n[i.first]);
        }
        cow-=bull;
        return to_string(bull)+'A'+to_string(cow)+'B';
    }
};
