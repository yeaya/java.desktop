#ifndef _ListSelectionModelTest_h_
#define _ListSelectionModelTest_h_
//$ class ListSelectionModelTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JList;
	}
}

class $export ListSelectionModelTest : public ::java::lang::Object {
	$class(ListSelectionModelTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ListSelectionModelTest();
	void init$();
	static void CreateGUIAndTest($String* lookAndFeel);
	static void checkSelection(::javax::swing::JList* list, $ints* selectionArray, $String* lookAndFeel);
	static void main($StringArray* args);
};

#endif // _ListSelectionModelTest_h_