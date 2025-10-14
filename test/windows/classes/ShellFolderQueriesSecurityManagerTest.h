#ifndef _ShellFolderQueriesSecurityManagerTest_h_
#define _ShellFolderQueriesSecurityManagerTest_h_
//$ class ShellFolderQueriesSecurityManagerTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace filechooser {
			class FileSystemView;
		}
	}
}

class $export ShellFolderQueriesSecurityManagerTest : public ::java::lang::Object {
	$class(ShellFolderQueriesSecurityManagerTest, 0, ::java::lang::Object)
public:
	ShellFolderQueriesSecurityManagerTest();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::filechooser::FileSystemView* fsv;
};

#endif // _ShellFolderQueriesSecurityManagerTest_h_