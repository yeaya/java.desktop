#ifndef _HeadlessJProgressBar_h_
#define _HeadlessJProgressBar_h_
//$ class HeadlessJProgressBar
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJProgressBar : public ::java::lang::Object {
	$class(HeadlessJProgressBar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJProgressBar();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJProgressBar_h_