# perception
Repository housing perception test images and dev environment setup script

Compile on Command Line: 

g++ test.cpp -I/usr/local/include/pcl-1.11 -I/usr/local/include/eigen3 -I/usr/include/boost -I/usr/include/vtk-6.3 -I/usr/include/flann -lpcl_common -lpcl_visualization -lpcl_io -lvtksys-6.3 -lvtkRenderingCore-6.3 -lvtkCommonCore-6.3 -lvtkCommonDataModel-6.3 -lvtkCommonMath-6.3 -lvtkFiltersCore-6.3 -lvtkCommonExecutionModel-6.3 -lvtkFiltersGeometry-6.3 -lboost_system -o test

Run on Command Line:

./test

