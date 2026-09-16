///week02-1.cpp 練習 c++ striing字串
///File-Save As存檔成.cpp檔
#include <iostream>///上週教的
#include <string>///今天教的
///以前大一c語言 是用char name[100]; 宣告麻煩
///scanf("%s",name); //讀資料也很麻煩
int main()
{
    std::cout << "請輸入你的名字: ";
    std::string name;
    std::cin >> name;
    std::cout << name <<"你好,你會用字串了";
}
