#ifndef _HeadlessTimer_h_
#define _HeadlessTimer_h_
//$ class HeadlessTimer
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessTimer : public ::java::lang::Object {
	$class(HeadlessTimer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessTimer();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessTimer_h_