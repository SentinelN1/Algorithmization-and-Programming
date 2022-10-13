#define INPUT "values.csv"
#define OUTPUT "log.csv"
#define LENGTH 1e6
#define STEP 1e5

#include "VectorGenerator.h"
#include "ListGenerator.h"
#include "TimeLogger.h"

int main()
{
    // I believe there is a 0 in the first hundred thousend
    // elements, so it only takes around 38 mcs to find a zero
    // for all vector lengths.
    int element = 1;
    std::vector<int> vector;
    std::list<int> list;

    list = GenerateListInt(INPUT, 10);

    for (const auto &i : list)
    {
        std::cout << i << "\n";
    }

    // TimeLogger logger(OUTPUT);

    // for (int len = STEP; len <= LENGTH; len += STEP)
    // {
    //     vector = GenerateVectorInt(INPUT, len);

    //     logger.Reset();
    //     logger.Find(vector, element);
    //     logger.Log();
    // }

    return 0;
}
