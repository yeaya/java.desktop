#ifndef _javax_swing_SingleSelectionModel_h_
#define _javax_swing_SingleSelectionModel_h_
//$ interface javax.swing.SingleSelectionModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}

namespace javax {
	namespace swing {

class $export SingleSelectionModel : public ::java::lang::Object {
	$interface(SingleSelectionModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addChangeListener(::javax::swing::event::ChangeListener* listener) {}
	virtual void clearSelection() {}
	virtual int32_t getSelectedIndex() {return 0;}
	virtual bool isSelected() {return false;}
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* listener) {}
	virtual void setSelectedIndex(int32_t index) {}
};

	} // swing
} // javax

#endif // _javax_swing_SingleSelectionModel_h_