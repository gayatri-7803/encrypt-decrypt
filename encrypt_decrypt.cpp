#include<iostream>
#include<string>
using namespace std;

string encrypt( string text,int s)
{
    string result="";
    for ( int i=0;i<text.length();i++)
    {
        if (isupper(text[i]))
        {
            result +=
            char (int(text[i]+s-65)%26+65);
        }
        else
        {
            result +=
            char (int(text[i]+s-97)%26+97);
        }
    }
    return result;
}
string decrypt(string result,int s)
{
    string result1="";
    for ( int i=0;i<result.length();i++)
    {
        if (isupper(result[i]))
        {
            result1 +=
            char (int(result[i]-s-65+26)%26+65);
        }
        else
        {
            result1 +=
            char (int(result[i]-s-97+26)%26+97);
        }
    }
    return result1;
}

int main()
{
    string text;
    cout<<"Enter a text: "<<endl;
    getline(cin,text);
    int s;
    cout<<"Enter a shift value :"<<endl;
    cin>>s;
    cout<<"The given text is :"<<text<<endl;
    cout<<"The shift value is :"<<s<<endl;
    string encrypted=encrypt(text,s);
    cout<<"The cipher text is :"<<encrypted<<endl;
    string result;
    cout<<"Plain text is :"<<decrypt(encrypted,s)<<endl;
    return 0;
}

