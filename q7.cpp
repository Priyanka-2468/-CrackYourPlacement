<<<<<<< HEAD
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> value = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
       
        string result;
        for (auto &it : value) {
            while (num >= it.first) {
                num -= it.first;
                result += it.second;
            }
        }
        
        return result;
    }
};
=======
class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> value = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
       
        string result;
        for (auto &it : value) {
            while (num >= it.first) {
                num -= it.first;
                result += it.second;
            }
        }
        
        return result;
    }
};
>>>>>>> f966c01 (first commit)
