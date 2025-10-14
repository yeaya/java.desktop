#ifndef _javax_swing_DefaultComboBoxModel_h_
#define _javax_swing_DefaultComboBoxModel_h_
//$ class javax.swing.DefaultComboBoxModel
//$ extends javax.swing.AbstractListModel
//$ implements javax.swing.MutableComboBoxModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/MutableComboBoxModel.h>

namespace java {
	namespace util {
		class Collection;
		class Vector;
	}
}

namespace javax {
	namespace swing {

class $import DefaultComboBoxModel : public ::javax::swing::AbstractListModel, public ::javax::swing::MutableComboBoxModel {
	$class(DefaultComboBoxModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel, ::javax::swing::MutableComboBoxModel)
public:
	DefaultComboBoxModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($ObjectArray* items);
	void init$(::java::util::Vector* v);
	virtual void addAll(::java::util::Collection* c);
	virtual void addAll(int32_t index, ::java::util::Collection* c);
	virtual void addElement(Object$* anObject) override;
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getIndexOf(Object$* anObject);
	virtual $Object* getSelectedItem() override;
	virtual int32_t getSize() override;
	virtual void insertElementAt(Object$* anObject, int32_t index) override;
	virtual void removeAllElements();
	virtual void removeElement(Object$* anObject) override;
	virtual void removeElementAt(int32_t index) override;
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) override;
	virtual void setSelectedItem(Object$* anObject) override;
	virtual $String* toString() override;
	::java::util::Vector* objects = nullptr;
	$Object* selectedObject = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultComboBoxModel_h_