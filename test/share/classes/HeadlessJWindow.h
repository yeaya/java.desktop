#ifndef _HeadlessJWindow_h_
#define _HeadlessJWindow_h_
//$ class HeadlessJWindow
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJWindow : public ::java::lang::Object {
	$class(HeadlessJWindow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJWindow();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJWindow_h_