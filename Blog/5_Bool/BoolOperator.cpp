#include <iostream>

using namespace std;

#define OperatorTest(EXPRESSION, GUIDE, PRINTDATA) EXPRESSION;\
        printf(GUIDE "=> %d\n", PRINTDATA);\
        printf("-------------------------\n")

int main(void){
    bool    bData   = -10.3;
    int     iNum    = 26;
    double  dNum    = 626.52;

    OperatorTest(++bData, "++bData          ", bData);
    OperatorTest(++++bData, "++++bData          ", bData);
    OperatorTest(bData = iNum + dNum, "bData + iNum         ", bData);
    OperatorTest(bData = bData - 1, "bData - 1          ", bData);
    OperatorTest(bData += 20, "bData += 20          ", bData);
    OperatorTest(bData -= 30, "bData -= 30          ", bData);
    OperatorTest(bData *= 20.63, "bData *= 20.63            ", bData);
    OperatorTest(bData /= 20.63, "bData /= 20.63            ", bData);
    OperatorTest(bData %= 100, "bData %= 100            ", bData);
    OperatorTest(bData &= 50, "bData &= 50          ", bData);
    OperatorTest(bData = -bData + 8, "bData = -bData + 8    ", bData);
    OperatorTest(bData |= 10, "bData = ~bData + 8   ", bData);
    OperatorTest(bData = !bData, "bData = !bData        ", bData);
    OperatorTest(bData << 1, "bData << 1            ", bData);
    OperatorTest(bData >> 1, "bData >> 1            ", bData);

    return 0;
}