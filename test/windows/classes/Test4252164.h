#ifndef _Test4252164_h_
#define _Test4252164_h_
//$ class Test4252164
//$ extends javax.swing.JApplet
//$ implements java.awt.event.MouseWheelListener

#include <java/awt/event/MouseWheelListener.h>
#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JLabel;
		class JPanel;
	}
}

class $export Test4252164 : public ::javax::swing::JApplet, public ::java::awt::event::MouseWheelListener {
	$class(Test4252164, $NO_CLASS_INIT, ::javax::swing::JApplet, ::java::awt::event::MouseWheelListener)
public:
	Test4252164();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	::javax::swing::JPanel* createUI();
	virtual void init() override;
	using ::javax::swing::JApplet::list;
	virtual void mouseWheelMoved(::java::awt::event::MouseWheelEvent* event) override;
	using ::javax::swing::JApplet::update;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	virtual $String* toString() override;
	void update(int32_t thickness);
	int32_t thickness = 0;
	::javax::swing::JLabel* rounded = nullptr;
	::javax::swing::JLabel* straight = nullptr;
};

#endif // _Test4252164_h_