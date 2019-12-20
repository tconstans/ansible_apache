RewriteEngine on
RewriteCond %{HTTPS} off
RewriteCond %{REQUEST_URI}  "!^/\.well-known"
RewriteRule (.*) https://%{SERVER_NAME}$1 [R,L]
