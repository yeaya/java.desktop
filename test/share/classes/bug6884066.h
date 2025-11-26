#ifndef _bug6884066_h_
#define _bug6884066_h_
//$ class bug6884066
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
		}
	}
}

class $export bug6884066 : public ::java::lang::Object {
	$class(bug6884066, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6884066();
	void init$();
	static void checkColumn(int32_t index, $String* str);
	static void main($StringArray* args);
	static ::javax::swing::table::JTableHeader* header;
};

#endif // _bug6884066_h_