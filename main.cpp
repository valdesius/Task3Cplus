#include <iostream>
using namespace std;

void transform(char *str) {
    int count = 1;

    for (int i = 1; str[i]!=0; i++) {
        if (str[count] % 3 == 0){
            cout << str[count];
        }

        count = count + 1;
    }
}

int main() {
    char sourceArr[] = "abcdef";
    char *str = sourceArr;
    transform(str);
    return 0;
}


