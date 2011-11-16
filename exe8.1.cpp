#include <string>
#include <iostream>
#include <vector>
#include <algorithm>  // For reverse
using namespace std;

//======================================================= main
int main() {
    vector<string> words;
    string aWord;
    
    //-- Read into the vector
    while (cin >> aWord) {
        words.push_back(aWord);
    }
    
    //--- Reverse the vector
    reverse(words.begin(), words.end());
    
    //--- Print the vector
    for (int i=0; i<words.size(); i++) {
        cout << words[i] << endl;
    }
    
    system("PAUSE"); // NON-PORTABLE. Keep Dev-C++ window open.
}
