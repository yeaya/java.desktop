#ifndef _bug6711682_h_
#define _bug6711682_h_
//$ class bug6711682
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JCheckBox;
		class JFrame;
		class JTable;
	}
}

class $export bug6711682 : public ::java::lang::Object {
	$class(bug6711682, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6711682();
	void init$();
	static void createAndShowGUI();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JCheckBox* editorCb;
	static ::javax::swing::JCheckBox* rendererCb;
	static ::javax::swing::JTable* table;
	static ::javax::swing::JFrame* f;
};

#endif // _bug6711682_h_