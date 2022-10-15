#define INPUTINT "integers.txt"
#define INPUTSTR "strings.txt"
#define OUTPUT "log.csv"

#define LENGTH 1000000
#define STEP 100000

#define ELEMINT 834
#define ELEMSTR "TCqfOrIDRFzZJHzihRfJLVCyeBdcciXwv"

#include "VectorGenerator.h"
#include "ListGenerator.h"
#include "DequeGenerator.h"
#include "TimeLogger.h"

int main()
{
    // I believe there is a 0 in the first hundred thousend
    // elements, so it only takes around 38 mcs to find a zero
    // for all vector lengths.

    TimeLogger logger(OUTPUT);
    logger.Log("Length;\t Algorithm;\t Container;\t Time;\t Units\n");

    auto t0 = high_resolution_clock::now();

    // Find
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<int> vector = GenerateVectorInt(INPUTINT, len);
        logger.Find(vector, ELEMINT);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<int> list = GenerateListInt(INPUTINT, len);
        logger.Find(list, ELEMINT);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<std::string> vector = GenerateVectorStr(INPUTSTR, len);
        logger.Find(vector, ELEMSTR);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<std::string> list = GenerateListStr(INPUTSTR, len);
        logger.Find(list, ELEMSTR);
    }

    // Sort
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<int> vector = GenerateVectorInt(INPUTINT, len);
        logger.Sort(vector);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<int> list = GenerateListInt(INPUTINT, len);
        logger.Sort(list);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<std::string> vector = GenerateVectorStr(INPUTSTR, len);
        logger.Sort(vector);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<std::string> list = GenerateListStr(INPUTSTR, len);
        logger.Sort(list);
    }

    // Pop Front
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<int> vector = GenerateVectorInt(INPUTINT, len);
        logger.PopFront(vector);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<int> list = GenerateListInt(INPUTINT, len);
        logger.PopFront(list);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::deque<int> deque = GenerateDequeInt(INPUTINT, len);
        logger.PopFront(deque);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<std::string> vector = GenerateVectorStr(INPUTSTR, len);
        logger.PopFront(vector);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<std::string> list = GenerateListStr(INPUTSTR, len);
        logger.PopFront(list);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::deque<std::string> deque = GenerateDequeStr(INPUTSTR, len);
        logger.PopFront(deque);
    }

    // Pop Back
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<int> vector = GenerateVectorInt(INPUTINT, len);
        logger.PopBack(vector);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<int> list = GenerateListInt(INPUTINT, len);
        logger.PopBack(list);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::deque<int> deque = GenerateDequeInt(INPUTINT, len);
        logger.PopBack(deque);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::vector<std::string> vector = GenerateVectorStr(INPUTSTR, len);
        logger.PopBack(vector);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::list<std::string> list = GenerateListStr(INPUTSTR, len);
        logger.PopBack(list);
    }

    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        std::deque<std::string> deque = GenerateDequeStr(INPUTSTR, len);
        logger.PopBack(deque);
    }

    auto t1 = high_resolution_clock::now();
    long long int duration = duration_cast<seconds>(t1 - t0).count();
    logger.Log("Total time:\t");
    logger.Log(duration);
    logger.Log(" seconds.\n");

    return 0;
}
