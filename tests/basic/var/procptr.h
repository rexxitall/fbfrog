extern void (*a)(void);
extern int (*a)(int);
extern int (*a)(int a), (*b)(int a), c;
extern int a, (*b)(int a), c, (*d)(int a);
extern int **(*a)(int);
extern void (*a)(void (*a)(void));
extern int ***(*p)(int ***(*)(int ***));

extern void   (*    p    )   (void);
extern void  ((*    p    ))  (void);
extern void (((*    p    ))) (void);
extern void   (*   (p)   )   (void);
extern void  ((*   (p)   ))  (void);
extern void (((*   (p)   ))) (void);
extern void   (*  ((p))  )   (void);
extern void  ((*  ((p))  ))  (void);
extern void (((*  ((p))  ))) (void);
extern void   (* (((p))) )   (void);
extern void  ((* (((p))) ))  (void);
extern void (((* (((p))) ))) (void);

extern void   (* const    p    )   (void);
extern void  ((* const    p    ))  (void);
extern void (((* const    p    ))) (void);
extern void   (* const   (p)   )   (void);
extern void  ((* const   (p)   ))  (void);
extern void (((* const   (p)   ))) (void);
extern void   (* const  ((p))  )   (void);
extern void  ((* const  ((p))  ))  (void);
extern void (((* const  ((p))  ))) (void);
extern void   (* const (((p))) )   (void);
extern void  ((* const (((p))) ))  (void);
extern void (((* const (((p))) ))) (void);

extern void   (*   (*    p    )   )  (void);
extern void  ((*   (*    p    )   )) (void);
extern void (((*   (*    p    )   )))(void);
extern void   (*  ((*    p    ))  )  (void);
extern void  ((*  ((*    p    ))  )) (void);
extern void (((*  ((*    p    ))  )))(void);
extern void   (* (((*    p    ))) )  (void);
extern void  ((* (((*    p    ))) )) (void);
extern void (((* (((*    p    ))) )))(void);
extern void   (*   (*   (p)   )   )  (void);
extern void  ((*   (*   (p)   )   )) (void);
extern void (((*   (*   (p)   )   )))(void);
extern void   (*  ((*   (p)   ))  )  (void);
extern void  ((*  ((*   (p)   ))  )) (void);
extern void (((*  ((*   (p)   ))  )))(void);
extern void   (* (((*   (p)   ))) )  (void);
extern void  ((* (((*   (p)   ))) )) (void);
extern void (((* (((*   (p)   ))) )))(void);
extern void   (*   (*  ((p))  )   )  (void);
extern void  ((*   (*  ((p))  )   )) (void);
extern void (((*   (*  ((p))  )   )))(void);
extern void   (*  ((*  ((p))  ))  )  (void);
extern void  ((*  ((*  ((p))  ))  )) (void);
extern void (((*  ((*  ((p))  ))  )))(void);
extern void   (* (((*  ((p))  ))) )  (void);
extern void  ((* (((*  ((p))  ))) )) (void);
extern void (((* (((*  ((p))  ))) )))(void);
extern void   (*   (* (((p))) )   )  (void);
extern void  ((*   (* (((p))) )   )) (void);
extern void (((*   (* (((p))) )   )))(void);
extern void   (*  ((* (((p))) ))  )  (void);
extern void  ((*  ((* (((p))) ))  )) (void);
extern void (((*  ((* (((p))) ))  )))(void);
extern void   (* (((* (((p))) ))) )  (void);
extern void  ((* (((* (((p))) ))) )) (void);
extern void (((* (((* (((p))) ))) )))(void);

extern void   (*   (* const    p    )   )  (void);
extern void  ((*   (* const    p    )   )) (void);
extern void (((*   (* const    p    )   )))(void);
extern void   (*  ((* const    p    ))  )  (void);
extern void  ((*  ((* const    p    ))  )) (void);
extern void (((*  ((* const    p    ))  )))(void);
extern void   (* (((* const    p    ))) )  (void);
extern void  ((* (((* const    p    ))) )) (void);
extern void (((* (((* const    p    ))) )))(void);
extern void   (*   (* const   (p)   )   )  (void);
extern void  ((*   (* const   (p)   )   )) (void);
extern void (((*   (* const   (p)   )   )))(void);
extern void   (*  ((* const   (p)   ))  )  (void);
extern void  ((*  ((* const   (p)   ))  )) (void);
extern void (((*  ((* const   (p)   ))  )))(void);
extern void   (* (((* const   (p)   ))) )  (void);
extern void  ((* (((* const   (p)   ))) )) (void);
extern void (((* (((* const   (p)   ))) )))(void);
extern void   (*   (* const  ((p))  )   )  (void);
extern void  ((*   (* const  ((p))  )   )) (void);
extern void (((*   (* const  ((p))  )   )))(void);
extern void   (*  ((* const  ((p))  ))  )  (void);
extern void  ((*  ((* const  ((p))  ))  )) (void);
extern void (((*  ((* const  ((p))  ))  )))(void);
extern void   (* (((* const  ((p))  ))) )  (void);
extern void  ((* (((* const  ((p))  ))) )) (void);
extern void (((* (((* const  ((p))  ))) )))(void);
extern void   (*   (* const (((p))) )   )  (void);
extern void  ((*   (* const (((p))) )   )) (void);
extern void (((*   (* const (((p))) )   )))(void);
extern void   (*  ((* const (((p))) ))  )  (void);
extern void  ((*  ((* const (((p))) ))  )) (void);
extern void (((*  ((* const (((p))) ))  )))(void);
extern void   (* (((* const (((p))) ))) )  (void);
extern void  ((* (((* const (((p))) ))) )) (void);
extern void (((* (((* const (((p))) ))) )))(void);

extern void   (* const   (*    p    )   )  (void);
extern void  ((* const   (*    p    )   )) (void);
extern void (((* const   (*    p    )   )))(void);
extern void   (* const  ((*    p    ))  )  (void);
extern void  ((* const  ((*    p    ))  )) (void);
extern void (((* const  ((*    p    ))  )))(void);
extern void   (* const (((*    p    ))) )  (void);
extern void  ((* const (((*    p    ))) )) (void);
extern void (((* const (((*    p    ))) )))(void);
extern void   (* const   (*   (p)   )   )  (void);
extern void  ((* const   (*   (p)   )   )) (void);
extern void (((* const   (*   (p)   )   )))(void);
extern void   (* const  ((*   (p)   ))  )  (void);
extern void  ((* const  ((*   (p)   ))  )) (void);
extern void (((* const  ((*   (p)   ))  )))(void);
extern void   (* const (((*   (p)   ))) )  (void);
extern void  ((* const (((*   (p)   ))) )) (void);
extern void (((* const (((*   (p)   ))) )))(void);
extern void   (* const   (*  ((p))  )   )  (void);
extern void  ((* const   (*  ((p))  )   )) (void);
extern void (((* const   (*  ((p))  )   )))(void);
extern void   (* const  ((*  ((p))  ))  )  (void);
extern void  ((* const  ((*  ((p))  ))  )) (void);
extern void (((* const  ((*  ((p))  ))  )))(void);
extern void   (* const (((*  ((p))  ))) )  (void);
extern void  ((* const (((*  ((p))  ))) )) (void);
extern void (((* const (((*  ((p))  ))) )))(void);
extern void   (* const   (* (((p))) )   )  (void);
extern void  ((* const   (* (((p))) )   )) (void);
extern void (((* const   (* (((p))) )   )))(void);
extern void   (* const  ((* (((p))) ))  )  (void);
extern void  ((* const  ((* (((p))) ))  )) (void);
extern void (((* const  ((* (((p))) ))  )))(void);
extern void   (* const (((* (((p))) ))) )  (void);
extern void  ((* const (((* (((p))) ))) )) (void);
extern void (((* const (((* (((p))) ))) )))(void);

extern void   (* const   (* const    p    )   )  (void);
extern void  ((* const   (* const    p    )   )) (void);
extern void (((* const   (* const    p    )   )))(void);
extern void   (* const  ((* const    p    ))  )  (void);
extern void  ((* const  ((* const    p    ))  )) (void);
extern void (((* const  ((* const    p    ))  )))(void);
extern void   (* const (((* const    p    ))) )  (void);
extern void  ((* const (((* const    p    ))) )) (void);
extern void (((* const (((* const    p    ))) )))(void);
extern void   (* const   (* const   (p)   )   )  (void);
extern void  ((* const   (* const   (p)   )   )) (void);
extern void (((* const   (* const   (p)   )   )))(void);
extern void   (* const  ((* const   (p)   ))  )  (void);
extern void  ((* const  ((* const   (p)   ))  )) (void);
extern void (((* const  ((* const   (p)   ))  )))(void);
extern void   (* const (((* const   (p)   ))) )  (void);
extern void  ((* const (((* const   (p)   ))) )) (void);
extern void (((* const (((* const   (p)   ))) )))(void);
extern void   (* const   (* const  ((p))  )   )  (void);
extern void  ((* const   (* const  ((p))  )   )) (void);
extern void (((* const   (* const  ((p))  )   )))(void);
extern void   (* const  ((* const  ((p))  ))  )  (void);
extern void  ((* const  ((* const  ((p))  ))  )) (void);
extern void (((* const  ((* const  ((p))  ))  )))(void);
extern void   (* const (((* const  ((p))  ))) )  (void);
extern void  ((* const (((* const  ((p))  ))) )) (void);
extern void (((* const (((* const  ((p))  ))) )))(void);
extern void   (* const   (* const (((p))) )   )  (void);
extern void  ((* const   (* const (((p))) )   )) (void);
extern void (((* const   (* const (((p))) )   )))(void);
extern void   (* const  ((* const (((p))) ))  )  (void);
extern void  ((* const  ((* const (((p))) ))  )) (void);
extern void (((* const  ((* const (((p))) ))  )))(void);
extern void   (* const (((* const (((p))) ))) )  (void);
extern void  ((* const (((* const (((p))) ))) )) (void);
extern void (((* const (((* const (((p))) ))) )))(void);