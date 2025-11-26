#ifndef _HeadlessJApplet_h_
#define _HeadlessJApplet_h_
//$ class HeadlessJApplet
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJApplet : public ::java::lang::Object {
	$class(HeadlessJApplet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJApplet();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJApplet_h_