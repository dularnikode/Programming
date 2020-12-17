echo "enter the number you want to check weather even or odd"
read num1
z=`expr $num1 % 2`
if [ $z -eq 0 ]
then
	echo "number is even"
else
	echo "number is odd"
fi




