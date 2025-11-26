#ifndef _bug6777378_h_
#define _bug6777378_h_
//$ class bug6777378
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
		}
	}
}

class $export bug6777378 : public ::java::lang::Object {
	$class(bug6777378, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6777378();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::table::JTableHeader* header;
};

#endif // _bug6777378_h_