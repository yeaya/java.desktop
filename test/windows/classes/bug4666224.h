#ifndef _bug4666224_h_
#define _bug4666224_h_
//$ class bug4666224
//$ extends javax.swing.JApplet

#include <java/lang/Array.h>
#include <javax/swing/JApplet.h>

namespace javax {
	namespace swing {
		class ActionMap;
		class InputMap;
		class JPanel;
		class JTabbedPane;
	}
}

class $export bug4666224 : public ::javax::swing::JApplet {
	$class(bug4666224, 0, ::javax::swing::JApplet)
public:
	bug4666224();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	using ::javax::swing::JApplet::list;
	void init$();
	virtual ::javax::swing::ActionMap* createActionMap();
	virtual ::javax::swing::InputMap* createInputMap();
	virtual void destroy() override;
	virtual void init() override;
	void lambda$new$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	virtual void start() override;
	static $ints* placements;
	::javax::swing::JTabbedPane* tabPane = nullptr;
	::javax::swing::JPanel* mainPanel = nullptr;
};

#endif // _bug4666224_h_