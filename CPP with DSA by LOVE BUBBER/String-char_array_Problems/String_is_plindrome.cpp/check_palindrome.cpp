#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool isPalindrome(const std::string& str) {
    std::string cleanStr;
    for(char c : str) {
        if(std::isalnum(c)) // Check if the character is alphanumeric
            cleanStr += std::tolower(c); // Convert to lowercase and append to cleanStr
    }
    
    std::string reversed = cleanStr;
    std::reverse(reversed.begin(), reversed.end());
    return cleanStr == reversed;
}

bool isNumber(const std::string& str) {
    for(char c : str) {
        if(!std::isdigit(c)) // Check if the character is not a digit
            return false;
    }
    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Case 1: Palindrome check by skipping special characters
    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome (skipping special characters)." << std::endl;
    } else {
        std::cout << str << " is not a palindrome (skipping special characters)." << std::endl;
    }

    // Case 2: Palindrome check considering alphanumeric characters only
    std::string alphanumericStr;
    for(char c : str) {
        if(std::isalnum(c)) // Check if the character is alphanumeric
            alphanumericStr += std::tolower(c); // Convert to lowercase and append to alphanumericStr
    }

    if (isPalindrome(alphanumericStr)) {
        std::cout << alphanumericStr << " is a palindrome (considering alphanumeric characters)." << std::endl;
    } else {
        std::cout << alphanumericStr << " is not a palindrome (considering alphanumeric characters)." << std::endl;
    }

    // Case 3: Check if the string is a number
    if (isNumber(str)) {
        std::cout << str << " is a number." << std::endl;
    } else {
        std::cout << str << " is not a number." << std::endl;
    }

    return 0;
}
