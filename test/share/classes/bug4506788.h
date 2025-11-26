#ifndef _bug4506788_h_
#define _bug4506788_h_
//$ class bug4506788
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

class $export bug4506788 : public ::java::lang::Object {
	$class(bug4506788, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4506788();
	void init$();
	void createAndShowGUI();
	::java::awt::Point* getJEPLocOnScreen();
	virtual void init();
	static void main($StringArray* args);
	virtual void start();
	$volatile(bool) passed = false;
	::javax::swing::JEditorPane* jep = nullptr;
};

#endif // _bug4506788_h_