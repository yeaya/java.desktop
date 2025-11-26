#ifndef _HeadlessJOptionPane_h_
#define _HeadlessJOptionPane_h_
//$ class HeadlessJOptionPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJOptionPane : public ::java::lang::Object {
	$class(HeadlessJOptionPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJOptionPane();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJOptionPane_h_