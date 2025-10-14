#ifndef _HeadlessLookAndFeel_h_
#define _HeadlessLookAndFeel_h_
//$ class HeadlessLookAndFeel
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessLookAndFeel : public ::java::lang::Object {
	$class(HeadlessLookAndFeel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessLookAndFeel();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessLookAndFeel_h_