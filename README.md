# Abhiraj Pratap Singh
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
- The goal of this code is to reverse every k characters in a given string s. The revStr function is used to reverse a substring of the string between the indices first and last (exclusive). The reverseStr function uses this helper function to reverse substrings of length k in the input string s.

---


# Approach
<!-- Describe your approach to solving the problem. -->
1. The reverseStr function iterates through the string s in steps of 2*k (every 2k characters).
2. For each iteration, it calls the revStr function to reverse the substring of length k starting from the current index i.
3. The reversed substrings are then concatenated to obtain the final reversed string.
4. The modified string is returned as the result.

---


# Complexity

---


- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- **Time complexity: O ( N ) ,** The time complexity of the revStr function is O(k/2) = O(k) since it iterates through half of the substring. In the reverseStr function, we iterate through the string in steps of 2*k, so the overall time complexity is O(n), where n is the length of the input string s.

---


- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- **Space complexity: The space complexity is O(1)** as the reversal is done in-place without using any additional space. The string s is modified in situ.
