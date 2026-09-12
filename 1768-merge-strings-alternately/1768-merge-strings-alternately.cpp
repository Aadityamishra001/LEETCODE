class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.length();
        int b=word2.length();
        string c;
        int i=0;
        int j=0;
        while(i<a && j<b){
            if(i==j){
                c.push_back(word1[i]);
                i++;
            }
            else{
                c.push_back(word2[j]);
                j++;
            }
        }
        while (i < a) {
            c.push_back(word1[i]);
            i++;
        }

        while (j < b) {
            c.push_back(word2[j]);
            j++;
        }
        return c;
    }
};