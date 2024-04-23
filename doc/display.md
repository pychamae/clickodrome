

efdisplay_gui:
paramètre:

		1er t_gui.*1.
		2eme t_bunny_pixelarray.

le fonctionement:

	elle appel dans la structure de t_gui les div.
	ces même div appel les composant.

le retour:
		void = rien.

*1 structure de t_gui:

	1er const char c'est le nom du fichier de comfiguration.
	2eme t_vector qui s'occupe des composant *3.
	3eme t_vectore qui s'occupe des div *2.

*2 chaque div dispose:

	divName = d'un nom, // div1, div2, ... //.
	pos = d'une position, // x , y  z //.
	size = d'une taile, // width et height //.
	et d'un composant.

*3 chaque composant comporte:

	type = un type // le nom du composant //.
	pos = une position // x , y et z //.
	size = d'une taile // width et height //.
	name = d'un nom qui lui est l'ID.
	text = d'un texte.
	fond_color = d'une couleur sur le composant // red, blue, green //.
	bg = d'un fond // back groun //.
	hover_color = losrque le focus est sur le composant , il peut ne pas exister.
	functions = les differant fonction qui seront utiliser par le composant.
