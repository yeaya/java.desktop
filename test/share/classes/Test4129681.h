#ifndef _Test4129681_h_
#define _Test4129681_h_
//$ class Test4129681
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
		class JLabel;
	}
}

class $export Test4129681 : public ::javax::swing::JApplet, public ::java::awt::event::ItemListener {
	$class(Test4129681, $NO_CLASS_INIT, ::javax::swing::JApplet, ::java::awt::event::ItemListener)
public:
	Test4129681();
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
	::javax::swing::JLabel* label = nullptr;
};

#endif // _Test4129681_h_