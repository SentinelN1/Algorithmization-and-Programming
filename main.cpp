#pragma optimize("", off)
#define INPUTINT "integers.txt"
#define INPUTSTR "strings.txt"
#define OUTPUT "Logs/pop_front_vector_str.csv"

#define POP_FRONT_ALL

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
                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PopFront(vectorInt); // O(n)

                listInt = GenerateListInt(INPUTINT, len);
                logger.PopFront(listInt); // O(1)

                dequeInt = GenerateDequeInt(INPUTINT, len);
                logger.PopFront(dequeInt); // O(1)

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PopFront(vectorStr); // O(n)

                listStr = GenerateListStr(INPUTSTR, len);
                logger.PopFront(listStr); // O(1)

                dequeStr = GenerateDequeStr(INPUTSTR, len);
                logger.PopFront(dequeStr); // O(1)

#endif
#ifdef POP_FRONT_ALL

                // vectorInt = GenerateVectorInt(INPUTINT, len);
                // logger.PopFrontAll(vectorInt, len); // O(n^2)

                // listInt = GenerateListInt(INPUTINT, len);
                // logger.PopFrontAll(listInt, len); // O(n)

                // dequeInt = GenerateDequeInt(INPUTINT, len);
                // logger.PopFrontAll(dequeInt, len); // O(n)

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PopFrontAll(vectorStr, len); // O(n^2)

                // listStr = GenerateListStr(INPUTSTR, len);
                // logger.PopFrontAll(listStr, len); // O(n)

                // dequeStr = GenerateDequeStr(INPUTSTR, len);
                // logger.PopFrontAll(dequeStr, len); // O(n)

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
        }

#endif
#ifdef POP_BACK_ALL

                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PopBackAll(vectorInt, len);

                listInt = GenerateListInt(INPUTINT, len);
                logger.PopBackAll(listInt, len);

                dequeInt = GenerateDequeInt(INPUTINT, len);
                logger.PopBackAll(dequeInt, len);

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PopBackAll(vectorStr, len);

                listStr = GenerateListStr(INPUTSTR, len);
                logger.PopBackAll(listStr, len);

                dequeStr = GenerateDequeStr(INPUTSTR, len);
                logger.PopBackAll(dequeStr, len);
        }

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
