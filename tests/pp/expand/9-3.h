#ifdef A
	#ifdef B
		#define EXPANDTHIS
	#endif
	EXPANDTHIS void f(void);
#else
	#ifdef B
		#define EXPANDTHIS
	#endif
	EXPANDTHIS void f(void);
#endif