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

    std::vector<int> vectorInt;
    std::vector<std::string> vectorStr;

    std::list<int> listInt;
    std::list<std::string> listStr;

    std::deque<int> dequeInt;
    std::deque<std::string> dequeStr;

    TimeLogger logger(OUTPUT);

    logger.Log("Find in vector of integers (mcs)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorInt = GenerateVectorInt(INPUTINT, len);

        logger.Reset();
        logger.Find(vectorInt, ELEMINT);
        logger.Log();
    }

    logger.Log("Find in vector of strings (mcs)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorStr = GenerateVectorStr(INPUTSTR, len);

        logger.Reset();
        logger.Find(vectorStr, ELEMSTR);
        logger.Log();
    }

    logger.Log("Find in list of integers (mcs)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listInt = GenerateListInt(INPUTINT, len);

        logger.Reset();
        logger.Find(listInt, ELEMINT);
        logger.Log();
    }

    logger.Log("Find in list of strings (mcs)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listStr = GenerateListStr(INPUTSTR, len);

        logger.Reset();
        logger.Find(listStr, ELEMSTR);
        logger.Log();
    }

    logger.Log("Sort in vector of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorInt = GenerateVectorInt(INPUTSTR, len);

        logger.Reset();
        logger.Sort(vectorInt);
        logger.Log();
    }

    logger.Log("Sort in vector of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorStr = GenerateVectorStr(INPUTSTR, len);

        logger.Reset();
        logger.Sort(vectorStr);
        logger.Log();
    }

    logger.Log("Sort in list of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listInt = GenerateListInt(INPUTSTR, len);

        logger.Reset();
        logger.Sort(listInt);
        logger.Log();
    }

    logger.Log("Sort in list of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listStr = GenerateListStr(INPUTSTR, len);

        logger.Reset();
        logger.Sort(listStr);
        logger.Log();
    }

    logger.Log("Pop front in vector of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorInt = GenerateVectorInt(INPUTSTR, len);

        logger.Reset();
        logger.PopFront(vectorInt);
        logger.Log();
    }

    logger.Log("Pop front in vector of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorStr = GenerateVectorStr(INPUTSTR, len);

        logger.Reset();
        logger.PopFront(vectorStr);
        logger.Log();
    }

    logger.Log("Pop front in list of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listInt = GenerateListInt(INPUTSTR, len);

        logger.Reset();
        logger.PopFront(listInt);
        logger.Log();
    }

    logger.Log("Pop front in list of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listStr = GenerateListStr(INPUTSTR, len);

        logger.Reset();
        logger.PopFront(listStr);
        logger.Log();
    }

    logger.Log("Pop front in deque of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        dequeInt = GenerateDequeInt(INPUTSTR, len);

        logger.Reset();
        logger.PopFront(dequeInt);
        logger.Log();
    }

    logger.Log("Pop front in deque of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        dequeStr = GenerateDequeStr(INPUTSTR, len);

        logger.Reset();
        logger.PopFront(dequeStr);
        logger.Log();
    }

    logger.Log("Pop back in vector of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorInt = GenerateVectorInt(INPUTSTR, len);

        logger.Reset();
        logger.PopBack(vectorInt);
        logger.Log();
    }

    logger.Log("Pop back in vector of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        vectorStr = GenerateVectorStr(INPUTSTR, len);

        logger.Reset();
        logger.PopBack(vectorStr);
        logger.Log();
    }

    logger.Log("Pop back in list of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listInt = GenerateListInt(INPUTSTR, len);

        logger.Reset();
        logger.PopBack(listInt);
        logger.Log();
    }

    logger.Log("Pop back in list of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        listStr = GenerateListStr(INPUTSTR, len);

        logger.Reset();
        logger.PopBack(listStr);
        logger.Log();
    }

    logger.Log("Pop back in deque of integers (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        dequeInt = GenerateDequeInt(INPUTSTR, len);

        logger.Reset();
        logger.PopBack(dequeInt);
        logger.Log();
    }

    logger.Log("Pop back in deque of strings (ms)");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {
        dequeStr = GenerateDequeStr(INPUTSTR, len);
        logger.Reset();
        logger.PopBack(dequeStr);
        logger.Log();
    }

    return 0;
}
