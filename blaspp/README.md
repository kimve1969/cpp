Berfor install
   su
   password
   apt update
   
1. Install python, git

   apt install python
   apt install git

2. Install CBLAS, OPENBLAS, LAPACK

   apt install libblas-dev
   apt install libopenblas-dev
   apt install liblapack-dev

3. Install BLAS++

   git clone https://github.com/icl-utk-edu/blaspp
   cd blaspp
   make
   make install

4. See directory /opt/slate
   /opt/slate/lib/libblaspp.so
   /opt/slate/pkgconfig/blaspp.pc
   /opt/slate/include

5. Run all tests from ./blaspp/test/

   python run_tests.py
   
   
   
   

