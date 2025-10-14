#ifndef _bug6726866_h_
#define _bug6726866_h_
//$ class bug6726866
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Window;
	}
}

class $export bug6726866 : public ::javax::swing::JApplet {
	$class(bug6726866, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug6726866();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	static void setWindowNonOpaque(::java::awt::Window* window);
};

#endif // _bug6726866_h_