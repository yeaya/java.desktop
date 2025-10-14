#ifndef _FileChooserTest_h_
#define _FileChooserTest_h_
//$ class FileChooserTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

class $export FileChooserTest : public ::java::lang::Object {
	$class(FileChooserTest, 0, ::java::lang::Object)
public:
	FileChooserTest();
	void init$();
	static void fail();
	static void init();
	static void main($StringArray* args);
	static void pass();
	static bool theTestPassed;
	static bool testGeneratedInterrupt;
	static $Thread* mainThread;
	static int32_t sleepTime;
	static ::javax::swing::JFileChooser* fileChooser;
};

#endif // _FileChooserTest_h_