#pragma once
#include <iostream>
#include <fstream>
#include <list>

std::list<int> GenerateListInt(const std::string &path, const int &length)
{
    std::ifstream input;
    std::list<int> list;
    input.open(path);
    if (input.is_open())
    {
        for (int i = 0; i < length; i++)
        {
            int tmp;
            input >> tmp;
            list.push_back(tmp);
        }
        input.close();
    }
    return list;
}

std::list<std::string> GenerateListStr(const std::string &path, const int &length)
{
    std::ifstream input;
    std::list<std::string> list;
    input.open(path);
    if (input.is_open())
    {
        for (int i = 0; i < length; i++)
        {
            std::string tmp;
            input >> tmp;
            list.push_back(tmp);
        }
        input.close();
    }
    return list;
}
