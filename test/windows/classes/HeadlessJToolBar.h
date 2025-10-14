#ifndef _HeadlessJToolBar_h_
#define _HeadlessJToolBar_h_
//$ class HeadlessJToolBar
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJToolBar : public ::java::lang::Object {
	$class(HeadlessJToolBar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJToolBar();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJToolBar_h_