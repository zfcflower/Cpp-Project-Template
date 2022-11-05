FROM ubuntu:latest

RUN apt-get update

RUN apt-get install -y clang

RUN apt-get install -y cmake

RUN apt-get install -y libgtest-dev && apt-get install -y libgmock-dev

ARG work_dir=/usr/src/cpp-sample

RUN mkdir -p $work_dir

WORKDIR $work_dir

COPY . .

RUN mkdir build

WORKDIR $work_dir/build

RUN cmake ..

RUN cmake --build .

WORKDIR $work_dir/build/bin

CMD ["./cpp-sample"]