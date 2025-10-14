#ifndef _bug8037575_h_
#define _bug8037575_h_
//$ class bug8037575
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug8037575 : public ::java::lang::Object {
	$class(bug8037575, 0, ::java::lang::Object)
public:
	bug8037575();
	void init$();
	static void fail();
	static void init();
	static void main($StringArray* args);
	static void pass();
	static void runTest();
	static bool theTestPassed;
	static bool testGeneratedInterrupt;
	static $Thread* mainThread;
	static int32_t sleepTime;
	static int32_t waitTime;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug8037575_h_