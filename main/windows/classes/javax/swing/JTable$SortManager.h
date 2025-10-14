#ifndef _javax_swing_JTable$SortManager_h_
#define _javax_swing_JTable$SortManager_h_
//$ class javax.swing.JTable$SortManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JTable;
		class JTable$ModelChange;
		class ListSelectionModel;
		class RowSorter;
		class SizeSequence;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
			class RowSorterEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JTable$SortManager : public ::java::lang::Object {
	$class(JTable$SortManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTable$SortManager();
	void init$(::javax::swing::JTable* this$0, ::javax::swing::RowSorter* sorter);
	void allChanged();
	void cacheModelSelection(::javax::swing::event::RowSorterEvent* sortEvent);
	void cacheSelection(::javax::swing::event::RowSorterEvent* sortEvent, ::javax::swing::JTable$ModelChange* change);
	void dispose();
	void prepareForChange(::javax::swing::event::RowSorterEvent* sortEvent, ::javax::swing::JTable$ModelChange* change);
	void processChange(::javax::swing::event::RowSorterEvent* sortEvent, ::javax::swing::JTable$ModelChange* change, bool sorterChanged);
	void restoreSelection(::javax::swing::JTable$ModelChange* change);
	void setViewRowHeight(int32_t viewIndex, int32_t rowHeight);
	void setViewRowHeightsFromModel();
	void viewSelectionChanged(::javax::swing::event::ListSelectionEvent* e);
	::javax::swing::JTable* this$0 = nullptr;
	::javax::swing::RowSorter* sorter = nullptr;
	::javax::swing::ListSelectionModel* modelSelection = nullptr;
	int32_t modelLeadIndex = 0;
	bool syncingSelection = false;
	$ints* lastModelSelection = nullptr;
	::javax::swing::SizeSequence* modelRowSizes = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$SortManager_h_