#ifndef CPP_LEARNING_DECLARATIONS_LEETCODE_NORMAL_H
#define CPP_LEARNING_DECLARATIONS_LEETCODE_NORMAL_H

#include <vector>
#include <string>
#include <array>

namespace LeetCodeNormal
{
    class AddTwoNumberSolution
    {
    public:
        struct ListNode
        {
            int value;
            ListNode *next;

            ListNode() : value(0), next(nullptr) { }
            explicit ListNode(int x) : value(x), next(nullptr) { }
            ListNode(int x, ListNode *next) : value(x), next(next) { }
        };

        static ListNode* AddTwoNumbers(ListNode *first, ListNode *second);
    };
}

#endif
