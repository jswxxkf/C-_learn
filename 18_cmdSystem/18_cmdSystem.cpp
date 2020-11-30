#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#define MAX 1000

struct Person
{
    string name;
    int gender;
    int age;
    string phone;
    string addr;
};

struct AddressBook
{
    Person personArray[MAX];
    int size;
};

void showMenu();
int isExist(AddressBook *addrBook, string name);
void addPerson(AddressBook *addrBook);
void showPerson(AddressBook *addrBook);
void deletePerson(AddressBook *addrBook);
void findPerson(AddressBook *addrBook);
void updatePerson(AddressBook *addrBook);
void clearPerson(AddressBook *addrBook);

int main(int argc, char const *argv[])
{
    // 创建通讯录结构体变量
    AddressBook addrBook;
    addrBook.size = 0;
    int select;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1: // 添加联系人
            addPerson(&addrBook);
            break;
        case 2: // 显示联系人
            showPerson(&addrBook);
            break;
        case 3: // 删除联系人
            deletePerson(&addrBook);
            break;
        case 4: // 查找联系人
            findPerson(&addrBook);
            break;
        case 5: // 修改联系人
            updatePerson(&addrBook);
            break;
        case 6: // 清空联系人
            clearPerson(&addrBook);
            break;
        case 0:
            cout << "欢迎下次使用！" << endl;
            system("pause");
            return 0;
        default:
            break;
        }
    }
    return 0;
}

void showMenu()
{
    cout << "*************************" << endl;
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "*************************" << endl;
}

void addPerson(AddressBook *addrBook)
{
    // 先判断通讯录是否已满
    if (addrBook->size == MAX)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名" << endl;
        cin >> name;
        addrBook->personArray[addrBook->size].name = name;
        cout << "请输入性别" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int gender;
        while (true)
        {
            cin >> gender;
            // 输入有误，则重新输入
            if (gender == 1 || gender == 2)
            {
                addrBook->personArray[addrBook->size].gender = gender;
                break;
            }
            cout << "输入有误，请重新输入！" << endl;
        }
        cout << "请输入年龄" << endl;
        int age;
        cin >> age;
        addrBook->personArray[addrBook->size].age = age;
        cout << "请输入电话" << endl;
        string phone;
        cin >> phone;
        addrBook->personArray[addrBook->size].phone = phone;
        cout << "请输入地址" << endl;
        string address;
        cin >> address;
        addrBook->personArray[addrBook->size].addr = address;
        // 更新通讯录人数
        addrBook->size++;
        cout << "添加成功" << endl;
        system("pause"); // 按任意键继续
        system("cls");   // 清屏操作
    }
}

void showPerson(AddressBook *addrBook)
{
    if (addrBook->size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < addrBook->size; i++)
        {
            cout << "姓名：" << addrBook->personArray[i].name << endl;
            cout << "年龄：" << addrBook->personArray[i].age << endl;
            cout << "性别：" << (addrBook->personArray[i].gender == 1 ? "男" : "女") << endl;
            cout << "电话：" << addrBook->personArray[i].phone << endl;
            cout << "住址：" << addrBook->personArray[i].addr << endl;
        }
        cout << "-----------" << endl;
    }
    system("pause");
    system("cls");
}

int isExist(AddressBook *addrBook, string name)
{
    for (int i = 0; i < addrBook->size; i++)
    {
        if (addrBook->personArray[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

void deletePerson(AddressBook *addrBook)
{
    cout << "请输入删除联系人的姓名：" << endl;
    string name;
    cin >> name;
    int ind = isExist(addrBook, name);
    if (ind != -1)
    {
        for (int i = ind; i < addrBook->size; i++)
        {
            // 数据前移
            addrBook->personArray[i] = addrBook->personArray[i + 1];
        }
        addrBook->size--;
        cout << "删除成功！" << endl;
    }
    else
    {
        cout << "查无此人！" << endl;
    }
    system("pause");
    system("cls");
}

void findPerson(AddressBook *addrBook)
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;
    int resInd = isExist(addrBook, name);
    if (resInd != -1)
    {
        cout << "姓名：" << addrBook->personArray[resInd].name << "\t";
        cout << "性别：" << addrBook->personArray[resInd].gender << "\t";
        cout << "年龄：" << addrBook->personArray[resInd].age << "\t";
        cout << "电话：" << addrBook->personArray[resInd].phone << "\t";
        cout << "住址：" << addrBook->personArray[resInd].addr << "\t";
    }
    else
    {
        cout << "查无此人！" << endl;
    }
    system("pause");
    system("cls");
}

void updatePerson(AddressBook *addrBook)
{
    cout << "请输入您要修改的联系人" << endl;
    string name;
    cin >> name;
    int resInd = isExist(addrBook, name);
    if (resInd != -1)
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        addrBook->personArray[resInd].name = name;
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int gender;
        while (true)
        {
            cin >> gender;
            // 输入有误，则重新输入
            if (gender == 1 || gender == 2)
            {
                addrBook->personArray[resInd].gender = gender;
                break;
            }
            cout << "输入有误，请重新输入！" << endl;
        }
        cout << "请输入年龄" << endl;
        int age;
        cin >> age;
        addrBook->personArray[resInd].age = age;
        cout << "请输入电话" << endl;
        string phone;
        cin >> phone;
        addrBook->personArray[resInd].phone = phone;
        cout << "请输入地址" << endl;
        string addr;
        cin >> addr;
        addrBook->personArray[resInd].addr = addr;
        cout << "修改成功！" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}

void clearPerson(AddressBook *addrBook)
{
    addrBook->size = 0;
    cout << "通讯录已清空" << endl;
    system("pause");
    system("cls");
}
