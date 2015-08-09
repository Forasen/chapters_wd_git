OBJS := main.o func.o
EXE := main.exe
CXX := g++
main.o : main.cpp
	$(CXX) -o $@ $^
func.o : func.cpp
	$(CXX) -o $@ $^
.PHONY : rebuild clean
rebuild : clean $(EXE)
clean:
	RM $(OBJS) $(EXE)
