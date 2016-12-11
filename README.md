### Bazel and Protobuf

Bazel skylark rules for building protocol buffers with +/- gRPC
support.  This repo shows how to
use [rules_protobuf](https://github.com/pubref/rules_protobuf) with
Bazel to build protocol buffers in the Google-style way.



### Development in Docker Containers

This example also shows how to do development with Bazel in a Docker
container:

1. Get the source code:


   ```
   git clone https://github.com/wangkuiyi/learn-bazel
   ```

1. Build a Docker image basing on ubuntu:16.04 and has Bazel installed:

   ```
   cd learn-bazel/docker
   docker build -t bazel .
   ```

1. Run this Docker image as a container and mount learn-bazel into it:

   ```
   cd .. # the learn-bazel directory
   docker run --rm -it -v $PWD:/learn-bazel bazel
   ```

1. Edit files using Emacs/Vim/etc on the host and run bazel in the container:

   ```
   cd /learn-bazel
   bazel build ...
   ```

1. Run the built example program in the container:

   ```
   $(bazel info bazel-bin)/main/hello-world
   ```



## Fully Statically Linked Binaries

This example also shows how to generated fully-staticlaly-linked binaries by setting

```
linkopts = ["-static", "-static-libgcc", "-static-libstdc++"],
```

in `cc_binary` rules.


After building, we can check the generated binary is fully statically linked:

```
# ldd $(bazel info bazel-bin)/main/hello-world
    not a dynamic executable
```
