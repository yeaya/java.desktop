#ifndef _Test6505027_h_
#define _Test6505027_h_
//$ class Test6505027
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COLUMNS")
#undef COLUMNS
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("INTERNAL")
#undef INTERNAL
#pragma push_macro("ITEMS")
#undef ITEMS
#pragma push_macro("KEY")
#undef KEY
#pragma push_macro("OFFSET")
#undef OFFSET
#pragma push_macro("TERMINATE")
#undef TERMINATE
#pragma push_macro("WIDTH")
#undef WIDTH

namespace javax {
	namespace swing {
		class JFrame;
		class JTable;
	}
}

class $export Test6505027 : public ::java::lang::Object {
	$class(Test6505027, 0, ::java::lang::Object)
public:
	Test6505027();
	void init$(::javax::swing::JFrame* main);
	static void main($StringArray* args);
	virtual void press();
	static void validate();
	static const bool INTERNAL = true;
	static const bool TERMINATE = true;
	static const int32_t WIDTH = 450;
	static const int32_t HEIGHT = 200;
	static const int32_t OFFSET = 10;
	static $StringArray* COLUMNS;
	static $StringArray* ITEMS;
	static $String* KEY;
	::javax::swing::JTable* table = nullptr;
};

#pragma pop_macro("COLUMNS")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("INTERNAL")
#pragma pop_macro("ITEMS")
#pragma pop_macro("KEY")
#pragma pop_macro("OFFSET")
#pragma pop_macro("TERMINATE")
#pragma pop_macro("WIDTH")

#endif // _Test6505027_h_