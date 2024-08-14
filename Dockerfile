FROM ubuntu:latest

WORKDIR /app

COPY . .

RUN apt-get update && apt-get install -y \
	build-essential \
	make \
	g++ \
	zsh \
	valgrind

CMD [ "zsh" ]