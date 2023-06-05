#include<iostream>
#include<string>


// Function Declarations
std::string generate_key(std::string input_string, std::string keyword);
std::string generate_ciphertext(std::string input_string, std::string keyword);
std::string generate_original_text(std::string cipher_text, std::string keyword);


// Main function
int main() 
{ 
    // Program Variables
    std::string input_string, keyword;

    // Get Message From User.
    std::cout << "Enter the message: ";
    std::getline(std::cin, input_string);

    // Get Keyword From User.
    std::cout << "Enter the keyword: ";
    std::getline(std::cin, keyword);

    // Generate Keys
    std::string key         = generate_key(input_string, keyword); 
    std::string cipher_text = generate_ciphertext(input_string, key); 

    // Print the results
    std::cout << "Ciphertext: " << cipher_text << "\n"; 
    std::cout << "Original/Decrypted Text: " << generate_original_text(cipher_text, key) << "\n"; 

    return 0;
} 


// Function Definitions
std::string generate_key(std::string input_string, std::string keyword) 
{ 
    // Function Variables
    int input_length = input_string.size();

    // Loop until the length of the keyword matches the length of the input_string
    for (int index = 0; ; index++) 
    { 
        if (input_length == index) 
            index = 0; 
        if (keyword.size() == input_string.size()) 
            break; 
        keyword.push_back(keyword[index]); 
    } 
    return keyword; 
}

std::string generate_ciphertext(std::string input_string, std::string keyword) 
{ 
    // Function Variables
    std::string cipher_text; 

    for (int index = 0; index < input_string.size(); index++) 
    { 
        // Convert characters into range 0-25 and add the keyword value
        int character_value = (input_string[index] + keyword[index]) %26; 

        // Convert back into ASCII alphabets
        character_value += 'A'; 

        cipher_text.push_back(character_value); 
    } 
    return cipher_text; 
} 

std::string generate_original_text(std::string cipher_text, std::string keyword) 
{ 
    // Function Variables
    std::string original_text; 

    // Function Logic
    for (int index = 0 ; index < cipher_text.size(); index++) 
    { 
        // Convert characters into range 0-25 and subtract the keyword value
        int character_value = (cipher_text[index] - keyword[index] + 26) %26; 

        // Convert back into ASCII alphabets
        character_value += 'A'; 
        original_text.push_back(character_value); 
    } 
    return original_text; 
} 
