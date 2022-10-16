# hmarlog

shitty logging lib for c

## usage

### visual c++
```console
vsdevcmd
cl /c /O2 hmarlog.c
link /out:<program> <object files> hmarlog.obj
```
### gcc / clang
```console
gcc -c -o hmarlog.o 
gcc -o <program> <object files> hmarlog.o
```

## testing
### visual c++
```console
vsdevcmd
cl /c /O2 test.c
link /out:test.exe test.obj hmarlog.obj
```
### gcc / clang
```console
gcc -c -o hmarlog.o 
gcc -o test<.exe> test.o hmarlog.o

## license

GPL

yes
