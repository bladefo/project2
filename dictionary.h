#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>

using namespace std;

class hTable
{
private:
	int length = 10000;//total number of buckets

	long stringToNum(string);//converts each string in a sentence to a long
	long hashMult(string) const;//takes a string, converts to long, and hashes it
	
	
public:
	//Hash Table Functions
	hTable();//constructor
	~hTable();//destructor

	void insert(string);//inserts string into table
	void deleteString(string);//deletes string
	
	//Hash Table Statistics
	long numWords();//returns total number of words
	long numBuckets();//returns total number of buckets
	long maxBuckets();//returns largest bucket size
	long minBuckets();//returns smallest bucket size
	long usedBuckets();//returns number of all buckets used
	double avgNode();//return average amount of nodes in each bucket

};

#endif