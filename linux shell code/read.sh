
#!/bin/sh
#echo 55 > /sys/class/gpio/export
echo 56 > /sys/class/gpio/export
echo 57 > /sys/class/gpio/export
echo 58 > /sys/class/gpio/export
echo 59 > /sys/class/gpio/export
echo 60 > /sys/class/gpio/export
echo 61 > /sys/class/gpio/export
echo 62 > /sys/class/gpio/export
echo 63 > /sys/class/gpio/export

echo in > /sys/class/gpio/gpio56/direction
echo in > /sys/class/gpio/gpio57/direction
echo in > /sys/class/gpio/gpio58/direction
echo in > /sys/class/gpio/gpio59/direction
echo in > /sys/class/gpio/gpio60/direction
echo in > /sys/class/gpio/gpio61/direction
echo in > /sys/class/gpio/gpio62/direction
echo in > /sys/class/gpio/gpio63/direction


data_8bit=(0 0 0 0 0 0 0 0)
while true
do
	data_8bit[0]=$(cat /sys/class/gpio/gpio56/value)
	data_8bit[1]=$(cat /sys/class/gpio/gpio57/value)
	data_8bit[2]=$(cat /sys/class/gpio/gpio58/value)
	data_8bit[3]=$(cat /sys/class/gpio/gpio59/value)
	data_8bit[4]=$(cat /sys/class/gpio/gpio60/value)
	data_8bit[5]=$(cat /sys/class/gpio/gpio61/value)
	data_8bit[6]=$(cat /sys/class/gpio/gpio62/value)
	data_8bit[7]=$(cat /sys/class/gpio/gpio63/value)
#	echo ${data_8bit[@]}
	let data=data_8bit[0]+data_8bit[1]*2+data_8bit[2]*4+data_8bit[3]*8+data_8bit[4]*16+data_8bit[5]*32+data_8bit[6]*64+data_8bit[7]*128

#	env | grep data
done
cat /sys/kernel/debug/gpio



