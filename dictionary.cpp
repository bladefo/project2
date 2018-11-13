#include "dictionary.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

long hTable::hashMult(string word) const
{
	//stringToWord
	long stringNum;
	long stringLen;
	while(sizeOf(word) != 0)
	{
		stringLen++;
	}
	int blocks = stringLen / 4;
	int remainder = stringLen % 4;
	int k = 0;

	for(int i = 0; i < blocks; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			num = num + a;
		}
	}


	long P = log2(length);
	long w = 31;//table size limit is 2^31
	double gRatio = .618033989;
	long s = gRatio * pow(2, 31);

	long tmp = n * s;
	tmp = tmp & ((1<<w) - 1);
	tmp = tmp >> (w-P);
	return tmp;
}