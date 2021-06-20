@echo off

cd projects


pushd spdlog
call build.bat
popd

echo "build spdlog done ==========================================================================="


cd uniqsbattle
call build.bat
cd ..

echo "build uniqsbattle done ==========================================================================="



rem pause