# Write your MySQL query statement below
# select* from Cinema where description != 'boring' and id %2 != 0 order by rating desc;
select* from Cinema where description not like'b%' and id %2 != 0 order by rating desc;