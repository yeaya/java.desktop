#ifndef _bug8032874_h_
#define _bug8032874_h_
//$ class bug8032874
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ROW_COUNT")
#undef ROW_COUNT

class bug8032874$TestTableModel;
namespace javax {
	namespace swing {
		class JTable;
	}
}

class $export bug8032874 : public ::java::lang::Object {
	$class(bug8032874, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8032874();
	void init$();
	static void createAndShowUI();
	static void main($StringArray* args);
	static const int32_t ROW_COUNT = 5;
	static ::javax::swing::JTable* table;
	static ::bug8032874$TestTableModel* tableModel;
};

#pragma pop_macro("ROW_COUNT")

#endif // _bug8032874_h_