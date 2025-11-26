#ifndef _bug6670274_h_
#define _bug6670274_h_
//$ class bug6670274
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug6670274$TestTabbedPaneUI;

class $export bug6670274 : public ::java::lang::Object {
	$class(bug6670274, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6670274();
	void init$();
	static void check(::bug6670274$TestTabbedPaneUI* ui, $ints* indices);
	static void createGui();
	static void main($StringArray* args);
};

#endif // _bug6670274_h_