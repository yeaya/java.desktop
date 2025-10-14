#ifndef _bug8031971_h_
#define _bug8031971_h_
//$ class bug8031971
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EDITORS")
#undef EDITORS
#pragma push_macro("RENDERERS")
#undef RENDERERS

namespace java {
	namespace util {
		class Hashtable;
	}
}

class $export bug8031971 : public ::java::lang::Object {
	$class(bug8031971, 0, ::java::lang::Object)
public:
	bug8031971();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static void test(::java::util::Hashtable* table, $Array<::java::lang::Object, 2>* values);
	static void test(Object$* obj, $String* className);
	static $Array<::java::lang::Object, 2>* RENDERERS;
	static $Array<::java::lang::Object, 2>* EDITORS;
};

#pragma pop_macro("EDITORS")
#pragma pop_macro("RENDERERS")

#endif // _bug8031971_h_