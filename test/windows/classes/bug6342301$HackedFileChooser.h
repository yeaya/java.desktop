#ifndef _bug6342301$HackedFileChooser_h_
#define _bug6342301$HackedFileChooser_h_
//$ class bug6342301$HackedFileChooser
//$ extends javax.swing.JFileChooser

#include <javax/swing/JFileChooser.h>

namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

class bug6342301$HackedFileChooser : public ::javax::swing::JFileChooser {
	$class(bug6342301$HackedFileChooser, $NO_CLASS_INIT, ::javax::swing::JFileChooser)
public:
	bug6342301$HackedFileChooser();
	using ::javax::swing::JFileChooser::getName;
	using ::javax::swing::JFileChooser::contains;
	using ::javax::swing::JFileChooser::enable;
	using ::javax::swing::JFileChooser::getBounds;
	using ::javax::swing::JFileChooser::getSize;
	using ::javax::swing::JFileChooser::getLocation;
	using ::javax::swing::JFileChooser::firePropertyChange;
	using ::javax::swing::JFileChooser::add;
	using ::javax::swing::JFileChooser::getMousePosition;
	void init$();
	using ::javax::swing::JFileChooser::requestFocus;
	using ::javax::swing::JFileChooser::requestFocusInWindow;
	using ::javax::swing::JFileChooser::repaint;
	using ::javax::swing::JFileChooser::remove;
	using ::javax::swing::JFileChooser::list;
	virtual void setUI(::javax::swing::plaf::ComponentUI* newUI) override;
};

#endif // _bug6342301$HackedFileChooser_h_