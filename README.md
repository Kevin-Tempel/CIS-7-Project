# CIS-7-Project

# Vigenère Cipher Decryption - C++ Project

## Description
This project implements the Vigenère Cipher, a method of encrypting alphabetic text by using a series of different Caesar ciphers based on the letters of a keyword. Our program provides an interactive, command-line based interface for users to encrypt and decrypt text using the Vigenère cipher.

### Programming Approaches
The program uses a polyalphabetic substitution cipher where it applies a series of Caesar ciphers based on the letters of a keyword. The keyword is repeated in a circular manner until it matches the length of the plain text. The program includes three main functions:

1. `generate_key`: This function generates a key that matches the length of the input message. It repeats the keyword in a circular manner until it reaches the required length.

2. `generate_ciphertext`: This function generates the cipher text. For each character in the input text, it adds the corresponding character from the key (converted to a number 0-25) and uses modulo 26 to wrap around if necessary. It then converts this back to a character and adds it to the cipher text.

3. `generate_original_text`: This function regenerates the original text from the cipher text and the key. It subtracts the key from the cipher text (converted to numbers 0-25), adds 26 to handle negative numbers, uses modulo 26 to wrap around if necessary, and then converts this back to a character and adds it to the original text.

## Authors
- **Solo Semi-colon Slayer**

## Date Published
- June 2023

## Usage
To use this program, you'll need to have a C++ compiler installed on your computer. Here are the steps to run it:

1. Clone this repository to your local machine.
2. Navigate to the directory containing the `vigenere_cipher.cpp` file in your terminal.
3. Compile the program using your C++ compiler (for example, `g++ -o vigenere vigenere_cipher.cpp`).
4. Run the compiled program (for example, `./vigenere`).
5. When prompted, enter your message and keyword.
6. The program will display the encrypted cipher text and the decrypted original text.

Enjoy encrypting and decrypting with the Vigenère Cipher!
