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
        output << size << "; Find; vector<int>; " << time << "\n";
    }

    void Find(const std::list<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        std::find(container.begin(), container.end(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Find; list<int>; " << time << "\n";
    }

    void Find(const std::vector<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        std::find(container.begin(), container.end(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Find; vector<string>; " << time << "\n";
    }

    void Find(const std::list<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        std::find(container.begin(), container.end(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Find; list<string>; " << time << "\n";
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
        output << size << "; Sort; vector<int>; " << time << "\n";
    }

    void Sort(std::list<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();
        container.sort();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Sort; list<int>; " << time << "\n";
    }

    void Sort(std::vector<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        std::sort(container.begin(), container.end());

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Sort; vector<string>; " << time << "\n";
    }

    void Sort(std::list<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.sort();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Sort; list<string>; " << time << "\n";
    }

    // Pop Front
    void PopFront(std::vector<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.erase(container.begin());

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; vector<int>; " << time << "\n";
    }

    void PopFront(std::list<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_front();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; list<int>; " << time << "\n";
    }

    void PopFront(std::deque<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_front();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; deque<int>; " << time << "\n";
    }

    void PopFront(std::vector<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.erase(container.begin());

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; vector<string>; " << time << "\n";
    }

    void PopFront(std::list<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_front();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; list<string>; " << time << "\n";
    }

    void PopFront(std::deque<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_front();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; deque<string>; " << time << "\n";
    }

    // Pop Front All
    void PopFrontAll(std::vector<int> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.erase(container.begin());
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; vector<int>; " << time << "\n";
    }

    void PopFrontAll(std::list<int> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; list<int>; " << time << "\n";
    }

    void PopFrontAll(std::deque<int> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; deque<int>; " << time << "\n";
    }

    void PopFrontAll(std::vector<std::string> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.erase(container.begin());
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front All; vector<string>; " << time << "\n";
    }

    void PopFrontAll(std::list<std::string> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; list<string>; " << time << "\n";
    }

    void PopFrontAll(std::deque<std::string> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_front();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Front; deque<string>; " << time << "\n";
    }

    // Pop Back
    void PopBack(std::vector<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_back();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back; vector<int>; " << time << "\n";
    }

    void PopBack(std::list<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_back();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back; list<int>; " << time << "\n";
    }

    void PopBack(std::deque<int> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_back();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back; deque<int>; " << time << "\n";
    }

    void PopBack(std::vector<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_back();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back; vector<string>; " << time << "\n";
    }

    void PopBack(std::list<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_back();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back; list<string>; " << time << "\n";
    }

    void PopBack(std::deque<std::string> &container)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.pop_back();

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back; deque<string>; " << time << "\n";
    }

    // Pop Back All
    void PopBackAll(std::vector<int> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back All; vector<int>; " << time << "\n";
    }

    void PopBackAll(std::list<int> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back All; list<int>; " << time << "\n";
    }

    void PopBackAll(std::deque<int> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back All; deque<int>; " << time << "\n";
    }

    void PopBackAll(std::vector<std::string> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back All; vector<string>; " << time << "\n";
    }

    void PopBackAll(std::list<std::string> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back All; list<string>; " << time << "\n";
    }

    void PopBackAll(std::deque<std::string> &container, const int &n)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        for (int i = 0; i < n; i++)
        {
            container.pop_back();
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Pop Back All; deque<string>; " << time << "\n";
    }

    // Push Front
    void PushFront(std::vector<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.insert(container.begin(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; vector<int>; " << time << "\n";
    }

    void PushFront(std::list<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_front(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; list<int>; " << time << "\n";
    }

    void PushFront(std::deque<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_front(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; deque<int>; " << time << "\n";
    }

    void PushFront(std::vector<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.insert(container.begin(), element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; vector<string>; " << time << "\n";
    }

    void PushFront(std::list<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_front(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; list<int>; " << time << "\n";
    }

    void PushFront(std::deque<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_front(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; deque<string>; " << time << "\n";
    }

    // Push Front All
    

    // Push Back
    void PushBack(std::vector<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_back(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; vector<int>; " << time << "\n";
    }

    void PushBack(std::list<int> &container, const int &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_back(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; list<int>; " << time << "\n";
    }

    void PushBack(std::deque<int> &container, const int &element)
    {
        auto start = high_resolution_clock::now();

        container.push_back(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; deque<int>; " << time << "\n";
    }

    void PushBack(std::vector<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_back(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; vector<string>; " << time << "\n";
    }

    void PushBack(std::list<std::string> &container, const std::string &element)
    {
        auto start = high_resolution_clock::now();

        container.push_back(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; list<int>; " << time << "\n";
    }

    void PushBack(std::deque<std::string> &container, const std::string &element)
    {
        size = container.size();
        auto start = high_resolution_clock::now();

        container.push_back(element);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; deque<string>; " << time << "\n";
    }
};
