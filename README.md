<p align="center"><img width=20% src="https://github.com/shardic1/bigint/blob/master/media/inf.jpg"></p>
<p align="center"><img width=40% src="https://github.com/shardic1/bigint/blob/master/media/bigint.png"></p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  ![Python](https://img.shields.io/badge/C++-14-red.svg)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-orange.svg)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)


## Basic Overview

**bigint** is a C++ library which uses string methods to allow usage of **integers of arbitrary length**. It uses optimised carry over methods and strong checks to ensure the calculations carried out are correct. 

# &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<del>10^18</del>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&#x27A1;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10^ꝏ

<br>

## How to install :question:

### Linux

• Clone the repository in your desired folder by
```bash
git clone https://github.com/shardic1/bigint.git
```
or download the .zip file

• Move ```bigint/Includes/bigint.h``` to ```usr/include/c++/<version>/```

### Windows

• Clone the repository in your desired folder by
```bash
git clone https://github.com/shardic1/bigint.git
```
or download the .zip file

• Adding user-defined header files to the compiler library is a bit harder in Windows, so check out **Usage**

<br>

## Inclusion :heavy_check_mark:

• You can simply use 
```c++
#include "bigint.h"
```
if the file is in your working directory, or
```c++
#include <bigint.h>
```
if it is moved to the compiler library.

<br>

## Usage :computer:

• **bigint** works the same way as the normal ```int```. To declare a bigint,
```c++
bigint a;
```
• A variety of constructors are built-in,
```c++
bigint a(123456789);
bigint b("987654321");
bigint c(a);
```
• Arithmetic operations work normally,
```c++
bigint a(60);
bigint b(9);
bigint c = a+b;
```

<br>

## Supported Functionality :heavy_plus_sign:

• As of now, **bigint** supports:
- Addition
  - [x] Positive numbers
  - [ ] Negative numbers
  - [ ] Mixed numbers
- Subtraction
  - [ ] Positive numbers
  - [ ] Negative numbers
  - [ ] Mixed numbers
- Multiplication
  - [ ] Positive numbers
  - [ ] Negative numbers
  - [ ] Mixed numbers
- Division
  - [ ] Positive numbers
  - [ ] Negative numbers
  - [ ] Mixed numbers
  
<br>

## Inspiration :sparkles:


> **If you think it's simple, then you have misunderstood the problem.**

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;- Bjarne Stroustrup
