#ifndef _HeadlessJDesktopPane_h_
#define _HeadlessJDesktopPane_h_
//$ class HeadlessJDesktopPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJDesktopPane : public ::java::lang::Object {
	$class(HeadlessJDesktopPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJDesktopPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJDesktopPane_h_