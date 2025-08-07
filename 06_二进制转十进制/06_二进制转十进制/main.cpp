#include <iostream>
#include <string>
using namespace std;
// ���������ַ���ת��Ϊʮ������
unsigned int binaryToDecimal(const std::string& binary) {
    unsigned int decimal = 0;
    for (char digit : binary) {
        if (digit != '0' && digit != '1') {
            throw std::invalid_argument("Invalid binary digit: " + std::string(1, digit));
        }
        // ����һλ�����ϵ�ǰλ
        decimal = (decimal << 1) | (digit - '0');
    }
    return decimal;
}

int main() {
    std::string input;
    
    std::cin >> input;

    try {
        unsigned int result = binaryToDecimal(input);
        std::cout << result << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}