//
// Created by wpr on 19-1-14.
//

#include <iostream>
#include <string>

using namespace std;

void test2(void);
string test4(string& s1, string& s2);
string test5();

int main()
{
    test2();

    string s1 = "abc";
    string s2 = "abcd";
    cout << test4(s1, s2);

    cout << test5();

    return 0;
}

/**
 * 从一段程序输入中一次读入一整行 然后修改该程序使其读入一个词
 */
void test2()
{
    cout << "--------------------------" << endl;
    cout << "测试练习3.2" << endl;
    string s1;

    cin >> s1;

    cout << s1;
}

/**
 * 返回长度较大的字符串
 * @param s1
 * @param s2
 * @return
 */
string test4(string& s1, string& s2)
{
    cout << "--------------------------" << endl;
    cout << "测试练习3.4" << endl;
    if(s1.length() < s2.length())
        return s2;
    return s1;
}

/**
 * 从标准输入中读入多个字符串并将他们连接到一起，用空格把多个字符串隔开
 * @return
 */
string test5()
{
    cout << "--------------------------" << endl;
    cout << "测试练习3.5_1" << endl;
    string s1;
    string s2;
    while (cin >> s1)
    {
        if(s1 == "c")
            break;
        s2 += s1;
        s2 += " ";
    }
    return s2;
}