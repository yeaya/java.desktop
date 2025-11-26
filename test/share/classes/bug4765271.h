#ifndef _bug4765271_h_
#define _bug4765271_h_
//$ class bug4765271
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RES")
#undef RES
#pragma push_macro("TEXT")
#undef TEXT

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

class $export bug4765271 : public ::java::lang::Object {
	$class(bug4765271, 0, ::java::lang::Object)
public:
	bug4765271();
	void init$(bool showFrame);
	virtual void init();
	static void lambda$main$0(::bug4765271* test);
	static void main($StringArray* args);
	virtual void test();
	static const int32_t RES = 96;
	static $String* TEXT;
	::javax::swing::JEditorPane* jep = nullptr;
	bool showFrame = false;
	::java::util::concurrent::atomic::AtomicBoolean* passed = nullptr;
};

#pragma pop_macro("RES")
#pragma pop_macro("TEXT")

#endif // _bug4765271_h_