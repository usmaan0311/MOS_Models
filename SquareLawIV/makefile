SRC=MOSFET_SQ_PLOT
CXX=gcc -Wall -O3 -ggdb3 -o


${SRC}.exe: ${SRC}.c
	$(CXX) ${SRC}.exe ${SRC}.c

vi:
	vim ${SRC}.c


run:
	./${SRC}.exe $(Vgs) $(Vds) $(n)

plot:
	python PlotIV.py

clean:
	$(RM) ~* *~ *.exe *.txt
