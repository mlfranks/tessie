# tessie

Etymology: tessie sounds better than TC (box), for temperature cycling (box)


# hints for test0:
git clone git@github.com:ursl/tessie

(git clone https://github.com/ursl/tessie.git)

cd tessie/test0/rpc

make mini

cd ../

qmake -o Makefile test0.pro

make


# RPC communication now works from MAC and/or linux to raspberry pi
