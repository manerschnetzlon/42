echo "#Architecture: $(uname -a)"
echo "#CPU physical: $(cat /proc/cpuinfo | grep "physical id" | wc -l)"
echo "#vCPU: $(cat /proc/cpuinfo | grep "processor" | wc -l)"
TOTAL_MEM=$(free -m | grep "Mem" | awk '{print $2}')
USED_MEM=$(free -m | grep "Mem" | awk '{print $3}')
PERC_MEM=$(free -m | grep "Mem" | awk '{printf "%.2f", ($3/$2*100)}')
echo "#Memory Usage: $USED_MEM/$TOTAL_MEM MB ($PERC_MEM%)"
#DISK_TOTAL=$(df -m | grep '^/dev' | awk '{total += $2} END {print total}')
#DISK_USED=$(df -m | grep '^/dev' | awk '{used += $3} END {print used}')
#echo "total = $DISK_TOTAL"
#echo "used = $DISK_USED"
echo "#Disk Usage: $(df -m | grep '^/dev' | awk '{total += $2} {used += $3} END {printf "%i/%iMB (%.2f%%)", used, total, used/total*100}')"
echo "#CPU load: $(mpstat | grep 'all' | awk '{print (100-$13)}')%"
echo "#Last boot: $(who -b | awk '{print $3 " " $4}' )"
if [ $(lsblk | grep 'lvm' | wc -l) == 0 ]; then echo "#LVM use: no"; else echo "#LVM use: yes"; fi
echo "#Connexions TCP: $(netstat | grep 'ESTABLISHED' | wc -l) ESTABLISHED"
echo "#User log: $(who | wc -l)"
echo "#Network: $(hostname -I)"
echo "#Sudo: $(journalctl | grep 'sudo' | grep 'COMMAND' | wc -l) cmd"
