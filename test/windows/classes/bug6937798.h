#ifndef _bug6937798_h_
#define _bug6937798_h_
//$ class bug6937798
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JTable;
	}
}

class $export bug6937798 : public ::java::lang::Object {
	$class(bug6937798, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6937798();
	void init$();
	virtual ::javax::swing::JTable* createCountryTable();
	static void main($StringArray* args);
};

#endif // _bug6937798_h_