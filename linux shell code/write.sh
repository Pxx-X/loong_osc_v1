#!/bin/sh
#echo 55 > /sys/class/gpio/export
# s0 s1 s2 s3 en0 en1 en2 en3
echo 40 > /sys/class/gpio/export
echo 41 > /sys/class/gpio/export
echo 44 > /sys/class/gpio/export
echo 45 > /sys/class/gpio/export
echo 46 > /sys/class/gpio/export
echo 47 > /sys/class/gpio/export
echo 48 > /sys/class/gpio/export
echo 49 > /sys/class/gpio/export

echo out > /sys/class/gpio/gpio40/direction
echo out > /sys/class/gpio/gpio41/direction
echo out > /sys/class/gpio/gpio44/direction
echo out > /sys/class/gpio/gpio45/direction
echo out > /sys/class/gpio/gpio46/direction
echo out > /sys/class/gpio/gpio47/direction
echo out > /sys/class/gpio/gpio48/direction
echo out > /sys/class/gpio/gpio49/direction

echo 1 > /sys/class/gpio/gpio40/value
echo 1 > /sys/class/gpio/gpio41/value
echo 1 > /sys/class/gpio/gpio44/value
echo 1 > /sys/class/gpio/gpio45/value
echo 1 > /sys/class/gpio/gpio46/value
echo 1 > /sys/class/gpio/gpio47/value
echo 1 > /sys/class/gpio/gpio48/value
echo 1 > /sys/class/gpio/gpio49/value

cat /sys/kernel/debug/gpio

