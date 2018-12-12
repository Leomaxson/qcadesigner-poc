/**
 * @file  util.h
 */ 

#ifndef __UTIL_H__
#define __UTIL_H__

#include "design.h"

/* Constants */
#define NUMBER_OF_CLOCKS_DEFAULT     (4)

/* Exported functions */
void setNumberOfClocks(int nClocks);
int getNumberOfClocks(void);
int getNumberOfMetaClocks(void);
int getNumberOfTotalClocks(void);
double getParameterB(int clock, int numberOfClocks);
int numberOfClocksUsed(DESIGN *design);
void updateNumberOfClocksUsed(DESIGN *design, int oldNumberOfClocks);

#endif // __UTIL_H__