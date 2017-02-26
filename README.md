# Principles of Programming Languages Assignment
## Object Oriented Programming Division  
### Faheem Hassan Zunjani - IIT2015113
<img src="https://img.shields.io/badge/language-c%2B%2B-brightgreen.svg"/>
<img src="https://img.shields.io/badge/completion-20%25-yellow.svg"/>
<img src="https://img.shields.io/badge/xcode-8.1-blue.svg"/>  

### Contents
* [Build details](#build-details)
* [Deployment and Testing](#deployment-and-testing)
* [Documentation](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q1-2/docs/)
* [Class Diagrams](#class-diagrams)
* [Tools Used](#tools-used)  

---
#### Build Details
Developed and Tested on:
* OS: macOS Sierra
* Distribution: -
* Version: 10.12.3
* g++ Version: g++ linked to clang by Xcode
* Xcode Version: 8.1 (8B62)
* Apple LLVM Version: 8.0.0 (clang-800.0.42.1)

#### Deployment and Testing
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

#### Documentation
Documentation is available [here](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q1-2/docs/).  

To manually access documentation offline, all the HTML files of the documentation have been included in docs/ directory. Open docs/index.html in any browser to view the docs.

#### Class Diagrams
For Q1 and Q2, Class Diagrams are here: https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani/blob/master/Q1-2/Class%20Diagram.pdf

#### Tools Used
Automatic documentation generation: Doxygen  
Class diagram generation: Visual paradigm for UML (trial version)
