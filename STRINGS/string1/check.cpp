#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.length();

    // Create a new string to store the result
    string result = "";
    int i=0;
    while(i<n){
        if (s[i+1] == '#') {
            // Skip the '#' character
            i+=2;
        } else {
            // Append non-'#' characters to the result string
            result += s[i];
            i++;
        }
    }

    // Print the modified string without the '#' characters
    cout << result;

    return 0;
}
