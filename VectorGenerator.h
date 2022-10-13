#pragma once
#include <fstream>
#include <vector>
#include <iostream>

std::vector<int> GenerateVector(const std::string &path, const int &length)
{
    std::ifstream input;
    std::vector<int> vector;

    input.open(path);
    if (!input.is_open())
    {
        std::cout << "Unable to open the file.\n";
    }
    else
    {
        vector.reserve(length);

        for (int i = 0; i < length; i++)
        {
            int tmp;
            input >> tmp;
            vector.push_back(tmp);
        }
        input.close();
    }
    return vector;
}
