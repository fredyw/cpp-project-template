FROM ubuntu

RUN apt update && apt install -y \
  build-essential \
  cmake \
  git

RUN groupadd --gid 1000 remotedev && \
  useradd --uid 1000 --gid 1000 -m -s /bin/bash remotedev