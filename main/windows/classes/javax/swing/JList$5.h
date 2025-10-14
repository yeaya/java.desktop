#ifndef _javax_swing_JList$5_h_
#define _javax_swing_JList$5_h_
//$ class javax.swing.JList$5
//$ extends javax.swing.AbstractListModel

#include <javax/swing/AbstractListModel.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

namespace javax {
	namespace swing {

class JList$5 : public ::javax::swing::AbstractListModel {
	$class(JList$5, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	JList$5();
	void init$(::javax::swing::JList* this$0, ::java::util::Vector* val$listData);
	virtual $Object* getElementAt(int32_t i) override;
	virtual int32_t getSize() override;
	::javax::swing::JList* this$0 = nullptr;
	::java::util::Vector* val$listData = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JList$5_h_