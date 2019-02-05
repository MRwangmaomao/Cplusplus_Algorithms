#include <iostream>
#include <string>

using std::string;
using std::cout;

int main() {
    std::cout << "Hello, World!" << std::endl;

    string s = "abcabcbb";

    string s_char;
    int i_length = 0;
    int flag = 0;

    for(auto c_string : s)
    {
        if(s_char.find(c_string) == string::npos)
        {
            s_char += c_string;
            i_length =  s_char.length()> i_length?s_char.length():i_length;
        }
        else
        {
            string s_char_tem = s_char;
            for(auto b_string : s_char_tem)
            {
                if(flag)
                {
                    s_char += b_string;
                }
                if(b_string == c_string)
                {
                    flag = 1;
                    s_char.clear();
                }


            }
            flag = 0;
            s_char += c_string;
        }
    }
    cout << i_length;

    return 0;
}