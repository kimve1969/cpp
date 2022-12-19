1:
	pkg-config blaspp --cflags --libs
	g++ asum.cpp -o asum -lstdc++ `pkg-config blaspp --cflags --libs`
	./asum
list:
	pkg-config --list-all | grep blas # return blas
