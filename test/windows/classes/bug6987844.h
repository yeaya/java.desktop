#ifndef _bug6987844_h_
#define _bug6987844_h_
//$ class bug6987844
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JMenu;
	}
}

class $export bug6987844 : public ::java::lang::Object {
	$class(bug6987844, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6987844();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JMenu* menu1;
	static ::javax::swing::JMenu* menu2;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug6987844_h_