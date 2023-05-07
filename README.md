# Notepad-- C
A rudimentary "text editor" created entirely as a joke. Programmed in C.


This project was created to act as a rudimentary text editor in any command line/terminal capable of running C executables. The program should be able to be compiled with [GCC](https://gcc.gnu.org) without any other dependencies. **This has only been tested in GCC.**

## Requirements
To compile the notepad--.c program for use, you will need to download a compiler that supports the C programming language. 

For Linux users, I recommend GCC, which you can find [here](https://gcc.gnu.org).
For Windows users, I recommend MinGW, a lightweight version of GCC built for windows. You can find that [here](https://sourceforge.net/projects/mingw/).

## How to Compile
To compile Notepad--, place the notepad--.c file in a directory of your choosing and open a command line/terminal window. Running the following command should allow compile and build the executable file for the program:
```
gcc notepad--.c -o Notepad--
```

## How to Use Notepad--
The ease of running Notepad-- may depend on the operating system one is trying to open the executable in, but most will just be able to double click the executable created from compiling the program. Otherwise, open a terminal window in the same directory as the file and type the following command:
```
./Notepad--.exe
```
The program should now be opened.

Upon running the program successfully, the user will be greeted with an ASCII title screen and instructions following the title. Typing ```START``` (case sensitive) will allow the user to start creating/writing their file in the program.

Now, any text the user types will be committed to the file until the user types the sentinel value (exit statement) to stop writing the file's text. To stop writing text to a file, the user must type ```Notepad--, please exit this program. I am done typing my file now.```

Once this sentence has been typed, the user will be prompted to enter the name of the file they want to save to, followed by the file's extension (i.e. .py, .c, .txt, .csv, etc.).


## Credits
[GNU Compiler Collection](https://gcc.gnu.org) provided the software to compile the notepad--.c file for use on Linux.

[MinGW](https://sourceforge.net/projects/mingw/) provided the software to compile the notepad--.c file for use on Windows
