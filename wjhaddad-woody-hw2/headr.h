// General header file.

#ifndef HEADR_H
#define HEADR_H
//
// Based on code from Dr. Fawcett:
//
//http ://www.lcs.syr.edu/faculty/fawcett/handouts/CSE687/code/HiResTimerNativeCpp/HiResT
//imer.cpp
//
//http ://www.lcs.syr.edu/faculty/fawcett/handouts/CSE687/code/HiResTimerNativeCpp/HiResT
//imer.h
//
#ifdef linux
#elif defined __APPLE_CC__
#else
#include <Windows.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>  // For srand() and rand()
#include <string>
#include <iomanip>

using namespace std;

class WindowsStopwatch {		// This is the class to measure time
public:
	WindowsStopwatch();
	void start();
	void stop();
	long getTime();
protected:
	__int64 a, b, f;
};
#endif

void printVector(vector<int>& vector, int N);

struct ISort {					// This is the parent class declaration from which all other sorting classes are created
	   ISort() {} 
	   virtual ~ISort() {} 
	   virtual void sort(vector<int>& vector, int N) = 0;
	   };

class insertionSort:public ISort	// Declaration of insertion sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class selectionSort :public ISort	// Declaration of selection sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class bubbleSort :public ISort	// Declaration of bubble sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class bubbleSortFlag :public ISort	// Declaration of bubble sort with flag class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class heapSort :public ISort	// Declaration of heap sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class mergeSort :public ISort	// Declaration of merge sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class quickSort :public ISort	// Declaration of quick sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class radixSort :public ISort	// Declaration of radix sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class smoothSort :public ISort	// Declaration of smooth sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

class countingSort :public ISort	// Declaration of counting sort class derived from isort
{
public:
	void sort(vector<int>& vector, int N);
};

#endif