#include "array_duplicate.h"
#include <map>

using std::map;

bool ArrayDuplicate::hasDuplicate(vector<int>& nums) {
    std::map<int, bool> map;
    for (int num : nums) {
        if (map.find(num) == map.end()) {
            map[num] = true;
        }
        else {
            return true;
        }
    }
    return false;
}