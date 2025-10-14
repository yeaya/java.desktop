#ifndef _bug6578666_h_
#define _bug6578666_h_
//$ class bug6578666
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JTree;
	}
}

class $export bug6578666 : public ::java::lang::Object {
	$class(bug6578666, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6578666();
	void init$();
	static void createGui();
	static void main($StringArray* args);
	static ::javax::swing::JTree* tree;
};

#endif // _bug6578666_h_