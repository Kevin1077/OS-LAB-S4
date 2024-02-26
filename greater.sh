echo "Enter two numbers"
read num1
read num2
if(($num1>$num2))
then
 echo "$num1 number is greater"
 elif(($num1==$num2))
 then
 echo "The numbers are equal"
 else
 echo "$num2 is greater"
 fi
