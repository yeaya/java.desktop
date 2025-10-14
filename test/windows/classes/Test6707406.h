#ifndef _Test6707406_h_
#define _Test6707406_h_
//$ class Test6707406
//$ extends javax.swing.plaf.basic.BasicColorChooserUI
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

class $export Test6707406 : public ::javax::swing::plaf::basic::BasicColorChooserUI, public ::java::beans::PropertyChangeListener {
	$class(Test6707406, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicColorChooserUI, ::java::beans::PropertyChangeListener)
public:
	Test6707406();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static void main($StringArray* args);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	static void test();
	virtual $String* toString() override;
};

#endif // _Test6707406_h_