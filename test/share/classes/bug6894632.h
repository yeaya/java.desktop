#ifndef _bug6894632_h_
#define _bug6894632_h_
//$ class bug6894632
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

class $export bug6894632 : public ::java::lang::Object {
	$class(bug6894632, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6894632();
	void init$();
	static void main($StringArray* args);
	static void test(::java::util::List* sortKeys);
	static ::javax::swing::JTable* table;
};

#endif // _bug6894632_h_