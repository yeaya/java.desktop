#ifndef _javax_swing_JList$4_h_
#define _javax_swing_JList$4_h_
//$ class javax.swing.JList$4
//$ extends javax.swing.AbstractListModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>

namespace javax {
	namespace swing {
		class JList;
	}
}

namespace javax {
	namespace swing {

class JList$4 : public ::javax::swing::AbstractListModel {
	$class(JList$4, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	JList$4();
	void init$(::javax::swing::JList* this$0, $ObjectArray* val$listData);
	virtual $Object* getElementAt(int32_t i) override;
	virtual int32_t getSize() override;
	::javax::swing::JList* this$0 = nullptr;
	$ObjectArray* val$listData = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JList$4_h_