# idlerun
Wait for run until cpu is idle

# Build
```
> g++ idlerun.cpp -o idelrun
```

# Run
```
> idlerun [threshold] [program to run] [args]
```

- [threshold]: wait untill cpu load average is low than this value.
- [program to run]: if cpu load average is low than threshold, this program will be launched.
- [args]: Args that is passed to the launching program.

```ex
> ./idlerun `grep processor /proc/cpuinfo | wc -l` make_teacher some_params
```
