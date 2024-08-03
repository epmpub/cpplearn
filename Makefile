all: SaveTimeToFile.cpp iterator_demo.cpp

EXE=SaveTimeToFile iterator_demo

all: $(EXE)

%: %.c
	g++ -Wall -ggdb  -o $@ $<
clean:
	rm -rfv $(EXE)
