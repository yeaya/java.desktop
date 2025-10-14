#ifndef _bug4644444_h_
#define _bug4644444_h_
//$ class bug4644444
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

namespace javax {
	namespace swing {
		class JButton;
		class JPanel;
	}
}

class $export bug4644444 : public ::javax::swing::JApplet {
	$class(bug4644444, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4644444();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void destroy() override;
	virtual void init() override;
	void lambda$new$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	virtual void start() override;
	::javax::swing::JPanel* panel = nullptr;
	::javax::swing::JButton* button = nullptr;
};

#endif // _bug4644444_h_