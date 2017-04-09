# Principles of Programming Languages Assignment

## Object Oriented Programming Division  
### Faheem Hassan Zunjani - IIT2015113

<span><img src="https://img.shields.io/badge/language-c%2B%2B-brightgreen.svg"/></span>
<span><img src="https://img.shields.io/badge/completion-58.33%25-yellow.svg"/></span>
<span><img src="https://img.shields.io/badge/xcode-8.1-blue.svg"/></span>
<span><img src="https://img.shields.io/badge/documentation-Doxygen-red.svg"/></span>

### Contents
* [Build details](#build-details)
* [Deployment and Testing](#deployment-and-testing)
* [Documentation](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q1-2/docs/)
* [Class Diagrams](#class-diagrams)
* [Tools Used](#tools-used)  

---
#### Build Details
Developed and Tested on:  

| *OS* | macOS Sierra |
| --- | --- |
| *Distribution* | - |
| *Version* | 10.12.3 |
| *g++ Version* | g++ linked to clang by Xcode |  
| *Xcode Version* | 8.1 (8B62) |  
| *Apple LLVM Version* | 8.0.0 (clang-800.0.42.1) |
| *Documentation Generator* | Doxygen | 

#### Deployment and Testing
Clone this repository:
```
$ git clone https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani
```

Change to repository's directory:
```
$ cd ppl-assignment-faheemzunjani
```

To run and test Q1:
```
$ cd Q1-2/
$ g++ q1.cpp ./library/*.cpp -o q1.out
$ ./q1.out
```

To run and test Q2:
```
$ cd Q1-2/
$ g++ q2.cpp ./library/*.cpp -o q2.out
$ ./q2.out
```

To run and test Q3:
```
$ cd Q3
$ g++ q3.cpp ./library/*.cpp -o q3.out
$ ./q3.out
```

To run and test Q4:
```
$ cd Q4
$ g++ q4.cpp ./library/*.cpp -o q4.out
$ ./q4.out
```

To run and test Q5:
```
$ cd Q5
$ g++ q5.cpp ./library/*.cpp -o q5.out
$ ./q5.out
```

To run and test Q6:
```
$ cd Q6
$ g++ q6.cpp ./library/*.cpp -o q6.out
$ ./q6.out
```
Randomly generated gift data files have been included in data/ as essential_gifts.dat, luxury_gifts.dat and utility_gifts.dat for each kind of gift.  

To randomly generate gift data files again for any question:
```
$ cd test/
$ g++ gifts_generator.cpp -o gifts_generator.out
$ ./gifts_generator.out

```
The randomly generated data files are stored in data/.  

To view commitments.log file:
```
$ cd logs/
$ cat commitments.log
```

To view gifting.log file:
```
$ cd logs/
$ cat gifting.log
```

#### Documentation
Documentation for each question is available deployed on gh-pages is available here:   
- [Q1-2](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q1-2/docs/)
- [Q3](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q3/docs/)
- [Q4](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q4/docs/)
- [Q5](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q5/docs/)
- [Q6](https://ppl-iiita.github.io/ppl-assignment-faheemzunjani/Q6/docs/)

To manually access documentation offline, all the HTML files of the documentation have been included in docs/ directory. Open docs/index.html in any browser to view the docs.

#### Class Diagrams
Class Diagrams are available here:   
- [Q1-2](https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani/blob/master/Q1-2/Class%20Diagram.pdf)
- [Q3](https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani/blob/master/Q3/Class%20Diagram.pdf)
- [Q4](https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani/blob/master/Q4/Class%20Diagram.pdf)
- [Q5](https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani/blob/master/Q5/Class%20Diagram.pdf)
- [Q6](https://github.com/PPL-IIITA/ppl-assignment-faheemzunjani/blob/master/Q6/Class%20Diagram.pdf)

#### Tools Used
Automatic documentation generation: Doxygen  
Class diagram generation: Visual Paradigm for UML (trial version)
