# 📘 LeetCode DSA Solutions in C++

This repository contains my **Data Structures & Algorithms (DSA)** solutions from **LeetCode**, implemented using **C++**.  
I started uploading solutions recently and am currently focusing on strengthening my fundamentals with **Array and String** problems.

---

## 🚀 About the Repository
- 💻 Language: **C++**
- 📚 Platform: **LeetCode**
- 🧠 Topics Covered: **Arrays & Strings**
- 🎯 Goal: Build strong DSA fundamentals and prepare for technical interviews

---

## 🧩 Topics Covered
- ✅ Arrays  
- ✅ Strings  


## Each solution file contains:
- ✔️ LeetCode problem number & title  
- ✔️ Well-structured C++ solution  
- ✔️ Explanation of approach  
- ✔️ Time and space complexity  

---

## 🛠 Sample Solution Format
```cpp
// LeetCode 1: Two Sum
// Topic: Array
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(mp.count(diff)) {
                return {mp[diff], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
