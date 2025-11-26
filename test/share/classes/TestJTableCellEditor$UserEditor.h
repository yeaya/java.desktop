#ifndef _TestJTableCellEditor$UserEditor_h_
#define _TestJTableCellEditor$UserEditor_h_
//$ class TestJTableCellEditor$UserEditor
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TEST_VALUE")
#undef TEST_VALUE

class $export TestJTableCellEditor$UserEditor : public ::java::lang::Object {
	$class(TestJTableCellEditor$UserEditor, 0, ::java::lang::Object)
public:
	TestJTableCellEditor$UserEditor();
	void init$($String* value);
	static $String* TEST_VALUE;
	$String* value = nullptr;
};

#pragma pop_macro("TEST_VALUE")

#endif // _TestJTableCellEditor$UserEditor_h_