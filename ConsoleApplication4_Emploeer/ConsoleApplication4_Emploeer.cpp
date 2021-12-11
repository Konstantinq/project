// ConsoleApplication4_Emploeer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
const int LEN = 80;

class employee
{

private:
    char name[LEN];
    unsigned long number;
public:
    void getdata() {
        cout << "\n Введите имя сотрудника: ";
        cin >> name;
        cout << "\n Введите табельный номер: ";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\nФамилия: " << name;
        cout << "\nТабельный номер: " << number;
    }

};
class manager : public employee {
private:
    char title[LEN];//должность
    unsigned long salary;
public:
    void getdata() {
    employee::getdata();
        cout << "\n Введите должность: ";
        cin >> title;
        cout << "\n Введите зарплату: ";
        cin >> salary;

    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n Должность: " << title;
        cout << "\n Оклад: " << salary;
    }
};
class scientist : employee {
private:
    int publication;
public:
    void getpubl() {
    employee::getdata();
        cout << "\n Введите количество публикаций: ";
        cin >> publication;
    }
    void putdata() {
    employee:: getdata();
        cout << "\n Количество публикаций: "<<publication;
    }

};
class worker : public employee {

};

int main()
{
    setlocale(LC_ALL, "russian");
   
    worker w1;
    w1.getdata();

    w1.putdata();
    manager m1, m2;

    cout <<"Введите информацию о первом менеджере: \n";
    m1.getdata();

    m1.putdata();
    system("pause");

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
