all: SaveTimeToFile.cpp

EXE=SaveTimeToFile

all: $(EXE)

%: %.c
	g++ -Wall -ggdb  -o $@ $<
clean:
	rm -rfv $(EXE)
