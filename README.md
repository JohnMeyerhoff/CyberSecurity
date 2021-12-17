# Cybersecurity 
Hier sind Codes und Berichte für das Praxisprojekt.

# Bericht 
Ihr könnt die aktuelle Fassung des Berichts [hier](https://nightly.link/JohnMeyerhoff/CyberSecurity/workflows/SE/master/BufferOverflow.zip?h=0bf3f9dee2a48daabe0682f68db2557200bb8d83) herunterladen. Der Bericht wird sowohl als HTML als auch als PDF erstellt.

## Demo
Flags für den gcc: -fno-stack-protector -z execstack -no-pie
\Bereitstellen des compilierten Programms auf Port: sudo socat TCP-LISTEN:1337,nodelay,reuseaddr,fork EXEC:"stdbuf -i0 -o0 -e0 ./hallo"
