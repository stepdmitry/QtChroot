export DISPLAY=:0
xhost +local:
mount /dev/sda1 /mnt/linux
for I in dev run proc sys
do
mount --bind /${I} "/mnt/linux${I}" 
 done
chroot /dev/sda1 /bin/bash
