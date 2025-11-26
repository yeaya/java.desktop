#ifndef _HeadlessJButton_h_
#define _HeadlessJButton_h_
//$ class HeadlessJButton
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJButton : public ::java::lang::Object {
	$class(HeadlessJButton, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJButton();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJButton_h_