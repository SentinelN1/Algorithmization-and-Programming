#pragma once
#include <iostream>
#include <fstream>
#include <deque>

std::deque<int> GenerateDequeInt(const std::string &path, const int &length)
{
    std::ifstream input;
    std::deque<int> deque;
    input.open(path);
    if (input.is_open())
    {
        for (int i = 0; i < length; i++)
        {
            int tmp;
            input >> tmp;
            deque.push_back(tmp);
        }
        input.close();
    }
    return deque;
}

std::deque<std::string> GenerateDequeStr(const std::string &path, const int &length)
{
    std::ifstream input;
    std::deque<std::string> deque;
    input.open(path);
    if (input.is_open())
    {
        for (int i = 0; i < length; i++)
        {
            std::string tmp;
            input >> tmp;
            deque.push_back(tmp);
        }
        input.close();
    }
    return deque;
}
