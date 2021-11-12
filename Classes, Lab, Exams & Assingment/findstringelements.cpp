#include <iostream>

using namespace std;
int main()
{
    char r[100000];
    int letter = 0, numbers = 0, i = 0, sentence = 0, spacial_char = 0, word = 0;
    cout << "Please Enter Here: " << endl;
    gets(r);

    while (r[i] != '\0')
    {
        if ((r[i] >= 'a' && r[i] <= 'z') || (r[i] >= 'A' && r[i] <= 'Z'))
        {
            letter++;
        }
        else if (r[i] >= 0 && r[i] <= 9)
        {
            numbers++;
        }
        else if (r[i] == '.' || r[i] == '?' || r[i] == '!')
        {

            sentence++;
            spacial_char++;
        }
        else if (r[i] == ' ')
        {
            word++;
        }

        else
        {
            spacial_char++;
        }

        i++;
    }
    cout << "Letter = " << letter << endl;
    cout << "numbers = " << numbers << endl;
    cout << "sentence = " << sentence << endl;
    cout << "word = " << word + 1 << endl;
    cout << "spacial charecter = " << spacial_char << endl;

    return 0;
}
