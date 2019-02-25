if [[ $# -lt 2 ]]; then
  echo "Usage: ${0} arch builder_os"
  exit 1
fi
arch=$1
builder_os=$2

if [[ ${builder_os} == "windows" ]]; then
  source win.sh
else
  source linux.sh
fi

set -x
install_prefix=../../../outlib/numberGenerator/${arch}

rm -rf build && mkdir build && cd build
${cmake} .. -DCMAKE_MAKE_PROGRAM=${make_program} -DCMAKE_TOOLCHAIN_FILE=${toolchain} -DANDROID_NDK=${android_ndk} -DCMAKE_BUILD_TYPE=${build_type} -DANDROID_ABI=${arch} -DCMAKE_GENERATOR=${gernerator} -DCMAKE_INSTALL_PREFIX="${install_prefix}"

${make_program} && ${make_program} install && cd .. && rm -rf build
