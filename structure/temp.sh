read N
for (( i=0 ; i< N ; i++ ))
do
	for (( j=((N-1)) ; j> i ; j-- ))
	do
        echo -n " "
    done
    for(( k=0 ; k<=i ; k++))
    do
        echo -n "$(($i+1))"
    done
	echo
done
