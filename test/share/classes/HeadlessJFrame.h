#ifndef _HeadlessJFrame_h_
#define _HeadlessJFrame_h_
//$ class HeadlessJFrame
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJFrame : public ::java::lang::Object {
	$class(HeadlessJFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJFrame();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJFrame_h_