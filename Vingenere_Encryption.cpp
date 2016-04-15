#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void wait(){
	cout<<endl<<"-->Press Enter to Continue<--"<<endl<<endl;
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();
}

int main(){
	
	//User input
	while(true){
		char input = 'a';
		string filename;
		string content;
		string content2;
		fstream filestream;
		
		cout << "v/e: Dateieingabe, q: Beenden" << endl;
		cin >> input;
		switch(input){
			case 'v':
			case 'e':
				cout << "Dateiname:";
				cin >> filename;
				
				filestream.open(filename.c_str(),ios::in|fstream::in);
				getline(filestream, content, '\n');
				cout << content;

				cout << endl << "v: Datei verschluesseln, e: Datei entschluesseln" << endl;
				cin >> input;
				switch(input){
					case 'v':
						break;
					case 'e':
						break;
				}

				
				/*for(int i = 0; i < content.length; i++){
					
				}*/
				break;
			case 'q':
				return 0;
			default:
				break;
		}
	}
	
	wait();
	return 0;
}