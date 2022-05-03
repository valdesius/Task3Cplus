#include <iostream>
#include <string.h>

using namespace std;

char* getArray(int length, char* arr)
{
    int lengthFinalArr = length / 3;
    char *finalVec = new char[lengthFinalArr];
    int temp = 0;
    int rep = 2;
    for (int i = 0; i < length; i++) {
        *(finalVec + temp) = *(arr + i + rep);
        rep += 2;
        temp += 1;

    }
    finalVec[lengthFinalArr] = '\0';
    return finalVec;
}

void printArr(int lengthFinalArr, char* finalVec){
    cout << "Final array: ";
    for (int i = 0; i < lengthFinalArr; i++) {
        cout << finalVec[i];
    }
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

    char *finalVector = getArray(size, vector);
    int lengthFinalArr = lengthSrcArr/3;
    printArr(lengthFinalArr, finalVector);
    return 0;
}
