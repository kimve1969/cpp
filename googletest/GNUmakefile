3:
	g++ gtest3.cpp -o gtest3 -lgtest -lgmock -pthread
	./gtest3

2:
	g++ gtest2.cpp -o gtest2 -lgtest -lgmock -pthread
	./gtest2

1:
	g++ gtest1.cpp -o gtest1 -lgtest -lgmock -pthread
	./gtest1

install:
#Install Google Test https://habr.com/ru/post/667880
	apt install googletest
	apt install libgtest-dev libgmock-dev
	apt install libtbb-dev
	apt install cmake
	cd /usr/src/goooletest
	mkdir build
	cd build
	cmake ..
	make
# copy libgmock.a libgmock_main.a libgtest.a libgtest_main.a
	cp lib/* /usr/lib


