Farrokhi Engine: Built by Kynan Farro also known as OpenGLFan0 using the Khronos and lunarg Vulkan documentation as well as vulkan tutorial and glfw documentation for base code:
https://docs.vulkan.org/spec/latest/index.html
https://vulkan.lunarg.com/doc/view/latest/windows/apispec.html
https://vulkan.lunarg.com/doc/view/latest/windows/apispec.html
https://www.glfw.org/documentation

Linux: 1. GCC/Clang installed on system. 2.GLFW3 and Vulkan Libraries installed dynamically using your distro package manager. 3. Any Text or code editior. 4. Vec3.h and Vec3.C Library installed from git repo and linked using its custom path on main.c. 5. Vulkan SDK and validation layers installed dynamically on your distro package manager. https://github.com/Mashpoe/c-vector

MacOS: 1. GCC/Clang installed on system using brew. 2.GLFW3 and Vulkan Libraries installed dynamically using brew. 3. Any Text or code editior. 4. Vec3.h and Vec3.C Library installed from git repo and linked using its custom path on main.c. https://github.com/Mashpoe/c-vector 5. Brew installed: https://brew.sh/ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
6. Vulkan SDK installed via official lunar website for MacOS. https://sdk.lunarg.com/sdk/download/1.4.313.1/mac/vulkansdk-macos-1.4.313.1.zip

Note for MacOS and Windows the respective window and surface api have to be added and changed in the main.c code which is only built for wayland linux systems.

GCC/Clang terminal compile command: gcc main.c -o main -lglfw -lvulkan
 