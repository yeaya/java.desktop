#ifndef _HeadlessJSpinner_h_
#define _HeadlessJSpinner_h_
//$ class HeadlessJSpinner
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJSpinner : public ::java::lang::Object {
	$class(HeadlessJSpinner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJSpinner();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJSpinner_h_