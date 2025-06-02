Farrokhi Engine: Built by Kynan Farro also known as OpenGLFan0 using the Khronos and lunarg Vulkan documentation as well as vulkan tutorial and glfw documentation for base code:
https://docs.vulkan.org/spec/latest/index.html
https://vulkan.lunarg.com/doc/view/latest/windows/apispec.html
https://vulkan.lunarg.com/doc/view/latest/windows/apispec.html
https://www.glfw.org/documentation

Linux: 1. GCC/Clang installed on system. 2.GLFW3 and Vulkan Libraries installed dynamically using your distro package manager. 3. Any Text or code editior. 4. Vec3.h and Vec3.C Library installed from git repo and linked using its custom path on main.c. https://github.com/Mashpoe/c-vector

MacOS: 1. GCC/Clang installed on system using brew. 2.GLFW3 and Vulkan Libraries installed dynamically using brew. 3. Any Text or code editior. 4. Vec3.h and Vec3.C Library installed from git repo and linked using its custom path on main.c. https://github.com/Mashpoe/c-vector 5. Brew installed: https://brew.sh/ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

GCC/Clang terminal compile command: gcc main.c -o main -lglfw -lvulkan
