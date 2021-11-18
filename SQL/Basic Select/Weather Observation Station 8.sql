select distinct city from station
where substr(city, 1, 1) in ('a','e','i','o','u','A','E','I','O','U') and 
substr(city, length(City), 1) in ('a','e','i','o','u','A','E','I','O','U');
