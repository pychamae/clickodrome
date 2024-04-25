void			efadd_label_gui(t_gui			*gui,
				    t_bunny_position		pos,
				    const char			*name,
				    t_bunny_size		size,
				    const char			*text,
				    t_bunny_color		*font_color,
				    t_bunny_color		*bg)
{
    size_t count;

  count = 0;
  while(count < gui->divs->data_count)
    {
      add_button_div(efvector_at(gui->divs, count, t_div),pos
		     ,name ,size ,text ,font_color ,bg);
      count++;
    }
}
