install_prefix=$(pwd)/../../outlib/myfunc
echo "will install to ${install_prefix}"
rm -rf build && mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX="${install_prefix}"
make && make install && cd .. && rm -rf build
