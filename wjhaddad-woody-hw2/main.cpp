#include "headr.h"

int main() {


	/////////////////////////////////////////////////////////////////////////// FILE CREATION


	ofstream file_ascending("ascending.txt");		// Create ascending file
	if (file_ascending.is_open())
	{
		for (int i = 1; i <= 200000; i++)
		{
			file_ascending << i;
			file_ascending << "-";
			if (i%10 == 0)
			{
				file_ascending << "\n";
			}

		}

	file_ascending.close();
	}

	ofstream file_descending("descending.txt");		// Create descending file
	if (file_descending.is_open())
	{
		for (int i = 200000; i > 0 ; i--)
		{
			file_descending << i;
			file_descending << "-";
			if ((i-1) % 10 == 0)
			{
				file_descending << "\n";
			}

		}

		file_descending.close();
	}

	ofstream file_random("random.txt");		// Create descending file
	if (file_random.is_open())
	{
		for (int i = 200000; i > 0; i--)
		{
			file_random << rand();
			file_random << "-";
			if ((i - 1) % 10 == 0)
			{
				file_random << "\n";
			}

		}

		file_random.close();
	}

	/////////////////////////////////////////////////////////////////////////// FILE CREATION

	vector<int> v_asc, v_des, v_rand;						// declare vectors to store integers read from file.



	string line_;
	string s;
	ifstream file_asc("ascending.txt");
	int filesize = 0;

	if (file_asc.is_open())									// next ~30 lines read data from .txt file and input integers into vector
	{
		int i = 0;
		while (getline(file_asc, line_))
		{
			filesize+=10;
			for (int i = 0; i < line_.size(); i++)
			{
				if (line_[i] != '-')
				{
					s.push_back(line_[i]);
				}
				else
				{

					v_asc.push_back(stoi(s));					
					s = "";
				}
			}

		}
		file_asc.close();
	}

	//cout << v_asc[0] << endl;
	//cout << v_asc[1] << endl;
	//cout << v_asc[2] << endl;
	//cout << v_asc[3] << endl;
	//cout << v_asc[4] << endl;
	//cout << v_asc[5] << endl;
	//cout << v_asc[6] << endl;
	//cout << v_asc[7] << endl;
	//cout << v_asc[8] << endl;
	//cout << v_asc[9] << endl;
	//cout << v_asc[10] << endl;
	//cout << v_asc[11] << endl;
	//cout << v_asc[12] << endl;
	//cout << v_asc[13] << endl;
	//cout << v_asc[999999] << endl;

	//printVector(v_asc, v_asc.size());

	s = "";
	ifstream file_des("descending.txt");
	if (file_des.is_open())									// next ~30 lines read data from .txt file and input integers into vector
	{
		int i = 0;
		filesize = 0;
		while (getline(file_des, line_))
		{
			filesize+=10;
			for (int i = 0; i < line_.size(); i++)
			{
				if (line_[i] != '-')
				{
					s.push_back(line_[i]);
				}
				else
				{

					v_des.push_back(stoi(s));
					s = "";
				}
			}

		}
		file_des.close();
	}

	//cout << v_des[0] << endl;
	//cout << v_des[1] << endl;
	//cout << v_des[2] << endl;
	//cout << v_des[3] << endl;
	//cout << v_des[4] << endl;
	//cout << v_des[5] << endl;
	//cout << v_des[6] << endl;
	//cout << v_des[7] << endl;
	//cout << v_des[8] << endl;
	//cout << v_des[9] << endl;
	//cout << v_des[10] << endl;
	//cout << v_des[11] << endl;
	//cout << v_des[12] << endl;
	//cout << v_des[13] << endl;
	//cout << v_des[999999] << endl;

	s = "";
	ifstream file_rand("random.txt");
	if (file_rand.is_open())									// next ~30 lines read data from .txt file and input integers into vector
	{
		int i = 0;
		filesize = 0;
		while (getline(file_rand, line_))
		{
			filesize += 10;
			for (int i = 0; i < line_.size(); i++)
			{
				if (line_[i] != '-')
				{
					s.push_back(line_[i]);
				}
				else
				{

					v_rand.push_back(stoi(s));
					s = "";
				}
			}

		}
		file_rand.close();
	}

	//cout << v_rand[0] << endl;
	//cout << v_rand[1] << endl;
	//cout << v_rand[2] << endl;
	//cout << v_rand[3] << endl;
	//cout << v_rand[4] << endl;
	//cout << v_rand[5] << endl;
	//cout << v_rand[6] << endl;
	//cout << v_rand[7] << endl;
	//cout << v_rand[8] << endl;
	//cout << v_rand[9] << endl;
	//cout << v_rand[10] << endl;
	//cout << v_rand[11] << endl;
	//cout << v_rand[12] << endl;
	//cout << v_rand[13] << endl;
	//cout << v_rand[999999] << endl;

	WindowsStopwatch a;

	ISort *ptrIS, *ptrSS, *ptrBS, *ptrBSF, *ptrHS, *ptrMS, *ptrQS, *ptrRS, *ptrSMS, *ptrCS;												
	insertionSort objIS;
	selectionSort objSS;
	bubbleSort objBS;
	bubbleSortFlag objBSF;
	heapSort objHS;
	mergeSort objMS;
	quickSort objQS;
	radixSort objRS;
	smoothSort objSMS;
	countingSort objCS;

	ptrIS = &objIS;
	ptrSS = &objSS;
	ptrBS = &objBS;
	ptrBSF = &objBSF;
	ptrHS = &objHS;
	ptrMS = &objMS;
	ptrQS = &objQS;
	ptrRS = &objRS;
	ptrSMS = &objSMS;
	ptrCS = &objCS;


	ofstream outData;
	s = "";
	cout << s;
	int duration;
	remove("random.csv");
	outData.open("random.csv", ios::app);

	vector<int> v_asc_t, v_des_t, v_rand_t;						// declare temporary vectors so that original vectors stay unaltered.
	v_rand_t = v_rand;
	v_des_t = v_des;
	v_asc_t = v_asc;

	int duration1, duration2, duration3;

	outData << "insertion,,selection,,bubble,,bubbleF,,heap,,merge,,quick,,radix,,smooth,,counting \n";


	////////////////////////////////////////////////////////////////
	///////////////////////RANDOM.TXT////////////////////////
	////////////////////////////////////////////////////////////////

	for (int i = 1000; i < filesize; i = i * 2)					// This loop doubles n for every iteration and sorts only that portion
	{
		if (i > filesize / 2)
		{
			i = filesize;
		}

		///////////// INSERTION SORT random.txt ////////////////
		a.start();												// sample 1 
		ptrIS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrIS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrIS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();

		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

			///////////// SELECTION SORT random.txt ////////////////
		a.start();												// sample 1 
		ptrSS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrSS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrSS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";

		///////////////////////////////////////////////////////

		///////////// BUBBLE SORT random.txt ////////////////
		a.start();												// sample 1 
		ptrBS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrBS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrBS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////// BUBBLE SORT WITH FLAG random.txt ////////////////
		a.start();												// sample 1 
		ptrBSF->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrBSF->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrBSF->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////// HEAP SORT random.txt ////////////////
		a.start();												// sample 1 
		ptrHS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrHS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrHS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////// MERGE SORT random.txt ////////////////
		a.start();												// sample 1 
		ptrMS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrMS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrMS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////// QUICK SORT random.txt ////////////////
		a.start();												// sample 1 
		ptrQS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrQS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrQS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////// RADIX SORT random.txt ////////////////

		a.start();												// sample 1 
		ptrRS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrRS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrRS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////// SMOOTH SORT random.txt ////////////////

		a.start();												// sample 1 
		ptrSMS->sort(v_rand_t, i);
		a.stop();
		duration1 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 2
		ptrSMS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrSMS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();
		v_rand_t = v_rand;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		/////////////// COUNTING SORT random.txt ////////////////
		printf("vector before countingSort \n\n\n");
		printVector(v_rand_t, i);


		a.start();												// sample 1 
		ptrCS->sort(v_rand_t, i);

		a.stop();
		duration1 = a.getTime();
		printf("vector after countingSort \n\n\n");
		printVector(v_rand_t, i);

		v_rand_t = v_rand;




		a.start();												// sample 2
		ptrCS->sort(v_rand_t, i);
		a.stop();
		duration2 = a.getTime();
		v_rand_t = v_rand;
		a.start();												// sample 3
		ptrCS->sort(v_rand_t, i);
		a.stop();
		duration3 = a.getTime();

		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i << endl;
		/////////////////////////////////////////////////////////
	}
	outData.close();





		////////////////////////////////////////////////////////////////
		///////////////////////ASCENDING.TXT////////////////////////
		////////////////////////////////////////////////////////////////


		//ofstream outData;
		s = "";
		cout << s;
		remove("ascending.csv");
		outData.open("ascending.csv", ios::app);

		outData << "insertion,,selection,,bubble,,bubbleF,,heap,,merge,,quick,,radix,,smooth,,counting \n";

		for (int i = 1000; i < filesize; i = i * 2)					// This loop doubles n for every iteration and sorts only that portion
		{
			if (i > filesize / 2)
			{
				i = filesize;
			}

			///////////// INSERTION SORT ascending.txt ////////////////
			a.start();												// sample 1 
			ptrIS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrIS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrIS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();

			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			///////////////////////////////////////////////////////

			///////////////// SELECTION SORT ascending.txt ////////////////
			a.start();												// sample 1 
			ptrSS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrSS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrSS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";

			///////////////////////////////////////////////////////////

			///////////////// BUBBLE SORT ascending.txt ////////////////
			a.start();												// sample 1 
			ptrBS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrBS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrBS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			/////////////////////////////////////////////////////////

			/////////////// BUBBLE SORT WITH FLAG ascending.txt ////////////////
			a.start();												// sample 1 
			ptrBSF->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrBSF->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrBSF->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			/////////////////////////////////////////////////////////

			/////////////// HEAP SORT ascending.txt ////////////////
			a.start();												// sample 1 
			ptrHS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrHS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrHS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			/////////////////////////////////////////////////////////

			/////////////// MERGE SORT ascending.txt ////////////////
			a.start();												// sample 1 
			ptrMS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrMS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrMS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			/////////////////////////////////////////////////////////

			/////////////// QUICK SORT ascending.txt ////////////////

			if (i < 32000)
			{

				a.start();												// sample 1 
				ptrQS->sort(v_asc_t, i);
				a.stop();
				duration1 = a.getTime();
				v_asc_t = v_asc;
				a.start();												// sample 2
				ptrQS->sort(v_asc_t, i);
				a.stop();
				duration2 = a.getTime();
				v_asc_t = v_asc;
				a.start();												// sample 3
				ptrQS->sort(v_asc_t, i);
				a.stop();
				duration3 = a.getTime();
				v_asc_t = v_asc;


				duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

				outData << s;
				outData << duration;							// Write avg of 3 samples to .csv file
				outData << ",";
				outData << i;
				outData << ",";
			}
			else
			{
				outData << s;
				outData << "overflow";							// Write avg of 3 samples to .csv file
				outData << ",";
				outData << i;
				outData << ",";
			}
			/////////////////////////////////////////////////////////

			/////////////// RADIX SORT ascending.txt ////////////////

			a.start();												// sample 1 
			ptrRS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrRS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrRS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			/////////////////////////////////////////////////////////

			/////////////// SMOOTH SORT ascending.txt ////////////////

			a.start();												// sample 1 
			ptrSMS->sort(v_asc_t, i);
			a.stop();
			duration1 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 2
			ptrSMS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrSMS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();
			v_asc_t = v_asc;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
			/////////////////////////////////////////////////////////

			///////////////// COUNTING SORT ascending.txt ////////////////
			printf("vector before countingSort \n\n\n");
			printVector(v_asc_t, i);


			a.start();												// sample 1 
			ptrCS->sort(v_asc_t, i);

			a.stop();
			duration1 = a.getTime();
			printf("vector after countingSort \n\n\n");
			printVector(v_asc_t, i);

			v_asc_t = v_asc;


			a.start();												// sample 2
			ptrCS->sort(v_asc_t, i);
			a.stop();
			duration2 = a.getTime();
			v_asc_t = v_asc;
			a.start();												// sample 3
			ptrCS->sort(v_asc_t, i);
			a.stop();
			duration3 = a.getTime();

			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i << endl;
			/////////////////////////////////////////////////////////////
		}

	outData.close();

	////////////////////////////////////////////////////////////////
	///////////////////////DESCENDING.TXT////////////////////////
	////////////////////////////////////////////////////////////////


	//ofstream outData;
	s = "";
	cout << s;
	remove("descending.csv");
	outData.open("descending.csv", ios::app);

	outData << "insertion,,selection,,bubble,,bubbleF,,heap,,merge,,quick,,radix,,smooth,,counting \n";

	for (int i = 1000; i < filesize; i = i * 2)					// This loop doubles n for every iteration and sorts only that portion
	{
		if (i > filesize / 2)
		{
			i = filesize;
		}

		///////////// INSERTION SORT descending.txt ////////////////
		a.start();												// sample 1 
		ptrIS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrIS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrIS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();

		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		///////////////////////////////////////////////////////

		///////////////// SELECTION SORT descending.txt ////////////////
		a.start();												// sample 1 
		ptrSS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrSS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrSS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";

		///////////////////////////////////////////////////////////

		///////////////// BUBBLE SORT descending.txt ////////////////
		a.start();												// sample 1 
		ptrBS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrBS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrBS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;

		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		/////////////////////////////////////////////////////////

		/////////////// BUBBLE SORT WITH FLAG descending.txt ////////////////
		a.start();												// sample 1 
		ptrBSF->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrBSF->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrBSF->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		/////////////////////////////////////////////////////////

		/////////////// HEAP SORT descending.txt ////////////////
		a.start();												// sample 1 
		ptrHS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrHS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrHS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		/////////////////////////////////////////////////////////

		/////////////// MERGE SORT descending.txt ////////////////
		a.start();												// sample 1 
		ptrMS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrMS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrMS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		/////////////////////////////////////////////////////////

		/////////////// QUICK SORT descending.txt ////////////////

		if (i < 33000)
		{

			a.start();												// sample 1 
			ptrQS->sort(v_des_t, i);
			a.stop();
			duration1 = a.getTime();
			v_des_t = v_des;
			a.start();												// sample 2
			ptrQS->sort(v_des_t, i);
			a.stop();
			duration2 = a.getTime();
			v_des_t = v_des;
			a.start();												// sample 3
			ptrQS->sort(v_des_t, i);
			a.stop();
			duration3 = a.getTime();
			v_des_t = v_des;


			duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

			outData << s;
			outData << duration;							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
		}
		else
		{
			outData << s;
			outData << "overflow";							// Write avg of 3 samples to .csv file
			outData << ",";
			outData << i;
			outData << ",";
		}
		/////////////////////////////////////////////////////////

		/////////////// RADIX SORT descending.txt ////////////////

		a.start();												// sample 1 
		ptrRS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrRS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrRS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		/////////////////////////////////////////////////////////

		/////////////// SMOOTH SORT descending.txt ////////////////

		a.start();												// sample 1 
		ptrSMS->sort(v_des_t, i);
		a.stop();
		duration1 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 2
		ptrSMS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrSMS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();
		v_des_t = v_des;


		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i;
		outData << ",";
		/////////////////////////////////////////////////////////

		///////////////// COUNTING SORT descending.txt ////////////////
		printf("vector before countingSort \n\n\n");
		printVector(v_des_t, i);


		a.start();												// sample 1 
		ptrCS->sort(v_des_t, i);

		a.stop();
		duration1 = a.getTime();
		printf("vector after countingSort \n\n\n");
		printVector(v_des_t, i);

		v_des_t = v_des;


		a.start();												// sample 2
		ptrCS->sort(v_des_t, i);
		a.stop();
		duration2 = a.getTime();
		v_des_t = v_des;
		a.start();												// sample 3
		ptrCS->sort(v_des_t, i);
		a.stop();
		duration3 = a.getTime();

		duration = (duration1 + duration2 + duration3) / 3.0;	// Avg of 3 samples

		outData << s;
		outData << duration;							// Write avg of 3 samples to .csv file
		outData << ",";
		outData << i << endl;
		/////////////////////////////////////////////////////////////
	}
	outData.close();

	system("pause");
	return 0;


}
