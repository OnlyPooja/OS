f=$(factorial $f)
f=$((f*product))
echo $f
fi

echo "Enter the number:"   
read num

# defining a special case for 0! = 1
if((num == 0)); then   
echo 1
else
#calling the function
factorial $num
fi