# C++ Excel Handler

A C++ version of a part of a wider project dealing with big data - using C++ to read and fiter Excel files to improve speed and efficiency (alhtough, on balance sacrificing usability and readability compared to a language like Python, which is optimal in most cases like this, outside of domains like game development, robotics etc). 

In my project I am accessing a directory of many excel files, sorting them from oldest to newest, excluding a few files in the directory based on their names, and then pulling all their data and concatenating it to perform various calculations and manipulations.

## Dependencies (If you dont already have python ready and good to go)

- C++17 or later
- [Python 3.x](https://www.python.org/downloads/)
- [matplotlib](https://matplotlib.org/)
- [matplotlib-cpp](https://github.com/lava/matplotlib-cpp)
- [pandas](https://pandas.pydata.org/)
- [openpyxl](https://openpyxl.readthedocs.io/en/stable/)
- [xlrd](https://xlrd.readthedocs.io/en/latest/)

## Setup (If you dont already have python ready and good to go)

1. Install Python 3.x from the [official website](https://www.python.org/downloads/).

2. Add Python to your `PATH` environment variable. Check by typing `python` in the Command Prompt. If you get a Python REPL, it is set up correctly.

3. Install the required Python packages:
    
    pip install matplotlib pandas openpyxl xlrd


4. Download the `matplotlib-cpp` library:

    git clone https://github.com/lava/matplotlib-cpp.git


5. Copy the `matplotlibcpp.h` header file from the `matplotlib-cpp` repository into your project directory.

6. Update the placeholders in `main.cpp` with the appropriate information, such as path names and column names.

## Building and Running the Project

1. Open the project folder in Visual Studio Code, add your specific paths, columns names, and preferred manipulation into the main.cpp code - mine is a starting point.

2. Open the integrated terminal in Visual Studio Code by pressing `Ctrl + ` (backtick) or selecting `Terminal > New Terminal` from the top menu.

3. In the terminal, navigate to the directory where your source file is located.

4. Compile your code using the `g++` compiler with the specified arguments:

    g++ main.cpp -o output.exe -Ipath/to/python/include -Lpath/to/python/libs -lpythonXY


    Replace the paths to the Python include and libs directories with the correct ones for your Python installation, and replace `XY` with your Python version.

5. Run the compiled executable:

    ./output.exe


## Acknowledgments

- [matplotlib-cpp](https://github.com/lava/matplotlib-cpp) by Lava for providing a C++ interface to the matplotlib library.






