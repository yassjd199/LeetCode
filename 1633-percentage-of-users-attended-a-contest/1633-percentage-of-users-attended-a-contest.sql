




select contest_id , round(( num /(select count(*) from Users )*100),2) as percentage
from(
    select contest_id, count( u.user_id) as num
    from Users as u 
    join Register as r
    on u.user_id = r.user_id 
    group by contest_id 
) as contest_count
order by percentage desc , contest_id asc
;