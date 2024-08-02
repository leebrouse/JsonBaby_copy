#include <iostream>
#include <variant>
#include <optional>
#include <charconv>
#include <string>

int main() {
    // 使用 std::variant 存储不同类型的值
    std::variant<int, float, std::string> data;
    data = 10; // 存储一个 int
    data = 5.5f; // 存储一个 float
    data = "Hello, World!"; // 存储一个 std::string

    // 访问 std::variant 中的值
    std::cout << "Stored string: " << std::get<std::string>(data) << std::endl;

    // 使用 std::optional 表示可选值
    std::optional<int> maybeInt;
    maybeInt = 42; // 设置值
    if (maybeInt) {
        std::cout << "The value is: " << maybeInt.value() << std::endl;
    } else {
        std::cout << "No value is set." << std::endl;
    }

    // 使用 std::charconv 进行字符串到数值的转换
    std::string numberStr = "12345";
    int number;
    auto result = std::from_chars(numberStr.data(), numberStr.data() + numberStr.size(), number);
    if (result.ec == std::errc()) {
        std::cout << "The number is: " << number << std::endl;
    } else {
        std::cout << "Conversion failed." << std::endl;
    }

    return 0;
}
