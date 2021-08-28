make all
rm -rf /usr/local/include/smoltest
mkdir -p /usr/local/include/smoltest
cp include/* /usr/local/include/smoltest
rm -f /usr/local/lib/libsmoltest.a
mv libsmoltest.a /usr/local/lib
