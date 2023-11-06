#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	cout<<"Name. Lila Neev "<<endl;
	cout<<"Enrollment no. 220130318021"<<endl;
    
    ifstream source_file;
    ofstream destination_file;
    string line;
  
    source_file.open("test.txt");
  
    if (!source_file.is_open()) 
    {
        cout << "Unable to open the source file." << endl;
        return 1; 
    }

    destination_file.open("test1.txt");

    
    if (!destination_file.is_open()) {
        cout << "Unable to open the destination file." << endl;
        source_file.close();
        return 1; 
    }
        while (getline(source_file, line)) {
        destination_file << line << endl;
    }
    source_file.close();
    destination_file.close();

    cout << "File copied successfully." << endl;

    return 0;
}
