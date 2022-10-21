// ������������ ������ ������� C++
#include <iostream>
#include <string> // ����������, ����������� ��������
// � ������� string (�� ��������� �����������)
using namespace std;

string repeat_str(string str, int num);
bool is_spam(string str);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// ��������� �������
	/*char char_str[4]{ 'H', 'i', '!', '\0' };

	for (int i = 0; i < 4; i++)
		cout << char_str[i];
	cout << '\n';

	cout << char_str << '\n';

	char char_str2[]{"Hello world!"};
	cout << char_str2 << '\n';
	cout << char_str2[4] << '\n';*/

	// ��������� ���������� string
	/*std::string str; // �������� ��������� ���������� ���� string
	cout << str; // ������ ������
	str = "Hello world!";
	cout << str << '\n'; // Hello world!

	str += " Bye world!";
	cout << "---------------\n";
	cout << str + " WOW!" << '\n';*/

	// ���� ������ 
	/*string name;
	cout << "������� ���: ";
	// cin >> name; // ���� �� ���������� �����������
	getline(cin, name); // ���� �� ����� ������
	cout << "������, " << name << "!\n";

	cout << "������� �������: ";
	short age;
	cin >> age;
	cout << age << "? ���!\n";

	cin.ignore(); // ������� ������ input stream

	cout << "������� ���������: ";
	string pos;
	getline(cin, pos);
	cout << "������ ������ ���� " << pos << "...\n";

	cout << "����, ������ " << name[0] << ".\n";

	name = "\\Hello\n\"world\"\t!";
	cout << name << '\n';*/

	// ������ �����
	string str = "Hello world!";

	// ������ length � size. ���������� ����� ������
	/*cout << str.length() << '\n';
	cout << str.size() << '\n';*/
	// ����� insert. ������� ����������� ������ ������
	/*str.insert(3, "000");
	cout << str << '\n';*/
	// ����� replace. ������ ����� ������ ����� ����������
	/*str.replace(3, 5, "123");
	cout << str << '\n';*/
	// ����� find. ����� ������� ��������� ��������� � ������
	/*cout << str.find("o") << '\n';
	cout << str.find("lo") << '\n';
	cout << str.find("l", 5) << '\n';*/
	// ����� rfind. ����� ���������� ��������� ��������� � ������
	/*cout << str.rfind("o") << '\n';		// 7
	cout << str.rfind("wo") << '\n';	// 6
	cout << str.rfind("l", 5) << '\n';	// 3
	cout << str.rfind("ORAN") << '\n';	// �����*/
	// ����� substr. ���������� ���������, ������������ � ���������� �������
	/*cout << str.substr(3) << '\n';		// lo world!
	cout << str.substr(3, 5) << '\n';	// lo wo*/

	// ����� � ������
	/*cout << "������� �����: ";
	cin >> n;
	n++;
	str = to_string(n);
	cout << str + '\n';*/

	// ������ � �����
	/*cout << "������� �����: ";
	cin.ignore();
	getline(cin, str);
	int num = stoi(str);
	num++;
	cout << num << '\n';*/

	// ������ � ���������
	/*for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);

	cout << str << '\n'; // HELLO WORLD!

	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	cout << str << '\n'; // hello world!*/

	// ������ 1. ���������� ������
	/*cout << "������ 1.\n������� ������: ";
	getline(cin, str);
	cout << repeat_str(str, 5) << '\n';*/

	// ������ 3. ����
	cout << "������ 3.\n������� ���������: ";
	getline(cin, str);

	if (is_spam(str))
		cout << "��������� ����!\n";
	else
		cout << "����� �� ����������.\n";

	return 0;
}
// ������ 3
bool is_spam(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	string spams[3]{
		"100% free",
		"sales increase",
		"only today"
	};

	for (int i = 0; i < 3; i++)
		if (str.find(spams[i]) < str.length())
			return true;

	return false;
}



// ������ 1
string repeat_str(string str, int num) {
	string tmp;
	for (int i = 0; i < num; i++)
		tmp += str;
	return tmp;
}