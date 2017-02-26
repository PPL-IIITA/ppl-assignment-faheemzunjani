# Principles of Programming Languages
## Object Oriented Programming Division
## Assignment

#### Contents
* <a href="#build-details"> Build details </a>
* <a href="#deployment"> Deployment & Testing </a>
* <a href="#documentation"> Documentation </a>  

#### <span id="build-details"> Build Details </span>:
Developed and Tested on:
* OS: macOS Sierra
* Distribution: -
* Version: 10.12.3
* g++ Version: g++ linked to clang by XCode
* Apple LLVM Version: 8.0.0 (clang-800.0.42.1)

#### <span id="build-details"> Deployment & Testing </span>:
Clone this repository:
```
$ git clone https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani
```

Change to repository's directory:
```
$ cd ppl-assignment-faheemzunjani
```

For Q1 and Q2:
```
$ cd Q1-2/
```

To run and test Q1:
```
$ g++ q1.cpp ./library/*.cpp -o q1.out
$ ./q1.out
```

To run and test Q2:
```
$ g++ q2.cpp ./library/*.cpp -o q2.out
$ ./q2.out
```

Randomly generated gift data files have been included in data/ as essential_gifts.dat, luxury_gifts.dat and utility_gifts.dat for each kind of gift.  

To randomly generate gift data files again:
```
$ cd test/
$ g++ gifts_generator.cpp -o gifts_generator.out
$ ./gifts_generator.out

```
The randomly generated data files are stored in data/.
