#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)/usr/ucb/tbl.sl	1.11 (gritter) 9/5/05";
/* SLIST */
/*
t..c: * Sccsid @(#)t..c	1.7 (gritter) 8/12/05
t0.c: * Sccsid @(#)t0.c	1.4 (gritter) 7/23/05
t1.c: * Sccsid @(#)t1.c	1.9 (gritter) 8/13/05
t2.c: * Sccsid @(#)t2.c	1.3 (gritter) 7/23/05
t3.c: * Sccsid @(#)t3.c	1.5 (gritter) 8/12/05
t4.c: * Sccsid @(#)t4.c	1.4 (gritter) 7/24/05
t5.c: * Sccsid @(#)t5.c	1.5 (gritter) 8/12/05
t6.c: * Sccsid @(#)t6.c	1.4 (gritter) 9/5/05
t7.c: * Sccsid @(#)t7.c	1.3 (gritter) 7/23/05
t8.c: * Sccsid @(#)t8.c	1.5 (gritter) 8/13/05
t9.c: * Sccsid @(#)t9.c	1.5 (gritter) 8/12/05
tb.c: * Sccsid @(#)tb.c	1.5 (gritter) 8/12/05
tc.c: * Sccsid @(#)tc.c	1.4 (gritter) 7/24/05
te.c: * Sccsid @(#)te.c	1.9 (gritter) 8/13/05
tf.c: * Sccsid @(#)tf.c	1.3 (gritter) 7/23/05
tg.c: * Sccsid @(#)tg.c	1.5 (gritter) 8/12/05
ti.c: * Sccsid @(#)ti.c	1.3 (gritter) 7/23/05
tm.c: * Sccsid @(#)tm.c	1.4 (gritter) 7/24/05
ts.c: * Sccsid @(#)ts.c	1.3 (gritter) 7/23/05
tt.c: * Sccsid @(#)tt.c	1.3 (gritter) 7/23/05
tu.c: * Sccsid @(#)tu.c	1.3 (gritter) 7/23/05
tv.c: * Sccsid @(#)tv.c	1.3 (gritter) 7/23/05
*/
