#ifndef _bug8023474_h_
#define _bug8023474_h_
//$ class bug8023474
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

class $export bug8023474 : public ::java::lang::Object {
	$class(bug8023474, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8023474();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::Point* getRowPointToClick(int32_t row);
	static void main($StringArray* args);
	static ::javax::swing::JTree* tree;
};

#endif // _bug8023474_h_