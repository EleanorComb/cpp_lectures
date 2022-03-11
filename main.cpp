#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
        // std::string fullname {};

        // std::cout << "Please enter your fullname (Firstname Lastname): ";
        // std::getline(std::cin, fullname);        // get name from user

        // Copy #1
        // std::string fullname_copy {};
        // fullname_copy = fullname;

        // Copy #2
        // std::string fullname_copy {fullname};

        // Copy #3
        // std::string fullname_copy(fullname.size(), '\0');
        // fullname.copy(fullname_copy.data(), fullname_copy.size());

        // Copy #4
        // std::string fullname_copy(fullname.size(), '\0');
        // std::copy(fullname.begin(), fullname.end(), fullname_copy.begin());
        // std::cout << "fullname: " << fullname << '\n';
        // std::cout << "fullname_copy: " << fullname_copy << '\n';

        // Copy #5
        // std::string fullname_copy {};
        // fullname_copy += fullname;
        // std::cout << "fullname: " << fullname << '\n';
        // std::cout << "fullname_copy: " << fullname_copy << '\n';

        // Task 1: Copy the date from the user input into another variable.
        // Task 2: Copy the date from the user input into the end of another variable. (Hint: The destination must already contain a string).

        // Example - Count the vowels in a given string.
        // aeiou
        // The Quick Brown Fox Jumps Over the Lazy Dog

        std::string_view str {"The Quick Brown Fox Jumps Over the Lazy Dog"};
        int              num_vowels {0};
        // Method #1
        // for (const auto c : str)
        // {
        //         const auto ch = std::tolower(c);
        //         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { num_vowels += 1; }
        // }

        // Method #2
        // for (const auto v : "AaEeIiOoUu")
        // {
        //         // take vowel and find all occurences of it in str.
        //         int i = 0;
        //         while (true)
        //         {
        //                 i = str.find(v, i);
        //                 if (i != std::string_view::npos)
        //                 {
        //                         num_vowels += 1;
        //                         i += 1;
        //                 }
        //                 else { break; }
        //         }
        // }

        // Method #3
        // std::string_view vowels {"AaEeIiOoUu"};
        // for (int i = 0;;)
        // {
        //         i = str.find_first_of(vowels, i);
        //         if (i != std::string_view::npos)
        //         {
        //                 num_vowels += 1;
        //                 i += 1;
        //         }
        //         else { break; }
        // }
        // std::cout << num_vowels << '\n';

        // Task: Count all consonants in string_view. (Hint: Consonants are the alphabet that's not a vowel. See `find_first_not_of`)

        // TODO(CA): Count everything that's not a vowel using find. Find the substrings and length of substring - vowels.
        int              num_consonents {0};
        // for (const auto v : "AaEeIiOoUu")
        // {
        //         // take vowel and find all occurences of it in str.
        //         int i = 0;
        //         while (true)
        //         {
        //                 i = str.find(v, i);
        //                 if (i != std::string_view::npos)
        //                 {
        //                         num_vowels += 1;
        //                         i += 1;
        //                 }
        //                 else { break; }
        //         }
        // }
        const auto       sz = std::count_if(str.begin(), str.end(), [](const auto c) { return std::isalpha(c); });
        num_consonents      = sz - num_vowels;

        // count all characters in string that are alphabet and subtract from the vowels.
        // const auto sz       = std::count_if(str.begin(), str.end(), [](const auto c) {
        //         const auto lch = std::tolower(c);
        //         const auto isv = lch == 'a' || lch == 'e' || lch == 'i' || lch == 'o' || lch == 'u';
        //         return isv;
        // });
        // num_consonents      = str.size() - sz;
        std::cout << num_consonents << '\n';
}