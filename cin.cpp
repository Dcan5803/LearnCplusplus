//*********************
#include<iostream>
#include<string>
#include<regex>

using namespace std;

int main() {
	string name;
	cout << "Nhap ten cua ban: ";
	// hàm bỏ qua khoảng trắng đầu tiên
	cin >> std::ws;
	// hàm getline(cin,name) đọc chuỗi cho đến khi gặp kí tự xuống dòng
	getline(cin, name);
	// hàm loại bỏ các khoảng trắng thừa bằng 1 khoảng trắng duy nhất
	regex r("\\s+");
    name = regex_replace(name, r, " ");

	cout << "Hello " << name << endl;
	//=================================================
    int a,b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl;
	//==================================================
	string M1,M2 = "Where are you from?";
	cout << "Nhap xau M1: ";
	// cin >> M1 ==> Chỉ đọc chuỗi trước khoảng trắng đầu tiên
	cin >> std::ws;
	//cin.ignore();
	getline(cin,M1);
		regex r2("\\s+");
    M1 = regex_replace(M1, r2, " ");
	cout << M1 + " " + M2;

	return 0;
}

