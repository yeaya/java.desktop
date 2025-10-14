#ifndef _HeadlessJRootPane_h_
#define _HeadlessJRootPane_h_
//$ class HeadlessJRootPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJRootPane : public ::java::lang::Object {
	$class(HeadlessJRootPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJRootPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJRootPane_h_