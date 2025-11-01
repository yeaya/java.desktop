#ifndef _Test4759934_h_
#define _Test4759934_h_
//$ class Test4759934
//$ extends javax.swing.JApplet
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <javax/swing/JApplet.h>

#pragma push_macro("CMD_CHOOSER")
#undef CMD_CHOOSER
#pragma push_macro("CMD_DIALOG")
#undef CMD_DIALOG

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
		class JFrame;
	}
}

class $export Test4759934 : public ::javax::swing::JApplet, public ::java::awt::event::ActionListener {
	$class(Test4759934, 0, ::javax::swing::JApplet, ::java::awt::event::ActionListener)
public:
	Test4759934();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	using ::javax::swing::JApplet::show;
	void show(::java::awt::Window* window, $String* command);
	virtual $String* toString() override;
	static $String* CMD_DIALOG;
	static $String* CMD_CHOOSER;
	::javax::swing::JFrame* frame = nullptr;
};

#pragma pop_macro("CMD_CHOOSER")
#pragma pop_macro("CMD_DIALOG")

#endif // _Test4759934_h_