#include "std_lib_facilities.h"

int main()
{
cout << "Please enter your first name (followed by 'enter'):\n";
string first_name;
cin >> first_name;
cout << "Hello, " << first_name << "!\n";
cout << "How are you? I am fine. I miss you.\nI just started university at Debrecen and so far I like it\n";
cout << "Please enter a friend's name (followed by 'enter'):\n";
string friend_name;
cin >> friend_name;
cout << "Have you seen " << friend_name << " lately?\n";
char friend_sex = 0;
cout << "Please type 'm' if this friend is male, type 'f' if this friend is female\n";
cin >> friend_sex;
if(friend_sex=='m')
{
cout << "If you see " << friend_name << " please ask him to call me.\n";
}
else if(friend_sex=='f')
{
cout << "If you see " << friend_name << " please ask her to call me.\n";
}
int age = 0;
cout << "Please enter your age (followed by 'enter')\n";
cin >> age;
if(age>0 && age<110)
{
cout << "I hear you just had a birthday and you are " << age << " years old.\n";
}
else
{
simple_error("you're kidding!");
}
if(age<12)
{
cout << "Next year you will be " << age+1 << "\n";
}
else if(age==17)
{
cout << "Next year you will be able to vote\n";
}
else if(age>70)
{
cout << "I hope you are enjoying retirement.\n";
}
cout << "Yours sincerely\n\n Martin\n";
return 0;
}
