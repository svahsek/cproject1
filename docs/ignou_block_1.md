# 2.0 INTRODUCTION
As every natural language has a basic character set, computer languages also have a character set, rules to define words. Words are used to form statements. These in turn are used to write the programs.
Computer programs usually work with different types of data and need a way to store the values being used. These values can be numbers or characters. C
33
    
## An Introduction to C
language has two ways of storing number values—variables and constants—with many options for each. Constants and variables are the fundamental elements of each program. Simply speaking, a program is nothing else than defining them and manipulating them.
A variable is a data storage location that has a value that can change during program execution. In contrast, a constant has a fixed value that can’t change.
This unit is concerned with the basic elements used to construct simple C program statements. These elements include the C character set, identifiers and keywords, data types, constants, variables and arrays, declaration and naming conventions of variables.

## 2.1 OBJECTIVES
After going through this unit, you will be able to:
- define identifiers, data types and keywords in C;
- know name the identifiers as per the conventions;
- describe memory requirements for different types of variables;
- define constants, symbolic constants and their use in programs.write and
evaluate arithmetic expressions;
- express and evaluate relational expressions;
- write and evaluate logical expressions;
- write and solve compute complex expressions (containing arithmetic, relational
and logical operators), and
- use simple conditions using conditional operators.


## 2.2 C LANGUAGE CHARACTER SET
When you write a program, you express C source files as text lines containing characters from the character set. When a program executes in the target environment, it uses characters from the character set. These character sets are related, but need not have the same encoding or all the same members.
Every character set contains a distinct code value for each character in the basic C character set. A character set can also contain additional characters with other code values. The C language character set has alphabets, numbers, and special characters as shown below:
1. Alphabets including both lowercase and uppercase alphabets - A-Z and a-z.
2. Numbers 0-9
3. Special characters include:
;: {,‘“|
}> </\~_
[] !$?*+ =()-%#^@&

## 2.3 IDENTIFIERS AND KEYWORDS
Identifiers are the names given to various program elements such as constants, variables, function names and arrays etc. Every element in the program has its own distinct name but one cannot select any name unless it conforms to valid name in C language. Let us study first the rules to define names or identifiers.
### 2.3.1 RulesforFormingIdentifiers
Identifiers are defined according to the following rules:
1. It consists of letters and digits.
2. First character must be an alphabet or underscore.
3. Both upper and lower cases are allowed. Same text of different case is not
equivalent, for example: TEXT is not same as text.
4. Except the special character underscore (_), no other special symbols can
be used.

For example, some valid identifiers are shown below:
Y X123 _XI temp tax_rate

For example, some invalid identifiers are shown below:
123 - First character to be alphabet
“X.” order-no error flag
 not allowed
Hyphen not allowed Blank space not allowed