#pragma once
#define TIME_INTERVAL microseconds
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <chrono>

using namespace std::chrono;

class TimeLogger
{
private:
    std::ofstream output;
    unsigned long long int time = 0;
    unsigned int size = 0;

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

    void Reset()
    {
        time = 0;
        size = 0;
    }

    void Log(const std::string &message)
    {
        output << message;
    }

    void Log(const long long int &message)
    {
        output << message;
    }

    // Find
    void Find(const std::vector<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        std::find(container.begin(), container.end(), element);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Find;\t vector<int>;\t" << time << "\t microseconds\n";
    }

    void Find(const std::list<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        std::find(container.begin(), container.end(), element);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Find;\t list<int>;\t" << time << "\t microseconds\n";
    }

    void Find(const std::vector<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        std::find(container.begin(), container.end(), element);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Find;\t vector<string>;\t" << time << "\t microseconds\n";
    }

    void Find(const std::list<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        std::find(container.begin(), container.end(), element);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Find;\t list<string>;\t" << time << "\t microseconds\n";
    }

    // Sort
    void Sort(std::vector<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        std::sort(container.begin(), container.end());
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Sort;\t vector<int>;\t" << time << "\t microseconds\n";
    }

    void Sort(std::list<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        container.sort();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Sort;\t list<int>;\t" << time << "\t microseconds\n";
    }

    void Sort(std::vector<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        std::sort(container.begin(), container.end());
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Sort;\t vector<string>;\t" << time << "\t microseconds\n";
    }

    void Sort(std::list<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        container.sort();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Sort;\t list<string>;\t" << time << "\t microseconds\n";
    }

    // Pop Front
    void PopFront(std::vector<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.erase(container.begin());
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Front;\t vector<int>;\t" << time << "\t microseconds\n";
    }

    void PopFront(std::list<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Front;\t list<int>;\t" << time << "\t microseconds\n";
    }

    void PopFront(std::deque<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Front;\t deque<int>;\t" << time << "\t microseconds\n";
    }

    void PopFront(std::vector<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.erase(container.begin());
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Front;\t vector<std::string>;\t" << time << "\t microseconds\n";
    }

    void PopFront(std::list<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Front;\t list<std::string>;\t" << time << "\t microseconds\n";
    }

    void PopFront(std::deque<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Front;\t deque<std::string>;\t" << time << "\t microseconds\n";
    }

    // Pop Back
    void PopBack(std::vector<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Back;\t vector<int>;\t" << time << "\t microseconds\n";
    }

    void PopBack(std::list<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Back;\t list<int>;\t" << time << "\t microseconds\n";
    }

    void PopBack(std::deque<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Back;\t deque<int>;\t" << time << "\t microseconds\n";
    }

    void PopBack(std::vector<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Back;\t vector<std::string>;\t" << time << "\t microseconds\n";
    }

    void PopBack(std::list<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Back;\t list<std::string>;\t" << time << "\t microseconds\n";
    }

    void PopBack(std::deque<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < STEP; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << ";\t Pop Back;\t deque<std::string>;\t" << time << "\t microseconds\n";
    }
};
