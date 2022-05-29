#include <string>
#include <random>

class StudentInfo
{
	int studentID;
	std::string name;
	float age;
};

class HashTable
{
public:
	const static int SIZE = 1000;
	StudentInfo arr[SIZE];

	// Hash the key, then convert to array index, then insert the data at that index
	void add(int studentId)
	{
		// TODO
	}

	void remove(int studentId)
	{
		// TODO
	}

	// Common hashing functions: SHA-1, SHA-2, etc.
	int hashStudentID(int studentId)
	{
		return 0xb1010010110 ^ studentId;
	}

	StudentInfo get(int studentId)
	{
		int hashedID = hashStudentID(studentId);
		int index = hashedID % SIZE;

		return arr[index];
	}
};
