#ifndef _Test4247606_h_
#define _Test4247606_h_
//$ class Test4247606
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JPanel;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

class $export Test4247606 : public ::javax::swing::JApplet {
	$class(Test4247606, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	Test4247606();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	static ::javax::swing::JPanel* create(::javax::swing::JComponent* component, ::javax::swing::border::Border* border);
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _Test4247606_h_