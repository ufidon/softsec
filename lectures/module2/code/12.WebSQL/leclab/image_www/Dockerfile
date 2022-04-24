FROM handsonsecurity/seed-server:apache-php

# sqlinj-lab
ARG labDir=/var/www/SQL_Lab
ARG lecDir=/var/www/SQL_Lec

COPY lab $labDir
COPY lec $lecDir
COPY apache_sql_injection.conf  /etc/apache2/sites-available
RUN  a2ensite apache_sql_injection.conf 



