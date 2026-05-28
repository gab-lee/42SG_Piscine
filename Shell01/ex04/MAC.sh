ifconfig | grep -w "ether" | awk '{print $2}'

#| tr -d " " | cut -c 6-22
