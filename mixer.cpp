#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath> 
#include <ctime>
#include <queue>
#include <vector>

using namespace std;
using std::queue;

int main(void)
{   
    srand(time(NULL));
    queue<string> myQueue;
    vector<string> myvec_1;
    vector<string> myvec_2;

    string input_path = "source.txt";
    string dict_path = "dict.txt";
    string add_path = "source_2.txt";
    // int dict_line = 349895;
    int dict_line = 1525;
    int source_2_line = 1042;

    string index_1, index_2, index_3, export_word, export_word_add;
    string input_1, input_2, input_3, input_4, input_5, input_6, input_7, input_8, input_9, input_10;
    string source_input, source_2_input;
    int rand_int, helper_int, add_int;

    ifstream inputFile(input_path);
    ifstream dictFile(dict_path);
    ifstream addFile(add_path);

    if (!inputFile)
        return -1;
    
    while (getline(inputFile, index_1))
    {
        stringstream ss(index_1);
        getline(ss, input_1, ' ');
        getline(ss, input_2, ' ');
        getline(ss, input_3, ' ');
        getline(ss, input_4, ' ');
        getline(ss, input_5, ' ');
        getline(ss, input_6, ' ');
        getline(ss, input_7, ' ');
        getline(ss, input_8, ' ');
        getline(ss, input_9, ' ');
        getline(ss, input_10, ' ');

        myQueue.push(input_1);
        myQueue.push(input_2);
        myQueue.push(input_3);
        myQueue.push(input_4);
        myQueue.push(input_5);
        myQueue.push(input_6);
        myQueue.push(input_7);
        myQueue.push(input_8);
        myQueue.push(input_9);
        myQueue.push(input_10);
    }

    while (getline(dictFile, index_2))
    {
        stringstream ss(index_2);
        getline(ss, source_input, '\n');

        myvec_1.push_back(source_input);
    }

    while (getline(addFile, index_3))
    {
        stringstream ss(index_3);
        getline(ss, source_2_input, '\n');

        myvec_2.push_back(source_2_input);
    }

    string exported_file = "exported_file.txt";
    ofstream fout(exported_file);

    while(!myQueue.empty())
    {
        helper_int = rand() % 5;
        

        fout << myQueue.front(); 
        
        for (int i = 0; i < helper_int; i++)
        {
            rand_int = rand() % dict_line;
            add_int = rand() % source_2_line;

            export_word = myvec_1.at(rand_int);
            export_word_add = myvec_2.at(add_int);

            fout << " " << export_word << " "; 
            fout << export_word_add;
        }

        fout << "" << endl;
        myQueue.pop();
        // myQueue.pop();
    }

    return 0;
}