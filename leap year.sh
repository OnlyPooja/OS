echo "Enter year"
read n
r=$(expr $n % 4)

if [ $r -eq 0 ]; then
   echo "$n is a leap year"
else
   echo "$n is not a leap year"
fi