ulimit -c unlimited
g++ --std=c++2a -g main.cpp -o main.out
if [ $? == 0 ]
then
    echo "Compilation succeeded."
    ./main.out
    if [ $? != 0 ]
    then
        gdb --quiet --batch ./main.out ./core
    fi
fi
