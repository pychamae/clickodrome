#ifndef			__PICTURE_H__

#define			__PICTURE_H__

typedef struct	        s_picture
{
  t_bunny_position	pos;
  t_bunny_size		size;
  const char		*name;
  const char		*filename;
}			t_picture;

t_picture		*efnew_picture(t_bunny_position		pos,
				       t_bunny_size		size,
				       const char		*name,
				       const char		*filename);
void			efdelete_picture(t_picture		*picture);


#endif	//		__PICTURE_H__
