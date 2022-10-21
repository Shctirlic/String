// Персональный шаблон проекта C++
#include <iostream>
#include <string> // библиотека, позволяющая работать
// с классом string (со сроковыми переменными)
using namespace std;

string repeat_str(string str, int num);
bool is_spam(string str);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строковые массивы
	/*char char_str[4]{ 'H', 'i', '!', '\0' };

	for (int i = 0; i < 4; i++)
		cout << char_str[i];
	cout << '\n';

	cout << char_str << '\n';

	char char_str2[]{"Hello world!"};
	cout << char_str2 << '\n';
	cout << char_str2[4] << '\n';*/

	// Строковые переменные string
	/*std::string str; // создание строковой переменной типа string
	cout << str; // пустая строка
	str = "Hello world!";
	cout << str << '\n'; // Hello world!

	str += " Bye world!";
	cout << "---------------\n";
	cout << str + " WOW!" << '\n';*/

	// Ввод строки 
	/*string name;
	cout << "Введите имя: ";
	// cin >> name; // ввод до ближайшего разделителя
	getline(cin, name); // ввод до конца строки
	cout << "Привет, " << name << "!\n";

	cout << "Введите возраст: ";
	short age;
	cin >> age;
	cout << age << "? Вау!\n";

	cin.ignore(); // очистка потока input stream

	cout << "Введите должность: ";
	string pos;
	getline(cin, pos);
	cout << "Всегда мечтал быть " << pos << "...\n";

	cout << "Пока, мистер " << name[0] << ".\n";

	name = "\\Hello\n\"world\"\t!";
	cout << name << '\n';*/

	// Методы строк
	string str = "Hello world!";

	// Методы length и size. Возвращают длину строки
	/*cout << str.length() << '\n';
	cout << str.size() << '\n';*/
	// Метод insert. Вставка содержимого внутрь строки
	/*str.insert(3, "000");
	cout << str << '\n';*/
	// Метод replace. Замена части строки новым содержимым
	/*str.replace(3, 5, "123");
	cout << str << '\n';*/
	// Метод find. Поиск первого вхождения подстроки в строку
	/*cout << str.find("o") << '\n';
	cout << str.find("lo") << '\n';
	cout << str.find("l", 5) << '\n';*/
	// Метод rfind. Поиск последнего вхождения подстроки в строку
	/*cout << str.rfind("o") << '\n';		// 7
	cout << str.rfind("wo") << '\n';	// 6
	cout << str.rfind("l", 5) << '\n';	// 3
	cout << str.rfind("ORAN") << '\n';	// мусор*/
	// Метод substr. Возвращает подстроку, начинающуюся с переданной позиции
	/*cout << str.substr(3) << '\n';		// lo world!
	cout << str.substr(3, 5) << '\n';	// lo wo*/

	// Число в строку
	/*cout << "Введите число: ";
	cin >> n;
	n++;
	str = to_string(n);
	cout << str + '\n';*/

	// Строка в число
	/*cout << "Введите число: ";
	cin.ignore();
	getline(cin, str);
	int num = stoi(str);
	num++;
	cout << num << '\n';*/

	// Работа с регистром
	/*for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);

	cout << str << '\n'; // HELLO WORLD!

	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	cout << str << '\n'; // hello world!*/

	// Задача 1. Повторения строки
	/*cout << "Задача 1.\nВведите строку: ";
	getline(cin, str);
	cout << repeat_str(str, 5) << '\n';*/

	// Задача 3. Спам
	cout << "Задача 3.\nВведите сообщение: ";
	getline(cin, str);

	if (is_spam(str))
		cout << "Обнаружен спам!\n";
	else
		cout << "Спама не обнаружено.\n";

	return 0;
}
// Задача 3
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



// Задача 1
string repeat_str(string str, int num) {
	string tmp;
	for (int i = 0; i < num; i++)
		tmp += str;
	return tmp;
}