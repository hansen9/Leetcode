#include <string>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        int absentCounter = 0;
        int lateCounter = 0;

        for(int i = 0; i < s.size(); i++){
            if(s.at(i)  == 'A') absentCounter++;
            if(s.at(i) == 'L') lateCounter++;
            else lateCounter=0;
            if(absentCounter >= 2 || lateCounter > 2) return false;
        }

        return true;
    }
};