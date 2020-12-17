if [ $# -eq 0 ]
then
	echo "$0:Error command argument missing!"
	echo "Usage: $0 start_line Uptoline filename"
	echo "Where start_line is line number fromm which you would like to print file"
	echo "uptoline is line number upto which would like to print"
	echo "For eg. $0 5 5 myfile"
	echo "Here from <file_name> total 5 lines printed starting from line no.5 to line no 10"
fi
if [ $# -eq 3 ]
then
	if [ -e $3 ];then
		sed -n $1,$2p $3
	else
		echo "$0: Error opening file $3"
	fi
else
	echo "Missing arguments! or Error in input"
fi
