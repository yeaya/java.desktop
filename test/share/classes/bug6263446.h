#ifndef _bug6263446_h_
#define _bug6263446_h_
//$ class bug6263446
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("FIRST")
#undef FIRST
#pragma push_macro("SECOND")
#undef SECOND

namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableModel;
		}
	}
}

class $export bug6263446 : public ::java::lang::Object {
	$class(bug6263446, 0, ::java::lang::Object)
public:
	bug6263446();
	void init$();
	static void assertEditing(bool editing);
	static void cancelCellEditing();
	static void checkSelectedText($String* sel);
	static void checkSelection($String* sel);
	static void click(int32_t times);
	static void createAndShowGUI();
	static ::javax::swing::table::TableModel* createTableModel();
	static ::java::awt::Point* getClickPoint();
	static void lambda$assertEditing$5(bool editing);
	static void lambda$cancelCellEditing$3();
	static void lambda$checkSelection$4($String* sel);
	static void lambda$getClickPoint$6($Array<::java::awt::Point>* result);
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$setClickCountToStart$2(int32_t clicks);
	static void main($StringArray* args);
	static void setClickCountToStart(int32_t clicks);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTable* table;
	static $String* FIRST;
	static $String* SECOND;
	static $String* ALL;
	static ::java::awt::Robot* robot;
};

#pragma pop_macro("ALL")
#pragma pop_macro("FIRST")
#pragma pop_macro("SECOND")

#endif // _bug6263446_h_