#ifndef _bug6514582_h_
#define _bug6514582_h_
//$ class bug6514582
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JPopupMenu;
	}
}

class $export bug6514582 : public ::java::lang::Object {
	$class(bug6514582, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6514582();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JPopupMenu* popup;
};

#endif // _bug6514582_h_