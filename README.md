# COMPILER-DESIGN-BASICS

*COMPANY*:  CODTECH IT SOLUTIONS

*NAME*: YASH JAIN

*INTERN_ID*: CT06DG3399

*DOMAIN*: C PROGRAMMING

*DURATON*: 6 WEEKS

*MENTOR*: NEELA SANTOSH

**DESCRIPTION:**
This project implements a simple lexical analyzer in C that performs the fundamental task of lexical analysis, which is the first phase of a compiler. The lexical analyzer reads an input source file character by character, groups them into meaningful sequences (lexemes), and classifies them into tokens such as keywords, operators, and identifiers.

By breaking down source code into tokens, the lexical analyzer provides an essential foundation for further phases of compilation, such as syntax analysis and semantic analysis. This implementation is beginner-friendly and demonstrates how compilers interpret source programs at the lowest level.

**TOOLS AND TECHNOLOGIES USED:**
-Programming Language: C
-Compiler: GCC (GNU Compiler Collection)
-Platform: Windows
-Text Editor/IDE: Visual Studio Code, Code::Blocks

**PROGRAM FLOW EXPLANATION:**
**1. Reading Input**
-The program takes an input source code file (input.txt) and reads it line by line.

**2. Lexeme Extraction**
-Each character is examined.
-Sequences of letters/digits are grouped to form identifiers or keywords.
-Special characters are checked against a list of operators.

**3. Keyword Recognition**
-Extracted words are compared with a predefined set of C keywords.
-If a match is found, it is classified as a Keyword.

**4. Identifier Recognition**
-If a word does not match a keyword and follows valid naming rules, it is marked as an Identifier.

**5. Operator Detection**
-Single-character (+, -, *, =) and multi-character (==, >=, <=) operators are matched and identified.

**6. Token Generation**
-Each recognized lexeme is stored and printed with its token type.

**7. Output**
-The final output displays a structured list of tokens, showing which parts of the input code are keywords, operators, or identifiers.

**PROJECT STURCTURE:**
COMPILER-DESIGN-BASICS/
│── lexical_analyzer.c     # Main program source code
│── input.txt              # Sample input program
│── output.txt             # Generated output with tokens
│── README.md              # Project documentation


**SUMMARY:**
The lexical analyzer processes an input text file and identifies:
Keywords – Reserved words in C (e.g., int, float, if, else).
Operators – Symbols representing operations (e.g., +, -, *, =, ==).
Identifiers – User-defined names for variables, functions, etc.

The program scans through the source file sequentially, applies simple matching rules, and categorizes each lexeme into its corresponding token type. A sample input file and output are provided to demonstrate how the lexical analyzer classifies code.
This project provides a clear and practical demonstration of lexical analysis by identifying keywords, operators, and identifiers from a source file. It helps bridge the gap between theory and practice in compiler design and serves as a foundation for more advanced compiler construction projects.

**OUTPUT:**
<img width="1117" height="760" alt="Image" src="https://github.com/user-attachments/assets/438baaf8-50f3-4241-93fd-e9f7881db967" />
