#ifndef _HeadlessJMenuBar_h_
#define _HeadlessJMenuBar_h_
//$ class HeadlessJMenuBar
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJMenuBar : public ::java::lang::Object {
	$class(HeadlessJMenuBar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJMenuBar();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJMenuBar_h_