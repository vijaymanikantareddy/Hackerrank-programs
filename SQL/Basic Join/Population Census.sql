SELECT SUM(C.POPULATION) FROM CITY C, COUNTRY V
WHERE V.CODE = C.COUNTRYCODE AND V.CONTINENT = 'Asia';