#ifndef _SelectAllFilesFilterTest_h_
#define _SelectAllFilesFilterTest_h_
//$ class SelectAllFilesFilterTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LABEL_TEXT")
#undef LABEL_TEXT

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFileChooser;
	}
}

class $export SelectAllFilesFilterTest : public ::java::lang::Object {
	$class(SelectAllFilesFilterTest, 0, ::java::lang::Object)
public:
	SelectAllFilesFilterTest();
	void init$();
	static void createAndShowGUI();
	static ::javax::swing::JComboBox* findComboBox(::java::awt::Component* comp);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static $String* LABEL_TEXT;
	static $volatile(::javax::swing::JFileChooser*) fileChooser;
	static ::javax::swing::JComboBox* comboBox;
};

#pragma pop_macro("LABEL_TEXT")

#endif // _SelectAllFilesFilterTest_h_