while :
do
	clear
	echo "My main menu"
	echo [1] Todays Date
	echo [2] directory contents
	echo -n "Enter your choise"
	read ch
case $ch in
	1) echo "Todays date `date`,
		press...";read;;
	2) echo "directory contents are `ls`,
		press...";read;;
	3) exit 0;;
	*) echo "sorry,select"
