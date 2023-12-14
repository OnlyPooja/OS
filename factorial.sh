echo "enter the number"
read n
fact=1
while [ $n -ge 1 ]; do
     fact=$((fact * n))
     n=$((n -1))
done
echo $fact