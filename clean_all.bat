


rm -rf bin

cd projects

rm -rf include
rm -rf lib






pushd spdlog
rm -rf bin
rm -rf build
rm -rf lib
call clean_all.bat
popd

echo "clean spdlog done ==========================================================================="


pushd uniqsbattle
rm -rf bin
rm -rf build
rm -rf lib
call clean_all.bat
popd

echo "clean uniqsbattle done ==========================================================================="

