set -x
rm -rf ./cmake-build-release
mkdir cmake-build-release
cd ./cmake-build-release || exit
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j 4
./a_star -h
set +x