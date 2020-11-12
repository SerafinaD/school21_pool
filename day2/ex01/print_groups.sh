FT_USER=$(id -un)
export FT_USER
id -Gn $FT_USER | tr ' ' ','