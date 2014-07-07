# IDE setup steps

1. Install JRE8 x64
2. Install Netbeans 8 C++
3. Install Cygwin (gcc-core, gcc-g++, gdb, make)
4. Install cppunit (download from site 1.12.1, unzip, ./configure, make, make install)
5. Start Netbeans, create project
6. Go to project properties and add /usr/local/include/cppunit for C++ compiler and /usr/local/lib/libcppunit.a to Linker
7. Build to test
