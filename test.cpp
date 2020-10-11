
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/common/common_headers.h>
#include <pcl/io/pcd_io.h>


int main() {
	pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);

	pcl::visualization::PCLVisualizer viewer("PCL ZED 3D Viewer"); 
	viewer.setBackgroundColor(0.12, 0.12, 0.12);
    pcl::visualization::PointCloudColorHandlerRGBField<pcl::PointXYZRGB> rgb(cloud);
    viewer.addPointCloud<pcl::PointXYZRGB>(cloud, rgb);
    viewer.setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 1.5);
    viewer.addCoordinateSystem(1.0);
    viewer.initCameraParameters();
    viewer.setCameraPosition(0,0,-800,0,-1,0);

if (pcl::io::loadPCDFile<pcl::PointXYZRGB> ("pcl/pcl10.pcd", *cloud) == -1) //* load the file
  {
    PCL_ERROR ("Couldn't read file test_pcd.pcd \n");
    return (-1);
  }
   
while(true){
viewer.updatePointCloud(cloud);
    viewer.spinOnce(10);}
return 0;

}
