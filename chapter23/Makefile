INC_DIR:=./
SRC_DIR:=./
SRCS:=$(wildcard *.cpp)
LIBS:=-lpthread
CXX:=g++
CXXFLAGS:=-Wall -g -std=c++11 $(addprefix -I, $(INC_DIR)) $(LIBS)

EXE:=./main
$(EXE):$(SR)
	$(CXX) -o $@ $(SRCS) $(CXXFLAGS)
clean:
	rm -rf $(EXE)
