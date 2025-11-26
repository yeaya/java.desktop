#ifndef _bug6462008_h_
#define _bug6462008_h_
//$ class bug6462008
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DONT_CARE")
#undef DONT_CARE

namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class DefaultListModel;
		class JFrame;
		class JList;
	}
}

class $export bug6462008 : public ::java::lang::Object {
	$class(bug6462008, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6462008();
	void init$();
	static void checkSelection($ints* sels);
	static void checkSelectionAL(int32_t anchor, int32_t lead, $ints* sels);
	static void checkSelectionNonThreadSafe(int32_t anchor, int32_t lead, $ints* sels);
	static ::java::awt::Point* clickItem4();
	static void createAndShowGUI();
	static ::javax::swing::DefaultListModel* getModel();
	static void lambda$main$0();
	static void main($StringArray* args);
	static void resetList();
	static void scrollDownExtendSelection();
	static void setAnchorLead(int32_t anchorLeadValue);
	static void setAnchorLeadNonThreadSafe();
	static void setSelectionInterval(int32_t index0, int32_t index1);
	static void setSelectionMode(int32_t selectionMode);
	static void testListSelection();
	static const int32_t DONT_CARE = (-2);
	static int32_t anchorLead;
	static bool isAquaLAF;
	static int32_t controlKey;
	static ::javax::swing::JList* list;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("DONT_CARE")

#endif // _bug6462008_h_