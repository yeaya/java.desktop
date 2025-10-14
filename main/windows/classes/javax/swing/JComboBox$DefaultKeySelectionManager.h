#ifndef _javax_swing_JComboBox$DefaultKeySelectionManager_h_
#define _javax_swing_JComboBox$DefaultKeySelectionManager_h_
//$ class javax.swing.JComboBox$DefaultKeySelectionManager
//$ extends javax.swing.JComboBox$KeySelectionManager
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/JComboBox$KeySelectionManager.h>

namespace javax {
	namespace swing {
		class ComboBoxModel;
		class JComboBox;
	}
}

namespace javax {
	namespace swing {

class $export JComboBox$DefaultKeySelectionManager : public ::javax::swing::JComboBox$KeySelectionManager, public ::java::io::Serializable {
	$class(JComboBox$DefaultKeySelectionManager, $NO_CLASS_INIT, ::javax::swing::JComboBox$KeySelectionManager, ::java::io::Serializable)
public:
	JComboBox$DefaultKeySelectionManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComboBox* this$0);
	virtual int32_t selectionForKey(char16_t aKey, ::javax::swing::ComboBoxModel* aModel) override;
	virtual $String* toString() override;
	::javax::swing::JComboBox* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$DefaultKeySelectionManager_h_