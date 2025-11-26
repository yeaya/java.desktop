#ifndef _javax_swing_RowSorter_h_
#define _javax_swing_RowSorter_h_
//$ class javax.swing.RowSorter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
			class RowSorterEvent;
			class RowSorterListener;
		}
	}
}

namespace javax {
	namespace swing {

class $import RowSorter : public ::java::lang::Object {
	$class(RowSorter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RowSorter();
	void init$();
	virtual void addRowSorterListener(::javax::swing::event::RowSorterListener* l);
	virtual void allRowsChanged() {}
	virtual int32_t convertRowIndexToModel(int32_t index) {return 0;}
	virtual int32_t convertRowIndexToView(int32_t index) {return 0;}
	virtual void fireRowSorterChanged($ints* lastRowIndexToModel);
	virtual void fireRowSorterChanged(::javax::swing::event::RowSorterEvent* event);
	virtual void fireSortOrderChanged();
	virtual $Object* getModel() {return nullptr;}
	virtual int32_t getModelRowCount() {return 0;}
	virtual ::java::util::List* getSortKeys() {return nullptr;}
	virtual int32_t getViewRowCount() {return 0;}
	virtual void modelStructureChanged() {}
	virtual void removeRowSorterListener(::javax::swing::event::RowSorterListener* l);
	virtual void rowsDeleted(int32_t firstRow, int32_t endRow) {}
	virtual void rowsInserted(int32_t firstRow, int32_t endRow) {}
	virtual void rowsUpdated(int32_t firstRow, int32_t endRow) {}
	virtual void rowsUpdated(int32_t firstRow, int32_t endRow, int32_t column) {}
	virtual void setSortKeys(::java::util::List* keys) {}
	virtual void toggleSortOrder(int32_t column) {}
	::javax::swing::event::EventListenerList* listenerList = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowSorter_h_