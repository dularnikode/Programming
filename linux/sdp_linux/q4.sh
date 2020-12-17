if [ $# = 3 ]
then
	case $2 in
		+) echo "Addition of $1 and $3 is `expr $*`"
			;;
		-) echo "Subtraction of $3 from $1 is `expr $*`"
			;;
		x) echo "Multiplication of $1 and $3 `expr $1 \* $3`"
			;;
		/) echo "Division of $1 by $3 is `expr $*`"
			;;
		*)echo "enter a valid argument"
	esac
else
	echo "write argument as: value1 operator value2"
	echo "operator can be +,-,x and /"
fi
