#ifndef _HeadlessJTextPane_h_
#define _HeadlessJTextPane_h_
//$ class HeadlessJTextPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJTextPane : public ::java::lang::Object {
	$class(HeadlessJTextPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJTextPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJTextPane_h_