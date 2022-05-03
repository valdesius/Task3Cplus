#include <iostream>
#include <string.h>

using namespace std;

string* getArray(int numberOfElements, string* arr)
{
    string* newArr = new string[numberOfElements * 2];
    for (int i = 0; i < numberOfElements; i++)
    {
        *(newArr + i * 2) = *(arr + i);
        *(newArr + (2 * i + 1)) = *(arr + i);

    }
    return newArr;
}

int main() {
    int size;
    cout << "Enter the size of array: "<<endl;
    cin >> size;
    char sourceArr[size];
    cout << "Enter the string: " << endl;
    cin >> sourceArr;

    int lengthSrcArr = strlen(sourceArr);
    char *vector = sourceArr;

    getArray(size, vector);

    int lengthFinalArr = lengthSrcArr / 3;
    char *finalVec = new char[lengthFinalArr];


    int temp = 0;
    int rep = 2;
    for (int i = 0; i < lengthSrcArr; i++) {
        *(finalVec + temp) = *(vector + i + rep);
        rep += 2;
        temp += 1;

    }
    finalVec[lengthFinalArr] = '\0';

    cout << "Final array: ";
    for (int i = 0; i < lengthFinalArr; i++) {
        cout << finalVec[i];
    }
    return 0;
}
