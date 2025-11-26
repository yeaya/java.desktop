#ifndef _HeadlessJViewport_h_
#define _HeadlessJViewport_h_
//$ class HeadlessJViewport
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJViewport : public ::java::lang::Object {
	$class(HeadlessJViewport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJViewport();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJViewport_h_