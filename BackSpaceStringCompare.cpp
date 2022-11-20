class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return remover(s) == remover(t);
    }

    string remover(string temp) {

        for(int i = 0; i < temp.length(); i++) {

            if(temp[i] == '#'){

                if(temp[0] == '#'){
                    temp.erase(i, 1);
                    i -= 1;
                    temp = temp;
                    continue;
                }

                temp.erase(i, 1);
                temp.erase(i-1, 1);
                i -= 2;
                temp = temp; 
            }
            
        }

        return temp;
    }
};