#ifndef _bug6583251_h_
#define _bug6583251_h_
//$ class bug6583251
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JPopupMenu;
	}
}

class $export bug6583251 : public ::java::lang::Object {
	$class(bug6583251, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6583251();
	void init$();
	static void createGui();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JPopupMenu* menu;
};

#endif // _bug6583251_h_