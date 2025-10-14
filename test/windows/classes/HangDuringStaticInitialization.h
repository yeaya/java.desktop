#ifndef _HangDuringStaticInitialization_h_
#define _HangDuringStaticInitialization_h_
//$ class HangDuringStaticInitialization
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
		}
	}
}

class $export HangDuringStaticInitialization : public ::java::lang::Object {
	$class(HangDuringStaticInitialization, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HangDuringStaticInitialization();
	void init$();
	static void main($StringArray* args);
	static void test(::java::nio::file::FileSystem* fs, $String* s);
};

#endif // _HangDuringStaticInitialization_h_