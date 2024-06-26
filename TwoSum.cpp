#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indices;

        //brute force
        //check each combination 1 by 1
        //time complexity = O(n^2)
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i+1; j < nums.size(); j++)
        //     {
        //         if (nums.at(i) + nums.at(j) == target)
        //         {
        //             target_indices.push_back(i);
        //             target_indices.push_back(j);
        //         }
                
        //     }
            
        // }

        //hash map
        //provide value and return key of the value
        //time complexity = O(n)
        unordered_map<int, int> hash_table;
        for (int i = 0; i < nums.size(); i++)
        {
            int second_integer = target - nums.at(i);

            if (hash_table.find(second_integer) != hash_table.end())
            {
                target_indices.push_back(i);
                target_indices.push_back(hash_table.find(second_integer)->second);
                break;
            }
            else
            {
                hash_table[nums.at(i)] = i;
            }
            
        }  

        return target_indices;
    }
};