# 507. Perfect Number

**Difficulty:** Easy
**Link:** https://leetcode.com/problems/perfect-number/

## Problem
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.

## Example
- Input: `num = 28`
- Output: `true`

- Input: `num = 7`
- Output: `false`

## Approach
Instead of calculating divisors, use the fact that within the 32-bit integer range, there are only 5 perfect numbers:

`6, 28, 496, 8128, 33550336`

Just check if `num` is one of them.

## Complexity
- Time: `O(1)`
- Space: `O(1)`
