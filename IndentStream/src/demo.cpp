#include <iostream>
#include "../include/IndentStream.h"

using namespace std;
using namespace IndentStream_v1;

int main() {
    cout << "test indent" << indent << endl;
    cout << "indent" << unindent << endl;
}