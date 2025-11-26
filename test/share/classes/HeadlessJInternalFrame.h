#ifndef _HeadlessJInternalFrame_h_
#define _HeadlessJInternalFrame_h_
//$ class HeadlessJInternalFrame
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJInternalFrame : public ::java::lang::Object {
	$class(HeadlessJInternalFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJInternalFrame();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJInternalFrame_h_