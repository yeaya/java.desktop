#ifndef _bug6542335_h_
#define _bug6542335_h_
//$ class bug6542335
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug6542335$MyScrollBarUI;
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollBar;
	}
}

class $export bug6542335 : public ::java::lang::Object {
	$class(bug6542335, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6542335();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JScrollBar* sb;
	static ::bug6542335$MyScrollBarUI* ui;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug6542335_h_