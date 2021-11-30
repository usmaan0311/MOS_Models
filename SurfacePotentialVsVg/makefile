SRC=main
CXX=gcc -Wall -O3 -ggdb3 -o

all:
	$(CXX) ${SRC}.exe ${SRC}.c

vi:
	vim ${SRC}.c

run:
	./${SRC}.exe $(h) $(err) $(m) $(n)


plot:
	python PsiPlot.py

clean:
	$(RM) ~* *~ *.txt *.exe

