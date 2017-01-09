export DISPLAY=:0
xhost +local:
mkdir /mnt/arch
cp /etc/resolv.conf /mnt/arch/etc/resolv.conf
mount /dev/sdb1 /mnt/arch
for I in dev run proc sys
do
	mount --bind /${I} "/mnt/arch/${I}"
done
chroot /mnt/arch /bin/bash
