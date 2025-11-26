#ifndef _javax_swing_JList$2_h_
#define _javax_swing_JList$2_h_
//$ class javax.swing.JList$2
//$ extends javax.swing.AbstractListModel

#include <javax/swing/AbstractListModel.h>

namespace java {
	namespace util {
		class Vector;
	}
}

namespace javax {
	namespace swing {

class JList$2 : public ::javax::swing::AbstractListModel {
	$class(JList$2, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	JList$2();
	void init$(::java::util::Vector* val$listData);
	virtual $Object* getElementAt(int32_t i) override;
	virtual int32_t getSize() override;
	::java::util::Vector* val$listData = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JList$2_h_