select  P.name, PVD.name from products P
JOIN providers PVD ON (P.id_providers = PVD.id)
JOIN categories C ON (P.id_categories = C.id)
where P.id_categories = 6;