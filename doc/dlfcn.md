/// dlopen
Creates the link with the first argument which needs to be the path to the library use RTLD_LAZY Flag by default on the 2nd argument

/// dlsym
linking the empty function pointer to func_name from a library if func_name is not within the library it will return NULL

/// dlerror
if the pointer is empty we return the cause of error with dlerror else return the name of the function called if dlerror returns NULL the error does not come from the lib dlfcn

/// dlclose
dlclose will close the link with the library.

/// how to craete a dynamic library!

  gcc -c -fPIC *.c  will generate .o objects -fPIC make the code position independent

  gcc -shared -o liball.so *.o to create the library

  nm -D liball.so will print the functions within the lib if some functions are missing you've made a mistake

  export LD_LIBRARY_PATH=.:[LD_LIBRARY_PATH] bracket need to contain the library path this command will link the library to the main.c

   gcc -L [link to library] main.c -l [lib name] -o [executable name]

  ldd [executable] to check if library has been properly included


