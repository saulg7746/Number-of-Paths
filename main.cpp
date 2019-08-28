#include <iostream>

void NumberOfPaths(int M, int N, int endingM, int endingN, int &paths)
{
	// Stopping Condition
	if (M == endingM && N == endingN)
		paths++;
	if (N < endingN)
		NumberOfPaths(M, N + 1, endingM, endingN, paths);
	if (M < endingM)
		NumberOfPaths(M + 1, N, endingM, endingN, paths);

}

int main ()
{
/*
	The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

	Input:
	The first line of input contains an integer T, denoting the number of test cases. The first line of each test case is M and N, M is number of rows and N is number of columns.

	Output:
	For each test case, print the number of paths.

	Example:
	Input
	2
	3 3
	2 8

	Output
	6
	8

	Explanation:
	Testcase 1: Let the given input 3*3 matrix is filled as such:
	A B C
	D E F
	G H I
	The possible paths which exists to reach 'I' from 'A' following above conditions are as follows:
	ABCFI, ABEHI, ADGHI, ADEFI, ADEHI, ABEFI.
	*/
	int numOfCases = 0;
	std::cout << "Please enter the number of cases: ";
	std::cin >> numOfCases;
	for (int i = 0; i < numOfCases; i++)
	{
		int M = 0, N = 0;
		int paths = 0;
		std::cout << "Please enter the M dimension followed by the N dimension: ";
		std::cin >> M >> N;
		std::cout << std::endl;
		NumberOfPaths(1, 1, M, N, paths);
		std::cout << std::endl << paths;
	}
  return 0;
}
