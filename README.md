# FR_Spammer

FR_Spammer is a simple C++ program that generates a large number of text files with the prefix "FR_" followed by a number. This program was created by Filip Rokita and can be found on his website [filiprokita.com](https://www.filiprokita.com).

## How it works

The program uses a loop to generate a series of numbers between 0 and 999999. Each number is then converted to a string and saved as `tempname`. The program then creates a temporary file called `FR_Temp.txt` and writes a string that includes the `tempname` to the file. The program then reads the temporary file and saves the string as `ffn`. Finally, the program creates a new text file with the name `FR_` followed by the `tempname` and writes the string "filiprokita.com" to the file.

## Installation

To run the program, simply download the code and compile it using a C++ compiler. This program does not require any external libraries or dependencies.

## Usage

Once the program has been compiled, simply run the executable file. The program will automatically generate a large number of text files in the current directory. 
