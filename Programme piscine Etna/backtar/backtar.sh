#déplacement de repertoire

#creation de repertoire et de fichier pour la futur compression
let "compt = 1"
var = $(basename $@)
while [ $# -ge $compt ]
do
tar zcvf  $var"_"$(date +"%d-%m-%Y-%H-%M".tar.gz) $@
let "compt++"
done
