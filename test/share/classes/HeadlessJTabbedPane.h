#ifndef _HeadlessJTabbedPane_h_
#define _HeadlessJTabbedPane_h_
//$ class HeadlessJTabbedPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJTabbedPane : public ::java::lang::Object {
	$class(HeadlessJTabbedPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJTabbedPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJTabbedPane_h_