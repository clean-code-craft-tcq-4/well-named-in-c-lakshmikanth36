#include "ColorCode.h"

void PrintColorCode()
{
    int MajorColor;
    int MinorColor;
    int PairNumber = 1;
    
    printf("  Pair No.  Major Color   Minor Color\n");
    for(MajorColor = 0; MajorColor < numberOfMajorColors; MajorColor++)
    {
        for(MinorColor = 0; MinorColor < numberOfMinorColors; MinorColor++)
        {
            printf("   %d \t    %s\t  %s\t\n",PairNumber++, majorColors[MajorColor], minorColors[MinorColor]);
        }
      
    }
}
