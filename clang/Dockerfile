FROM ubuntu:16.04

RUN apt-get update
RUN apt-get install -y clang libclang-dev

ENV DEBIAN_FRONTEND noninteractive
RUN apt-get install -y curl software-properties-common 
RUN add-apt-repository ppa:webupd8team/java
RUN echo "oracle-java8-installer shared/accepted-oracle-license-v1-1 select true" | debconf-set-selections 
RUN echo "deb [arch=amd64] http://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list 
RUN curl -s https://bazel.build/bazel-release.pub.gpg | apt-key add - 
RUN apt-get update
RUN apt-get install -y oracle-java8-installer bazel
