#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

class Store {
public:
	ostream& os;
	Store(ostream& stream) : os(stream) {}
	void operator()(const string & st);
};
void ShowStr(const string &st);
void GetStrs(std::istream & is, std::vector<std::string> & vs);

int main() {
    using namespace std;
    vector<string> vostr;
    string temp;

    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin,temp) && temp != "\0")
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }

    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file: \n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

	system("Pause");
    return 0;
}

void ShowStr(const string &st) {
	cout << st << endl;
}

void GetStrs(istream & is, vector<std::string> & vs) {
    string temp;
    int len;

    while (is.read((char *) &len, sizeof(int)) && len > 0)
    {
        char ch;
        temp = "";
        for (int j = 0; j < len; j++)
        {
            if (is.read(&ch, 1))
            {
                temp += ch;
            }
            else
                break;
        }
        if (is)
            vs.push_back(temp);
    }
}

void Store::operator()(const string & st) {
	int len = st.size();
	os.write((char *)&len, sizeof(int));
	os.write(st.data(), len);
}
//Here is part of a program that reads keyboard input into a vector of stringobjects,
//stores the string contents (not the objects) in a file,and then copies the file contents
//back into a vector of stringobjects
//Note that the file is opened in binary format and that the intention is that I/O be
//accomplished with read()andwrite().Quite a bit remains to be done:
//
//* Write a void ShowStr(const string &)function that displays a string
//object followed by a newline character.
//
//* Write a Store functor that writes string information to a file.The Store
//constructor should specify an ifstream object,and the overloaded
//operator()(const string &)should indicate the string to write. A work-
//able plan is to first write the string’s size to the file and then write the string
//contents.For example,if lenholds the string size,you could use this
//
//os.write((char *)&len, sizeof(std::size_t)); // store length
//os.write(s.data(), len); // store characters
//
//Thedata()member returns a pointer to an array that holds the characters in
//the string.It’s similar to the c_str()member except that the latter appends a
//null character.
//
//* Write a GetStrs()function that recovers information from the file.It can
//useread()to obtain the size of a string and then use a loop to read that
//many characters from the file,appending them to an initially empty tempo-
//rary string.Because a string’s data is private,you have to use a class method to
//get data into the string rather than read directly into it.