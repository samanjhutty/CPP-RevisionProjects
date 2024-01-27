#ifndef OPERATOROVERLOADING_H
#define OPERATOROVERLOADING_H


class OperatorOverloading
{
public:
    OperatorOverloading();
    OperatorOverloading(int);
    OperatorOverloading operator+(OperatorOverloading);

    int input;
};

#endif // OPERATOROVERLOADING_H
