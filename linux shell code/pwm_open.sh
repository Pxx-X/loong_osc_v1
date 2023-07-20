#!/bin/sh
echo 0 > /sys/class/pwm/pwmchip1/export
echo 0 > /sys/class/pwm/pwmchip1/pwm0/enable
echo 1000 > /sys/class/pwm/pwmchip1/pwm0/period
echo 500 > /sys/class/pwm/pwmchip1/pwm0/duty_cycle
echo 1 > /sys/class/pwm/pwmchip1/pwm0/enable
cat /sys/kernel/debug/pwm

