#ifndef _bug4473075_h_
#define _bug4473075_h_
//$ class bug4473075
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("USER_HEADER_HEIGHT")
#undef USER_HEADER_HEIGHT

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class JTable;
	}
}

class $export bug4473075 : public ::java::lang::Object {
	$class(bug4473075, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4473075();
	void init$();
	static void main($StringArray* args);
	static const int32_t USER_HEADER_HEIGHT = 40;
	static ::javax::swing::JTable* table;
	static ::javax::swing::JScrollPane* scpScroll;
	static ::java::awt::Point* point;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("USER_HEADER_HEIGHT")

#endif // _bug4473075_h_