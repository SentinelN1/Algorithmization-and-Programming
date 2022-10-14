#pragma once
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

    void Find(const std::vector<std::string> &vector, const std::string &element)
    {
        auto start = high_resolution_clock::now();
        std::find(vector.begin(), vector.end(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void Find(const std::list<int> &list, const int &element)
    {
        auto start = high_resolution_clock::now();
        std::find(list.begin(), list.end(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void Find(const std::list<std::string> &list, const std::string &element)
    {
        auto start = high_resolution_clock::now();
        std::find(list.begin(), list.end(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void Sort(std::vector<int> &vector)
    {
        auto start = high_resolution_clock::now();
        std::sort(vector.begin(), vector.end());

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        time = duration.count();
    }

    void Sort(std::vector<std::string> &vector)
    {
        auto start = high_resolution_clock::now();
        std::sort(vector.begin(), vector.end());

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        time = duration.count();
    }

    void Sort(std::list<int> &list)
    {
        auto start = high_resolution_clock::now();
        list.sort();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        time = duration.count();
    }

    void Sort(std::list<std::string> &list)
    {
        auto start = high_resolution_clock::now();
        list.sort();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        time = duration.count();
    }

    void PopFront(std::vector<int> &vector)
    {
        auto start = high_resolution_clock::now();

        while (!vector.empty())
        {
            vector.erase(vector.begin());
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopFront(std::vector<std::string> &vector)
    {
        auto start = high_resolution_clock::now();

        while (!vector.empty())
        {
            vector.erase(vector.begin());
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopFront(std::list<int> &list)
    {
        auto start = high_resolution_clock::now();

        while (!list.empty())
        {
            list.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopFront(std::list<std::string> &list)
    {
        auto start = high_resolution_clock::now();

        while (!list.empty())
        {
            list.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopFront(std::deque<int> &deque)
    {
        auto start = high_resolution_clock::now();

        while (!deque.empty())
        {
            deque.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopFront(std::deque<std::string> &deque)
    {
        auto start = high_resolution_clock::now();
        while (!deque.empty())
        {
            deque.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopBack(std::vector<int> &vector)
    {
        auto start = high_resolution_clock::now();

        while (!vector.empty())
        {
            vector.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopBack(std::vector<std::string> &vector)
    {
        auto start = high_resolution_clock::now();

        while (!vector.empty())
        {
            vector.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopBack(std::list<int> &list)
    {
        auto start = high_resolution_clock::now();

        while (!list.empty())
        {
            list.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopBack(std::list<std::string> &list)
    {
        auto start = high_resolution_clock::now();

        while (!list.empty())
        {
            list.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopBack(std::deque<int> &deque)
    {
        auto start = high_resolution_clock::now();

        while (!deque.empty())
        {
            deque.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void PopBack(std::deque<std::string> &deque)
    {
        auto start = high_resolution_clock::now();

        while (!deque.empty())
        {
            deque.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        time = duration.count();
    }

    void Log()
    {
        output << time << "\n";
    }

    void Log(const std::string &message)
    {
        output << message << "\n";
    }

    void Reset()
    {
        time = 0;
    }
};
