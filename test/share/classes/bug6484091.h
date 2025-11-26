#ifndef _bug6484091_h_
#define _bug6484091_h_
//$ class bug6484091
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export bug6484091 : public ::java::lang::Object {
	$class(bug6484091, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6484091();
	void init$();
	static void main($StringArray* args);
	static void printDirContent(::java::io::File* dir);
};

#endif // _bug6484091_h_