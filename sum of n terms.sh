echo "Enter number"
read n

s=0

while [ $n -ge 0 ]; do
    s=$((s + n))
    n=$((n - 1))
done

echo "Sum is $s"
