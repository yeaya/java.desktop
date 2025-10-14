#ifndef _ShellFolderQueriesTest_h_
#define _ShellFolderQueriesTest_h_
//$ class ShellFolderQueriesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HOME")
#undef HOME

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

class $export ShellFolderQueriesTest : public ::java::lang::Object {
	$class(ShellFolderQueriesTest, 0, ::java::lang::Object)
public:
	ShellFolderQueriesTest();
	void init$();
	static ::java::io::File* createVbsScript($String* script);
	static void main($StringArray* args);
	static void testGet();
	static void testLink();
	static void testShortcutPanelFiles();
	static $String* HOME;
	static ::javax::swing::filechooser::FileSystemView* fsv;
	static $String* scriptBeg;
	static $String* scriptEnd;
};

#pragma pop_macro("HOME")

#endif // _ShellFolderQueriesTest_h_