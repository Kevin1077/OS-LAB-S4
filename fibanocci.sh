echo "Fibanocci series"
echo "Enter a limit"
read lim
num1=0
echo "$num1"
num2=1
echo "$num2"
for((i=2;i<lim;i++))
do
num3=$(($num1+$num2))
echo "$num3"
num1=$num2
num2=$num3
done

