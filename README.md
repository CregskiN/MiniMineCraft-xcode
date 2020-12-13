# MiniMineCraft - xcode

本项目来源于[wishForget](https://github.com/wishForget)开发的[MiniMineCraft](https://github.com/wishForget/MiniMineCraft)，此处为Xcode版本（已获原作者授权）



## 1. 使用开源库

| 库名      | 功能                                     | github 链接                             |
| --------- | ---------------------------------------- | --------------------------------------- |
| glew      | 识别openGL版本并提供gl、glu、glext等函数 | https://github.com/nigels-com/glew      |
| glad      | 管理OpenGL函数指针                       | https://github.com/Dav1dde/glad         |
| glfw3     | 提供跨平台窗口                           | https://github.com/glfw/glfw            |
| glm       | 创建矩阵向量及进行矩阵运算               | https://github.com/Groovounet/glm       |
| assimp    | 模型加载                                 | https://github.com/assimp/assimp        |
| stb_image | 读取纹理/贴图资源                        | https://github.com/servo/rust-stb-image |
| Craft     | 提供方块贴图资源                         | https://github.com/fogleman/Craft       |
| noise     | 提供噪声函数                             | https://github.com/caseman/noise        |





## 2. 项目启动需要的文件

+ 动态库文件，见文件夹 dylibs

  ```shell
   cregskin@wuhaodeMacBook-Pro  ~/code/c/_minecraft   master ●✚  la -l ./dylibs
  total 28328
  -r--r--r--  1 cregskin  staff    84K 11 21 10:10 libBullet3Dynamics.2.89.dylib
  -r--r--r--  1 cregskin  staff   102K 12 21  2019 libBullet3Dynamics.a
  -r--r--r--  1 cregskin  staff   551K 11 21 10:10 libBulletDynamics.2.89.dylib
  -r--r--r--  1 cregskin  staff   885K 12 21  2019 libBulletDynamics.a
  -r--r--r--  1 cregskin  staff   448K  9 15 23:00 libGLEW.2.1.0.dylib
  -rw-r--r--  1 cregskin  staff   105K 11 21 10:10 libLinearMath.2.89.dylib
  -r--r--r--  1 cregskin  staff   123K 12 21  2019 libLinearMath.a
  -r--r--r--  1 cregskin  staff    11M 11 21 02:55 libassimp.5.0.0.dylib
  -r--r--r--  1 cregskin  staff   249K  9 15 22:38 libglfw.3.3.dylib
  ```

  

+ 库头文件，见文件夹 headerfiles

  ```shell
   cregskin@wuhaodeMacBook-Pro  ~/code/c/_minecraft   master ●✚  ls -la ./headerfiles
  total 24
  drwxr-xr-x  16 cregskin  staff    512 12 13 08:54 .
  drwxr-xr-x  10 cregskin  staff    320 12 13 09:01 ..
  -rw-r--r--@  1 cregskin  staff  10244 12 13 08:54 .DS_Store
  drwxr-xr-x   6 cregskin  staff    192  7  5 10:29 Bullet3Collision
  drwxr-xr-x  26 cregskin  staff    832  7  5 10:29 Bullet3Common
  drwxr-xr-x   8 cregskin  staff    256  7  5 10:29 Bullet3Dynamics
  drwxr-xr-x  10 cregskin  staff    320  7  5 10:29 Bullet3Geometry
  drwxr-xr-x  10 cregskin  staff    320  7  5 10:29 Bullet3OpenCL
  drwxr-xr-x   3 cregskin  staff     96  7  5 10:29 Bullet3Serialize
  drwxr-xr-x   9 cregskin  staff    288  7  5 10:29 BulletCollision
  drwxr-xr-x  10 cregskin  staff    320  7  5 10:29 BulletDynamics
  drwxr-xr-x  13 cregskin  staff    416  7  5 10:29 BulletInverseDynamics
  drwxr-xr-x  49 cregskin  staff   1568  7  5 10:29 BulletSoftBody
  drwxr-xr-x   4 cregskin  staff    128  7  5 10:29 clew
  drwxr-xr-x   3 cregskin  staff     96  9 15 23:44 glad
  drwxr-xr-x  30 cregskin  staff    960 11 16 21:10 glm
  ```





## 3. 全局参数设置

全局参数位于WorldInfo.h&WorldInfo.cpp中，会影响运行性能的参数如下：

| 参数名            | 说明           | 备注                                                         |
| ----------------- | -------------- | ------------------------------------------------------------ |
| renderChunkRadius | 渲染半径       | 设置的越大可见范围越广，但可能会造成卡顿。默认为2，建议设置为1 |
| useLight          | 是否开启光照明 | 默认开启                                                     |
| useFog            | 是否开启雾效   | 默认开启                                                     |
| rayTestStepNum    | 射线检测步数   | 和rayTestStep共同决定射线检测的精度和距离                    |
| rayTestStep       | 射线检测步长   | 同rayTestStepNum                                             |
| waterLevel        | 水平面         |                                                              |







## 致谢

[wishForget](https://github.com/wishForget)

