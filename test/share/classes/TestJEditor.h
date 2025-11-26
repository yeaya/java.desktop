#ifndef _TestJEditor_h_
#define _TestJEditor_h_
//$ class TestJEditor
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestJEditor : public ::java::lang::Object {
	$class(TestJEditor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestJEditor();
	void init$();
	static void main($StringArray* args);
	static void testJEditorPane();
};

#endif // _TestJEditor_h_