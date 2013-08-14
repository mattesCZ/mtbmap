STYLE="NoHeights"
STYLE2="MTB-main"
for j in `seq 1 6`
do
  time for i in `seq 7 16`;
    do
      rm -r ~/BP/My_Tiles/$STYLE/$i;
      time python test.py $i "$STYLE".xml;
      rm -r ~/BP/My_Tiles/$STYLE2/$i;
      time python test.py $i "$STYLE2".xml;
    done > ~/BP/My_Tiles/out$j.txt 2> ~/BP/My_Tiles/out$j.txt
done
