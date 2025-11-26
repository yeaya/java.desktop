#ifndef _bug6691503_h_
#define _bug6691503_h_
//$ class bug6691503
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JPopupMenu;
	}
}

class $export bug6691503 : public ::java::lang::Object {
	$class(bug6691503, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6691503();
	void init$();
	void checkResult();
	static void main($StringArray* args);
	void setupUI();
	void stopEDT();
	void testApplet();
	void testApplication();
	::javax::swing::JPopupMenu* popupMenu = nullptr;
	::javax::swing::JFrame* frame = nullptr;
	bool isAlwaysOnTop1 = false;
	bool isAlwaysOnTop2 = false;
};

#endif // _bug6691503_h_