#ifndef _HeadlessJColorChooser_h_
#define _HeadlessJColorChooser_h_
//$ class HeadlessJColorChooser
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJColorChooser : public ::java::lang::Object {
	$class(HeadlessJColorChooser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJColorChooser();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJColorChooser_h_