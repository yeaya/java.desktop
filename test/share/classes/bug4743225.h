#ifndef _bug4743225_h_
#define _bug4743225_h_
//$ class bug4743225
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace javax {
	namespace swing {
		class JComboBox;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboPopup;
			}
		}
	}
}

class $export bug4743225 : public ::javax::swing::JFrame {
	$class(bug4743225, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	bug4743225();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	static ::javax::swing::plaf::basic::BasicComboPopup* getPopup();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static ::javax::swing::JComboBox* cb;
	static $volatile(bool) flag;
};

#endif // _bug4743225_h_