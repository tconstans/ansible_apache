Role Name
=========

Install httpd

Requirements
------------

None

Role Variables
--------------

httpd_root: httpd root directory - default /var/www/html
httpd_server_name: no default
httpd_have_ssl: default yes
http_ssl_certificate_file: /etc/letsencryp/live/{ httpd_server_name }}/fullchain.pem
http_ssl_certificate_key: /etc/letsencryp/live/{ httpd_server_name }}/privkey.pem

Dependencies
------------

ssl ou geerlinguy.certbot

Example Playbook
----------------

Including an example of how to use your role (for instance, with variables passed in as parameters) is always nice for users too:

    - hosts: servers
      roles:
    - { role: php7, php_version: 73
    - { role: apache, httpd_server_name: epsi.opendoor.fr }

License
-------

BSD

Author Information
------------------

Thomas C <thomas@opendoor.fr>

