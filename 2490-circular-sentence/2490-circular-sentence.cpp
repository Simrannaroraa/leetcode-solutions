class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream ss(sentence);
        string prev,word,first;
        while(ss >> word){
            if(prev.empty()){
                first=word;
                prev=word;
                continue;
            }
            if(prev.back()!=word[0]){
                return false;

            }
            prev=word;
            
            

        }
        if(prev.back()!=first[0]){
                return false;
            }
        return true;
    }
};