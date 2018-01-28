#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  ifstream quote_file("quotes.txt");
  if (quote_file.is_open()) {
    int num_lines;
    quote_file >> num_lines;

    srand(time(NULL)); // init random seed
    int quote_line = rand() % num_lines; // pick the quote

    cout << quote_line << endl;
    string quote;
    for (int i = 0; i < quote_line + 2; ++i) {
      getline(quote_file, quote); // go through the file
    }
    cout << quote << endl;
    return 0;
  } else {
    cout << "Unable to open file." << endl;
    return 1;
  }
}