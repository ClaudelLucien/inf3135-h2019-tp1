CP= $(shell cat cp.txt)

all:tp1.c
	gcc tp1.c -Wall -pedantic -std=c99 -o tp1  

	

test:
	./tp1

test1:
	
	./tp1 -c $(CP) -i data.txt -o sortie	

clean:
	
	rm data.zip
	rm code.txt
	rm resultat.txt
data:
	wget  https://www.github.com/guyfrancoeur/INF3135_H2019/raw/master/tp1/data.zip
	unzip data
	mkdir data
	mv data.txt ./data

resultat:
	./tp1 -c CLAL12049707 -i data.txt -o resultat.txt
	git add resultat.txt
	git commit
	git push
