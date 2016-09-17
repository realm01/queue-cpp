CXX = g++
CXXFLAGS = -c

all: queue

test: test_queue

clean:
	rm -rf *.o
	rm -rf queue_example
	rm -rf queue_test
	rm -rf googletest

queue: google_test main.o queue_test.o
	$(CXX) main.o -o queue_example
	$(CXX) queue_test.o -pthread googletest/build/googlemock/gtest/libgtest.a -o queue_test
	

main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

queue_test.o: queue_test.cpp
	$(CXX) $(CXXFLAGS) -isystem googletest/googletest/include queue_test.cpp

google_test:
	git clone https://github.com/google/googletest.git
	mkdir googletest/build
	cd googletest/build && cmake .. && make

test_queue:
	./queue_test