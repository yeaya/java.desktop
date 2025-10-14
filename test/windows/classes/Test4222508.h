#ifndef _Test4222508_h_
#define _Test4222508_h_
//$ class Test4222508
//$ extends javax.swing.JApplet
//$ implements java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>
#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JColorChooser;
	}
}

class $export Test4222508 : public ::javax::swing::JApplet, public ::java::awt::event::ItemListener {
	$class(Test4222508, $NO_CLASS_INIT, ::javax::swing::JApplet, ::java::awt::event::ItemListener)
public:
	Test4222508();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void init() override;
	virtual void itemStateChanged(::java::awt::event::ItemEvent* event) override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	virtual $String* toString() override;
	::javax::swing::JCheckBox* checkbox = nullptr;
	::javax::swing::JColorChooser* chooser = nullptr;
};

#endif // _Test4222508_h_