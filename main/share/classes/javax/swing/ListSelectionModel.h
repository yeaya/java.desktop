#ifndef _javax_swing_ListSelectionModel_h_
#define _javax_swing_ListSelectionModel_h_
//$ interface javax.swing.ListSelectionModel
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MULTIPLE_INTERVAL_SELECTION")
#undef MULTIPLE_INTERVAL_SELECTION
#pragma push_macro("SINGLE_INTERVAL_SELECTION")
#undef SINGLE_INTERVAL_SELECTION
#pragma push_macro("SINGLE_SELECTION")
#undef SINGLE_SELECTION

namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionListener;
		}
	}
}

namespace javax {
	namespace swing {

class $export ListSelectionModel : public ::java::lang::Object {
	$interface(ListSelectionModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addListSelectionListener(::javax::swing::event::ListSelectionListener* x) {}
	virtual void addSelectionInterval(int32_t index0, int32_t index1) {}
	virtual void clearSelection() {}
	virtual int32_t getAnchorSelectionIndex() {return 0;}
	virtual int32_t getLeadSelectionIndex() {return 0;}
	virtual int32_t getMaxSelectionIndex() {return 0;}
	virtual int32_t getMinSelectionIndex() {return 0;}
	virtual $ints* getSelectedIndices();
	virtual int32_t getSelectedItemsCount();
	virtual int32_t getSelectionMode() {return 0;}
	virtual bool getValueIsAdjusting() {return false;}
	virtual void insertIndexInterval(int32_t index, int32_t length, bool before) {}
	virtual bool isSelectedIndex(int32_t index) {return false;}
	virtual bool isSelectionEmpty() {return false;}
	virtual void removeIndexInterval(int32_t index0, int32_t index1) {}
	virtual void removeListSelectionListener(::javax::swing::event::ListSelectionListener* x) {}
	virtual void removeSelectionInterval(int32_t index0, int32_t index1) {}
	virtual void setAnchorSelectionIndex(int32_t index) {}
	virtual void setLeadSelectionIndex(int32_t index) {}
	virtual void setSelectionInterval(int32_t index0, int32_t index1) {}
	virtual void setSelectionMode(int32_t selectionMode) {}
	virtual void setValueIsAdjusting(bool valueIsAdjusting) {}
	static const int32_t SINGLE_SELECTION = 0;
	static const int32_t SINGLE_INTERVAL_SELECTION = 1;
	static const int32_t MULTIPLE_INTERVAL_SELECTION = 2;
};

	} // swing
} // javax

#pragma pop_macro("MULTIPLE_INTERVAL_SELECTION")
#pragma pop_macro("SINGLE_INTERVAL_SELECTION")
#pragma pop_macro("SINGLE_SELECTION")

#endif // _javax_swing_ListSelectionModel_h_