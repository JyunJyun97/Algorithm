#include <iostream>
#include <set>
#include <vector>

using namespace std;

void generateCombinations(set<string>& combinations, const vector<string>& words, vector<string> current, int index) {
    if (index == current.size()) {
        combinations.insert(current[0] + " " + current[1]);
        return;
    }

    for (const ::string& word : words) {
        current[index] = word;
        generateCombinations(combinations, words, current, index + 1);
    }
}

int main() {
    
    string a, b, c, d;

    cin >> a >> b;
    cin >> c >> d;

    vector<string> words = {a, b, c, d};
    set<string> combinations;

    generateCombinations(combinations, words, vector<string>(2), 0);

    for (const string& combination : combinations) {
        cout << combination << endl;
    }

    return 0;
}