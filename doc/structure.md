

structure de t_gui:

	1er const char c'est le nom du fichier de comfiguration.
	2eme t_vector qui ce déplace de composant en composant *1.
	3eme t_componant qui est une structure *2.
	4eme t_vectore qui ce déplace de div en div *3.

*1 chaque composant comporte:

	type = un type // le nom du composant //.
	pos = une position // x , y et z //.
	size = d'une taile // width et height //.
	name = d'un nom qui lui est l'ID.
	text = d'un texte.
	fond_color = d'une couleur sur le composant // red, blue, green //.
	bg = d'un fond // back groun //.
	hover_color = losrque le focus est sur le composant , il peut ne pas exister.
	functions = les differant fonction qui seront utiliser par le composant.

*2 structure component

	void *component // pour le cast //
	t_type type // le type du composant //.

*3 chaque div dispose:

	divName = d'un nom, // div1, div2, ... //.
	pos = d'une position, // x , y  z //.
	size = d'une taile, // width et height //.
