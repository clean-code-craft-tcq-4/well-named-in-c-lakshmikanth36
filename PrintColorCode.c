void PrintColorCode()
{
    int MajorColor;
    int MinorColor;
    int PairNumber = 1;

    for(MajorColor = 0; MajorColor < numberOfMajorColors; majorColor++)
    {
        for(MinorColor = 0; MinorColor < numberOfMinorColors; ,MinorColor++)
        {
            printf("   %d\t  %s\t  %s\t\n",PairNumber++, MajorColors[MajorColor], MinorColors[MinorColor]);
        }
      
    }
}