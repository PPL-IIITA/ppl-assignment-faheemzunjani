To run and test breakup_exception.cpp:
```
$ g++ breakup_exception.cpp ./library/*.cpp -o breakup_exception.out
$ ./breakup_exception.out
```

To run and test gifting_exception.cpp:
```
$ g++ gifting_exception.cpp ./library/*.cpp -o gifting_exception.out
$ ./gifting_exception.out
```

To run and test make_couples_exception.cpp:
```
$ g++ make_couples_exception.cpp ./library/*.cpp -o make_couples_exception.out
$ ./make_couples_exception.out
```

To run and test make_couples_q5_exception.cpp (Q5 variant of make_couples algorithm):
```
$ g++ make_couples_q5_exception.cpp ./library/*.cpp -o make_couples_q5_exception.out
$ ./make_couples_q5_exception.out
```

To run and test tdays_gifting_exception.cpp:
```
$ g++ tdays_gifting_exception.cpp ./library/*.cpp -o tdays_gifting_exception.out
$ ./tdays_gifting_exception.out
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
