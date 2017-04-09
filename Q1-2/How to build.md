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
