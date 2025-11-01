#ifndef _javax_swing_plaf_basic_BasicComboPopup$EmptyListModelClass_h_
#define _javax_swing_plaf_basic_BasicComboPopup$EmptyListModelClass_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$EmptyListModelClass
//$ extends javax.swing.ListModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/ListModel.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataListener;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicComboPopup$EmptyListModelClass : public ::javax::swing::ListModel, public ::java::io::Serializable {
	$class(BasicComboPopup$EmptyListModelClass, $NO_CLASS_INIT, ::javax::swing::ListModel, ::java::io::Serializable)
public:
	BasicComboPopup$EmptyListModelClass();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$EmptyListModelClass_h_