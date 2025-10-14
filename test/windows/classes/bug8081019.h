#ifndef _bug8081019_h_
#define _bug8081019_h_
//$ class bug8081019
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RUN_PROCESS")
#undef RUN_PROCESS
#pragma push_macro("RUN_TEST")
#undef RUN_TEST

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export bug8081019 : public ::java::lang::Object {
	$class(bug8081019, 0, ::java::lang::Object)
public:
	bug8081019();
	void init$();
	static void dumpStream(::java::io::InputStream* in, $String* name);
	static void main($StringArray* args);
	static void runProcess();
	static void runTest();
	static $String* RUN_PROCESS;
	static $String* RUN_TEST;
};

#pragma pop_macro("RUN_PROCESS")
#pragma pop_macro("RUN_TEST")

#endif // _bug8081019_h_