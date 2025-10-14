#ifndef _Test6348456_h_
#define _Test6348456_h_
//$ class Test6348456
//$ extends javax.swing.JApplet
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/JApplet.h>

#pragma push_macro("BLACK")
#undef BLACK
#pragma push_macro("WHITE")
#undef WHITE

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JColorChooser;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class DefaultColorSelectionModel;
		}
	}
}

class $export Test6348456 : public ::javax::swing::JApplet, public ::java::awt::event::ActionListener {
	$class(Test6348456, 0, ::javax::swing::JApplet, ::java::awt::event::ActionListener)
public:
	Test6348456();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	using ::javax::swing::JApplet::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	virtual $String* toString() override;
	static ::javax::swing::colorchooser::DefaultColorSelectionModel* WHITE;
	static ::javax::swing::colorchooser::DefaultColorSelectionModel* BLACK;
	::javax::swing::JColorChooser* chooser = nullptr;
};

#pragma pop_macro("BLACK")
#pragma pop_macro("WHITE")

#endif // _Test6348456_h_