#ifndef TELEPHONE_INFO_H
#define TELEPHONE_INFO_H

#include "constants.h"
//номер дата время продолжительность тариф стоимость
struct info
{
    char number[MAX_STRING_SIZE];
    char date[MAX_STRING_SIZE];
    char time[MAX_STRING_SIZE];
    char lasting[MAX_STRING_SIZE];
    char rate[MAX_STRING_SIZE];
    double cost;
};

#endif