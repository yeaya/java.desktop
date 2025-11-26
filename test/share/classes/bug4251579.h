#ifndef _bug4251579_h_
#define _bug4251579_h_
//$ class bug4251579
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JLabel;
	}
}

class $export bug4251579 : public ::java::lang::Object {
	$class(bug4251579, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4251579();
	void init$();
	static void createAndShowGUI();
	static void main($StringArray* args);
	static ::javax::swing::JLabel* htmlComponent;
};

#endif // _bug4251579_h_