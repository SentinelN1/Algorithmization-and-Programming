#pragma optimize("[optimization-list]", off)
#define INPUTINT "integers.txt"
#define INPUTSTR "strings.txt"
#define OUTPUT "Logs/push_front.csv"

#define PUSH_FRONT

#define STEP 100000
#define LENGTH 1000000

#define ELEMINT 0
#define ELEMSTR "TCqfOrIDRFzZJHzihRfJLVCyeBdcciXwv"

#include "Headers/VectorGenerator.h"
#include "Headers/ListGenerator.h"

#include "Headers/TimeLogger.h"

int main()
{
        std::vector<int> vectorInt;
        std::list<int> listInt;

        std::vector<std::string> vectorStr;
        std::list<std::string> listStr;

        TimeLogger logger(OUTPUT);
        logger.Log("Length; Algorithm; Container; Practical results (mcs)\n");
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
                logger.PopFront(vectorInt, len); // O(n^2)

                listInt = GenerateListInt(INPUTINT, len);
                logger.PopFront(listInt, len); // O(n)

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PopFront(vectorStr, len); // O(n^2)

                listStr = GenerateListStr(INPUTSTR, len);
                logger.PopFront(listStr, len); // O(n)

#endif
#ifdef POP_BACK

                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PopBack(vectorInt, len); // O(n)

                listInt = GenerateListInt(INPUTINT, len);
                logger.PopBack(listInt, len); // O(n)

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PopBack(vectorStr, len); // O(n)

                listStr = GenerateListStr(INPUTSTR, len);
                logger.PopBack(listStr, len); // O(n)

#endif
#ifdef PUSH_FRONT

                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PushFront(vectorInt, len);

                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PushFrontReserve(vectorInt, len);

                listInt = GenerateListInt(INPUTINT, len);
                logger.PushFront(listInt, len);

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PushFront(vectorStr, len);

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PushFrontReserve(vectorStr, len);

                listStr = GenerateListStr(INPUTSTR, len);
                logger.PushFront(listStr, len);

#endif
#ifdef PUSH_BACK

                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PushBack(vectorInt, len);

                vectorInt = GenerateVectorInt(INPUTINT, len);
                logger.PushBackReserve(vectorInt, len);

                listInt = GenerateListInt(INPUTINT, len);
                logger.PushBack(listInt, len);

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PushBack(vectorStr, len);

                vectorStr = GenerateVectorStr(INPUTSTR, len);
                logger.PushBackReserve(vectorStr, len);

                listStr = GenerateListStr(INPUTSTR, len);
                logger.PushBack(listStr, len);

#endif
        }

        return 0;
}
