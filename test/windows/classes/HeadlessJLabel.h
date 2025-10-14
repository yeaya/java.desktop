#ifndef _HeadlessJLabel_h_
#define _HeadlessJLabel_h_
//$ class HeadlessJLabel
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJLabel : public ::java::lang::Object {
	$class(HeadlessJLabel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJLabel();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJLabel_h_