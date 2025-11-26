#ifndef _bug6868611_h_
#define _bug6868611_h_
//$ class bug6868611
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COUNT")
#undef COUNT

namespace java {
	namespace io {
		class File;
	}
}

class $export bug6868611 : public ::java::lang::Object {
	$class(bug6868611, 0, ::java::lang::Object)
public:
	bug6868611();
	void init$();
	static void main($StringArray* args);
	static const int32_t COUNT = 100;
	static ::java::io::File* tempFolder;
	static $Array<::java::io::File>* files;
};

#pragma pop_macro("COUNT")

#endif // _bug6868611_h_