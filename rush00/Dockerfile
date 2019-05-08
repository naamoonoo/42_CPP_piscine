FROM debian:stretch-slim

WORKDIR /usr/src/cpp_rush00

RUN apt-get update && apt-get install -y --no-install-recommends \
	clang \
	libncurses-dev \
	gdb \
	make

COPY src src
COPY Makefile .
RUN make && make install
CMD [ "rush" ]


