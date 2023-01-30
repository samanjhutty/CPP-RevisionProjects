#ifndef MISSSINGNOINARRAY_H
#define MISSSINGNOINARRAY_H


class MisssingNoInArray
{
public:
    MisssingNoInArray();

private:
    void maxMinArray();
    void missingNo();
    void sortArray();
    void multiDimenArray();

    int elements[20],newElement[20],i,j,s,input;
    int dmy=0,n,arrMax=0,arrMin=0,sortorder;
    int multiElements[10][10],mulr,mulc;
};

#endif // MISSSINGNOINARRAY_H
