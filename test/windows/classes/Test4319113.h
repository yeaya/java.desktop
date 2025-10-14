#ifndef _Test4319113_h_
#define _Test4319113_h_
//$ class Test4319113
//$ extends javax.swing.JApplet
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
	}
}

class $export Test4319113 : public ::javax::swing::JApplet, public ::java::awt::event::ActionListener {
	$class(Test4319113, $NO_CLASS_INIT, ::javax::swing::JApplet, ::java::awt::event::ActionListener)
public:
	Test4319113();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* actionEvent) override;
	virtual void init() override;
	void lambda$init$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	using ::javax::swing::JApplet::show;
	void show(::java::awt::Window* window);
	virtual $String* toString() override;
	static void updateWindowTreeUI(::java::awt::Window* window);
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JComboBox* cbPlaf = nullptr;
};

#endif // _Test4319113_h_