echo "Simple Calculator"
echo "Enter two numbers"
read num1
read num2
echo "1)Addition 2)Substraction 3)multiplication 4)division"
read choice
case $choice in
1)res=$(($num1+$num2))
 echo "The sum is $res";;
2)res=$(($num1-$num2))
 echo "The difference is $res";;
3)res=$(($num1*$num2))
 echo "The product is $res";;
4)res=$(($num1/$num2))
 echo "The result is $res";;
*)echo "Enter a valid choice";;
esac

