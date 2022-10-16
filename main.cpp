#pragma optimize("", off)
#define INPUTINT "integers.txt"
#define INPUTSTR "strings.txt"
#define OUTPUT "pop_front_vector_int.csv"

#define POP_FRONT

#define LENGTH 1000000
#define STEP 100000

#define ELEMINT 0
#define ELEMSTR "TCqfOrIDRFzZJHzihRfJLVCyeBdcciXwv"

#include "Headers/VectorGenerator.h"
#include "Headers/ListGenerator.h"
#include "Headers/DequeGenerator.h"
#include "Headers/TimeLogger.h"

int main()
{
    std::vector<int> vectorInt;
    std::list<int> listInt;
    std::deque<int> dequeInt;
    std::vector<std::string> vectorStr;
    std::list<std::string> listStr;
    std::deque<std::string> dequeStr;

    TimeLogger logger(OUTPUT);
    logger.Log("Length; Algorithm; Container; microseconds\n");
    for (int len = STEP; len <= LENGTH; len += STEP)
    {

#ifdef FIND

        vectorInt = GenerateVectorInt(INPUTINT, len);
        logger.Find(vectorInt, ELEMINT);

        listInt = GenerateListInt(INPUTINT, len);
        logger.Find(listInt, ELEMINT);

        vectorStr = GenerateVectorStr(INPUTSTR, len);
        logger.Find(vectorStr, ELEMSTR);

        listStr = GenerateListStr(INPUTSTR, len);
        logger.Find(listStr, ELEMSTR);

#endif
#ifdef SORT

        vectorInt = GenerateVectorInt(INPUTINT, len);
        logger.Sort(vectorInt);

        listInt = GenerateListInt(INPUTINT, len);
        logger.Sort(listInt);

        vectorStr = GenerateVectorStr(INPUTSTR, len);
        logger.Sort(vectorStr);

        listStr = GenerateListStr(INPUTSTR, len);
        logger.Sort(listStr);

#endif
#ifdef POP_FRONT

        for (int i = 0; i < 10; i++)
        {
            vectorInt = GenerateVectorInt(INPUTINT, len);
            logger.PopFront(vectorInt);
        }

        // listInt = GenerateListInt(INPUTINT, len);
        // logger.PopFront(listInt);

        // dequeInt = GenerateDequeInt(INPUTINT, len);
        // logger.PopFront(dequeInt);

        // vectorStr = GenerateVectorStr(INPUTSTR, len);
        // logger.PopFront(vectorStr);

        // listStr = GenerateListStr(INPUTSTR, len);
        // logger.PopFront(listStr);

        // dequeStr = GenerateDequeStr(INPUTSTR, len);
        // logger.PopFront(dequeStr);

#endif
#ifdef POP_BACK

        vectorInt = GenerateVectorInt(INPUTINT, len);
        logger.PopBack(vectorInt);

        listInt = GenerateListInt(INPUTINT, len);
        logger.PopBack(listInt);

        dequeInt = GenerateDequeInt(INPUTINT, len);
        logger.PopBack(dequeInt);

        vectorStr = GenerateVectorStr(INPUTSTR, len);
        logger.PopBack(vectorStr);

        listStr = GenerateListStr(INPUTSTR, len);
        logger.PopBack(listStr);

        dequeStr = GenerateDequeStr(INPUTSTR, len);
        logger.PopBack(dequeStr);

#endif
#ifdef PUSH_FRONT

        vectorInt = GenerateVectorInt(INPUTINT, len);
        logger.PushFront(vectorInt, ELEMINT);

        listInt = GenerateListInt(INPUTINT, len);
        logger.PushFront(listInt, ELEMINT);

        dequeInt = GenerateDequeInt(INPUTINT, len);
        logger.PushFront(dequeInt, ELEMINT);

        vectorStr = GenerateVectorStr(INPUTSTR, len);
        logger.PushFront(vectorStr, ELEMSTR);

        listStr = GenerateListStr(INPUTSTR, len);
        logger.PushFront(listStr, ELEMSTR);

        dequeStr = GenerateDequeStr(INPUTSTR, len);
        logger.PushFront(dequeStr, ELEMSTR);

#endif
#ifdef PUSH_BACK

        vectorInt = GenerateVectorInt(INPUTINT, len);
        logger.PushBack(vectorInt, ELEMINT);

        listInt = GenerateListInt(INPUTINT, len);
        logger.PushBack(listInt, ELEMINT);

        dequeInt = GenerateDequeInt(INPUTINT, len);
        logger.PushBack(dequeInt, ELEMINT);

        vectorStr = GenerateVectorStr(INPUTSTR, len);
        logger.PushBack(vectorStr, ELEMSTR);

        listStr = GenerateListStr(INPUTSTR, len);
        logger.PushBack(listStr, ELEMSTR);

        dequeStr = GenerateDequeStr(INPUTSTR, len);
        logger.PushBack(dequeStr, ELEMSTR);

#endif
    }

    return 0;
}
