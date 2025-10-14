#ifndef _bug6505523_h_
#define _bug6505523_h_
//$ class bug6505523
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}

class $export bug6505523 : public ::java::lang::Object {
	$class(bug6505523, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6505523();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::Point* getRowPointToClick(int32_t row);
	static void main($StringArray* args);
	static ::javax::swing::JTree* tree;
};

#endif // _bug6505523_h_