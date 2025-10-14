#ifndef _SystemIconTest_h_
#define _SystemIconTest_h_
//$ class SystemIconTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileSystemView;
		}
	}
}

class $export SystemIconTest : public ::java::lang::Object {
	$class(SystemIconTest, 0, ::java::lang::Object)
public:
	SystemIconTest();
	void init$();
	static void main($StringArray* args);
	static void negativeTests();
	static void testSystemIcon();
	static void testSystemIcon(::java::io::File* file, bool implComplete);
	static ::javax::swing::filechooser::FileSystemView* fsv;
};

#endif // _SystemIconTest_h_