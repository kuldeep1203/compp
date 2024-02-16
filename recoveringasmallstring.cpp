#include <iostream>
#include <string>

using namespace std;

string lexicographicallySmallestWord(int sum) {
    string word;
    for(char first = 'a'; first <= 'z'; ++first){
        word += first;
        int remainingSum = sum - (first-'a');
        for (char second = 'a'; second <= 'z'; ++second) {
            int remainingSumThird = remainingSum - (second - 'a');
            if (remainingSumThird >= 1 && remainingSumThird <= 26) {
                char third = 'a' + remainingSumThird;
                word += second;
                word += third;
                return word;
            }
        }
        word.clear();
    }
    
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum;
        cin >> sum;
        string result = lexicographicallySmallestWord(sum);
       
        cout << result << "\n";
        
    }
    return 0;
}
