select city.name from city, country
where city.countrycode = country.code and country.continent = 'Africa';
