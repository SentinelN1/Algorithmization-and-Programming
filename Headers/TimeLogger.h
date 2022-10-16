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
    void PopFront(std::vector<int> &container, const int &n)
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

    void PopFront(std::list<int> &container, const int &n)
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

    void PopFront(std::vector<std::string> &container, const int &n)
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
        output << size << "; Pop Front; vector<string>; " << time << "\n";
    }

    void PopFront(std::list<std::string> &container, const int &n)
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

    // Pop Back
    void PopBack(std::vector<int> &container, const int &n)
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
        output << size << "; Pop Back; vector<int>; " << time << "\n";
    }

    void PopBack(std::list<int> &container, const int &n)
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
        output << size << "; Pop Back; list<int>; " << time << "\n";
    }

    void PopBack(std::vector<std::string> &container, const int &n)
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
        output << size << "; Pop Back; vector<string>; " << time << "\n";
    }

    // Push Front
    void PushFront(std::vector<int> &container, const int &n)
    {
        size = container.size();

        std::vector<int> vector;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.insert(vector.begin(), *it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; vector<int>; " << time << "\n";
    }

    void PushFront(std::vector<std::string> &container, const int &n)
    {
        size = container.size();

        std::vector<std::string> vector;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.insert(vector.begin(), *it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; vector<string>; " << time << "\n";
    }

    void PushFront(std::list<int> &container, const int &n)
    {
        size = container.size();

        std::list<int> list;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            list.push_front(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; list<int>; " << time << "\n";
    }

    void PushFront(std::list<std::string> &container, const int &n)
    {
        size = container.size();

        std::list<std::string> list;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            list.push_front(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front; list<string>; " << time << "\n";
    }

    // Push Front Reserve
    void PushFrontReserve(std::vector<int> &container, const int &n)
    {
        size = container.size();

        std::vector<int> vector;
        vector.reserve(n);

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.insert(vector.begin(), *it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front Reserve; vector<int>; " << time << "\n";
    }

    void PushFrontReserve(std::vector<std::string> &container, const int &n)
    {
        size = container.size();

        std::vector<std::string> vector;
        vector.reserve(n);

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.insert(vector.begin(), *it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Front Reserve; vector<string>; " << time << "\n";
    }

    // Push Back
    void PushBack(std::vector<int> &container, const int &n)
    {
        size = container.size();

        std::vector<int> vector;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.push_back(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; vector<int>; " << time << "\n";
    }

    void PushBack(std::vector<std::string> &container, const int &n)
    {
        size = container.size();

        std::vector<std::string> vector;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.push_back(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; vector<string>; " << time << "\n";
    }

    void PushBack(std::list<int> &container, const int &n)
    {
        size = container.size();

        std::list<int> list;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            list.push_back(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; list<int>; " << time << "\n";
    }

    void PushBack(std::list<std::string> &container, const int &n)
    {
        size = container.size();

        std::list<std::string> list;

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            list.push_back(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back; list<string>; " << time << "\n";
    }

    // Push Back Reserve
    void PushBackReserve(std::vector<int> &container, const int &n)
    {
        size = container.size();

        std::vector<int> vector;
        vector.reserve(n);

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.push_back(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back Reserve; vector<int>; " << time << "\n";
    }

    void PushBackReserve(std::vector<std::string> &container, const int &n)
    {
        size = container.size();

        std::vector<std::string> vector;
        vector.reserve(n);

        auto start = high_resolution_clock::now();

        auto it = container.begin();
        for (int i = 0; i < n; i++)
        {
            vector.push_back(*it);
            it++;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<TIME_INTERVAL>(stop - start);
        time = duration.count();
        output << size << "; Push Back Reserve; vector<string>; " << time << "\n";
    }
};
