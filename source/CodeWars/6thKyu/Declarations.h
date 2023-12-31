#ifndef CPP_LEARNING_DECLARATIONS_6kyu_H
#define CPP_LEARNING_DECLARATIONS_6kyu_H

#include <vector>
#include <string>
#include <array>

namespace SixthKyu
{
    long FindMissing(std::vector<long> list);
    std::pair<std::size_t, std::size_t> TwoSum(const std::vector<int> &numbers, int target);
    std::string BitLetter(const std::vector<unsigned char> &n);
    unsigned int FruitMachine(const std::array<std::vector<std::string>, 3> &reels, const std::array<unsigned int, 3> &spins);
}

#endif
