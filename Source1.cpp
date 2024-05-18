#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student{
	string _name;
	string _sName;
	string _favScince;
public:
	Student() = default;
	Student(string name,string sName,string favScince):_name(name),_sName(sName),_favScince(favScince){}
	

	void show()
	{
		cout << "Name: " << _name << endl;
		cout << "S Name: " << _sName << endl;
		cout << "Fav Science: " << _favScince << endl;
	}


	string getName() {
		return _name;
	}

	string getSname() {
		return _sName;

	}

	string getScience() {
		return _favScince;
	}

	void setName(string name) {
		_name = name;

	}

	void setSName(string sName){
		_sName = sName;
	}

	void setFavScience(string favScience) {
		_favScince = favScience;
	}



};

int main() {
	Student st1("Alex", "Cool", "Chemistry");

	string fileName = "students.txt";

	//ofstream fout;
	//fout.open(fileName);
	//if (!fout.is_open()) {
	//	cout << "File cant be opened for write\n";
	//}
	//else {
	//	fout << st1.getName();
	//	fout << "\n";
	//	fout << st1.getSname();
	//	fout << "\n";
	//	fout << st1.getScience();
	//	fout << "\n";

	//}

	//fout.close();


	string strArr[3];
	Student st2;
	ifstream fin;
	fin.open(fileName);
	if (!fin.is_open()) {
		cout << "File cant be open for read\n";
	}
	else {
		
		

		string strName;
		string strSName;
		string strScience;
		

		
			
		fin >> strName;
		fin >> strSName;
		fin >> strScience;
			
			
			
		

		fin.close();
		
		st2.setName(strName);
		st2.setSName(strSName);
		st2.setFavScience(strScience);

		st2.show();

	}



	return 0;
}