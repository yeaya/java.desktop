#ifndef _HeadlessBox_h_
#define _HeadlessBox_h_
//$ class HeadlessBox
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessBox : public ::java::lang::Object {
	$class(HeadlessBox, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessBox();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessBox_h_