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
    // ����ͨѶ¼�ṹ�����
    AddressBook addrBook;
    addrBook.size = 0;
    int select;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1: // �����ϵ��
            addPerson(&addrBook);
            break;
        case 2: // ��ʾ��ϵ��
            showPerson(&addrBook);
            break;
        case 3: // ɾ����ϵ��
            deletePerson(&addrBook);
            break;
        case 4: // ������ϵ��
            findPerson(&addrBook);
            break;
        case 5: // �޸���ϵ��
            updatePerson(&addrBook);
            break;
        case 6: // �����ϵ��
            clearPerson(&addrBook);
            break;
        case 0:
            cout << "��ӭ�´�ʹ�ã�" << endl;
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
    cout << "***** 1�������ϵ�� *****" << endl;
    cout << "***** 2����ʾ��ϵ�� *****" << endl;
    cout << "***** 3��ɾ����ϵ�� *****" << endl;
    cout << "***** 4��������ϵ�� *****" << endl;
    cout << "***** 5���޸���ϵ�� *****" << endl;
    cout << "***** 6�������ϵ�� *****" << endl;
    cout << "***** 0���˳�ͨѶ¼ *****" << endl;
    cout << "*************************" << endl;
}

void addPerson(AddressBook *addrBook)
{
    // ���ж�ͨѶ¼�Ƿ�����
    if (addrBook->size == MAX)
    {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
        return;
    }
    else
    {
        string name;
        cout << "����������" << endl;
        cin >> name;
        addrBook->personArray[addrBook->size].name = name;
        cout << "�������Ա�" << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int gender;
        while (true)
        {
            cin >> gender;
            // ������������������
            if (gender == 1 || gender == 2)
            {
                addrBook->personArray[addrBook->size].gender = gender;
                break;
            }
            cout << "�����������������룡" << endl;
        }
        cout << "����������" << endl;
        int age;
        cin >> age;
        addrBook->personArray[addrBook->size].age = age;
        cout << "������绰" << endl;
        string phone;
        cin >> phone;
        addrBook->personArray[addrBook->size].phone = phone;
        cout << "�������ַ" << endl;
        string address;
        cin >> address;
        addrBook->personArray[addrBook->size].addr = address;
        // ����ͨѶ¼����
        addrBook->size++;
        cout << "��ӳɹ�" << endl;
        system("pause"); // �����������
        system("cls");   // ��������
    }
}

void showPerson(AddressBook *addrBook)
{
    if (addrBook->size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < addrBook->size; i++)
        {
            cout << "������" << addrBook->personArray[i].name << endl;
            cout << "���䣺" << addrBook->personArray[i].age << endl;
            cout << "�Ա�" << (addrBook->personArray[i].gender == 1 ? "��" : "Ů") << endl;
            cout << "�绰��" << addrBook->personArray[i].phone << endl;
            cout << "סַ��" << addrBook->personArray[i].addr << endl;
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
    cout << "������ɾ����ϵ�˵�������" << endl;
    string name;
    cin >> name;
    int ind = isExist(addrBook, name);
    if (ind != -1)
    {
        for (int i = ind; i < addrBook->size; i++)
        {
            // ����ǰ��
            addrBook->personArray[i] = addrBook->personArray[i + 1];
        }
        addrBook->size--;
        cout << "ɾ���ɹ���" << endl;
    }
    else
    {
        cout << "���޴��ˣ�" << endl;
    }
    system("pause");
    system("cls");
}

void findPerson(AddressBook *addrBook)
{
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;
    int resInd = isExist(addrBook, name);
    if (resInd != -1)
    {
        cout << "������" << addrBook->personArray[resInd].name << "\t";
        cout << "�Ա�" << addrBook->personArray[resInd].gender << "\t";
        cout << "���䣺" << addrBook->personArray[resInd].age << "\t";
        cout << "�绰��" << addrBook->personArray[resInd].phone << "\t";
        cout << "סַ��" << addrBook->personArray[resInd].addr << "\t";
    }
    else
    {
        cout << "���޴��ˣ�" << endl;
    }
    system("pause");
    system("cls");
}

void updatePerson(AddressBook *addrBook)
{
    cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;
    int resInd = isExist(addrBook, name);
    if (resInd != -1)
    {
        string name;
        cout << "������������" << endl;
        cin >> name;
        addrBook->personArray[resInd].name = name;
        cout << "�������Ա�" << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int gender;
        while (true)
        {
            cin >> gender;
            // ������������������
            if (gender == 1 || gender == 2)
            {
                addrBook->personArray[resInd].gender = gender;
                break;
            }
            cout << "�����������������룡" << endl;
        }
        cout << "����������" << endl;
        int age;
        cin >> age;
        addrBook->personArray[resInd].age = age;
        cout << "������绰" << endl;
        string phone;
        cin >> phone;
        addrBook->personArray[resInd].phone = phone;
        cout << "�������ַ" << endl;
        string addr;
        cin >> addr;
        addrBook->personArray[resInd].addr = addr;
        cout << "�޸ĳɹ���" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}

void clearPerson(AddressBook *addrBook)
{
    addrBook->size = 0;
    cout << "ͨѶ¼�����" << endl;
    system("pause");
    system("cls");
}
