CFLAGS= -Wall -g


repo : repo.c

ex3 : ex3.c

ex7 : ex7.c


clean:
	rm -f repo ex3 ex7


all:	repo 	ex3 	ex7  
