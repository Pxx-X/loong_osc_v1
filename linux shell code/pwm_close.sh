#!/bin/sh

echo 0 > /sys/class/pwm/pwmchip1/pwm0/enable

cat /sys/kernel/debug/pwm

