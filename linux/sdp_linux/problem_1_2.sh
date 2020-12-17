if [ $1 -gt $2 -a $1 -gt $3 ]
then
	echo "First number is greater"
elif [ $2 -gt $3 -a $2 -gt $1 ]
then
	echo "Second number is greater"
else
	echo "Third number is greater"
fi

