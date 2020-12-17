echo [1] Currently logged usersand his log name
echo [2] Your current shell
echo [3] Your home directory
echo [4] Your operating system type
echo [5] Your current path setting
echo [6] Your current working directory
echo [7] Show currently logged no of users
echo [8] About your Operating system and version release number kernel version
echo -n  "Enter your choice from [1-8]:"
read ch
case $ch in
	1) w ;;
	2) echo "hii";;
	3) ~ ;;
	4) lsb_release -d ;;
	5) $PATH ;;
	6) pwd ;;
	7)echo `who` ;;
	8) w ;;
esac


