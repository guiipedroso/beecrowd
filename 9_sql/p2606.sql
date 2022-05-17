select * from products P
JOIN categories C ON (P.id_categories = C.id)
where C.name like 'super%';
  