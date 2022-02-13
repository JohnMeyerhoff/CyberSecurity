# Cybersecurity 
Hier sind Codes und Berichte für das Praxisprojekt.

# Projekt - Abschlussbericht
Die Gerenderte PDF gibt es [hier](https://nightly.link/JohnMeyerhoff/CyberSecurity/workflows/abschlussberichtbuild/master/AbschlussBericht.zip?h=0bf3f9dee2a48daabe0682f68db2557200bb8d83).

## Demo
**Flags für den gcc:** -fno-stack-protector -z execstack -no-pie  
**Bereitstellen des kompilierten Programms auf Port:** sudo socat TCP-LISTEN:1234,nodelay,reuseaddr,fork EXEC:"stdbuf -i0 -o0 -e0 ./hallo"
