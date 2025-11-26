#ifndef _HeadlessJLayeredPane_h_
#define _HeadlessJLayeredPane_h_
//$ class HeadlessJLayeredPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJLayeredPane : public ::java::lang::Object {
	$class(HeadlessJLayeredPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJLayeredPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJLayeredPane_h_