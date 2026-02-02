# 📘 LeetCode DSA Solutions in C++

This repository contains my **Data Structures & Algorithms (DSA)** solutions from **LeetCode**, implemented using **C++**.  
I started uploading solutions recently and am currently focusing on strengthening my fundamentals with **Arrays, Strings, and Unordered Map (Hashing)**.

---

## 🚀 About the Repository
- 💻 Language: **C++**
- 📚 Platform: **LeetCode**
- 🧠 Topics Covered: **Arrays, Strings, Unordered Map**
- 🎯 Goal: Build strong DSA fundamentals and prepare for technical interviews

---

## 🧩 Topics Covered
- ✅ Arrays  
- ✅ Strings  
- ✅ Unordered Map (Hashing)

---

## 🔍 Unordered Map (Hashing)
- Used for **fast key-value lookups**
- Helps reduce time complexity in many problems
- Common use cases:
  - Two Sum
  - Frequency counting
  - Finding duplicates
  - Index mapping
- Average Time Complexity:
  - Insert: **O(1)**
  - Search: **O(1)**

---

## 📁 Each solution file contains:
- ✔️ LeetCode problem number & title  
- ✔️ Topic (Array / String / Unordered Map)  
- ✔️ Well-structured C++ solution  
- ✔️ Clear explanation of approach  
- ✔️ Time and space complexity analysis  

---

## 🛠 Sample Solution Format
```cpp
// LeetCode 1: Two Sum
// Topic: Array, Unordered Map
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];

            if(mp.find(diff) != mp.end()) {
                return {mp[diff], i};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
};
