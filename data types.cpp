#include <iostream> // 引入输入输出流库

int main() // 主函数，C++ 程序的执行从这里开始。
{
    /*
        使用标准输出流对象 std::cout 将字符串 "I love Pizza!" 打印到控制台。
        << 是插入运算符，用于将数据发送到输出流。
     */
    std::cout << "I love Pizza!" << std::endl; // endl:endline same as 换行符
    std::cout << "It's delicious!" << "\n";

    std::cout << "请输入单字符:";
    char input_char = std::cin.get(); // 从标准输入流获取一个字符，程序会在这里暂停直到你按 Enter 键
    std::cout << "您输入的字符为:";
    std::cout << input_char;

    return 0; // 程序成功执行并正常退出时，返回整数值 0。
}
