   NB. create and display nested noun li
   ]li =.  (<1) ; 2; ((<3; 4); 5) ; ((<a:)) ; ((<(<6))) ; 7; 8; <a:
+---+-+-----------+----+-----+-+-+--+
|+-+|2|+-------+-+|+--+|+---+|7|8|++|
||1|| ||+-----+|5|||++|||+-+|| | ||||
|+-+| |||+-+-+|| |||||||||6||| | |++|
|   | ||||3|4||| |||++|||+-+|| | |  |
|   | |||+-+-+|| ||+--+|+---+| | |  |
|   | ||+-----+| ||    |     | | |  |
|   | |+-------+-+|    |     | | |  |
+---+-+-----------+----+-----+-+-+--+

  flatten li
1 2 3 4 5 6 7 8