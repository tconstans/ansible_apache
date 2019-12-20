Role Name
=========

Install httpd + php-fpm

Requirements
------------

None

Role Variables
--------------

php_version: default 73
httpd_root: httpd root directory - default /var/www/html
httpd_server_name: no default
httpd_have_ssl: default yes
php_fpm_pool_user: default apache
php_fpm_pool_group: default apache
php_fpm_listen_url: default 127.0.0.1:90{{ php_version }}

Dependencies
------------

php7
ssl

Example Playbook
----------------

Including an example of how to use your role (for instance, with variables passed in as parameters) is always nice for users too:

    - hosts: servers
      roles:
    - { role: php7, php_version: 73
         - { role: apache, php_version: 73, httpd_server_name:
           epsi.opendoor.fr }

License
-------

BSD

Author Information
------------------

Thomas C <thomas@opendoor.fr>

