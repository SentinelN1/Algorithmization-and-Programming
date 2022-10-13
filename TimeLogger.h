#pragma once
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>

using namespace std::chrono;

class TimeLogger
{
private:
    std::ofstream output;
    std::string type;
    int time;

public:
    TimeLogger(const std::string &path)
    {
        output.open(path);
    }

    ~TimeLogger()
    {
        if (output.is_open())
        {
            output.close();
        }
    }

    void Find(const std::vector<int> &vector, const int &element)
    {
        auto start = high_resolution_clock::now();
        std::find(vector.begin(), vector.end(), element);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void Sort(std::vector<int> &vector)
    {
        auto start = high_resolution_clock::now();
        std::sort(vector.begin(), vector.end());
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void Log()
    {
        output << time << "\n";
    }

    void Reset()
    {
        time = 0;
    }
};
