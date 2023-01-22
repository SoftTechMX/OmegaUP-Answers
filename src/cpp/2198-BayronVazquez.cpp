#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> palabras;
    string word;
    int casos;
    int word_length;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> word_length;
        cin >> word;
        palabras.push_back(word);
    }
    bool BOLD = false;
    bool NON_BOLD = false;

    for (auto i = palabras.begin(); i != palabras.end(); i++) {

        BOLD = false;
        NON_BOLD = false;

        for (int c = 0; c < i->size(); c++) {
            if (i->at(c) == 'N')
                NON_BOLD = true;
            if ( i->at(c) == 'B')
                BOLD = true;
        }
        if (BOLD == true && NON_BOLD == false) {
            cout << "Bold" << endl;
        }
        else if (BOLD == false && NON_BOLD == true) {
            cout << "Non bold" << endl;
        }
        else {
            cout << "Some bold" << endl;
        }
    }
}