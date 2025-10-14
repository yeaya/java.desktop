#ifndef _HeadlessJDialog_h_
#define _HeadlessJDialog_h_
//$ class HeadlessJDialog
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJDialog : public ::java::lang::Object {
	$class(HeadlessJDialog, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJDialog();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJDialog_h_