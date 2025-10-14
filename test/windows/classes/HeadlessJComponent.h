#ifndef _HeadlessJComponent_h_
#define _HeadlessJComponent_h_
//$ class HeadlessJComponent
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJComponent : public ::java::lang::Object {
	$class(HeadlessJComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJComponent();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJComponent_h_