#ifndef _HeadlessJMenu_h_
#define _HeadlessJMenu_h_
//$ class HeadlessJMenu
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export HeadlessJMenu : public ::java::lang::Object {
	$class(HeadlessJMenu, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadlessJMenu();
	void init$();
	static void main($StringArray* args);
};

#endif // _HeadlessJMenu_h_