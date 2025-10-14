#ifndef _bug7068740_h_
#define _bug7068740_h_
//$ class bug7068740
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

class $export bug7068740 : public ::javax::swing::JFrame {
	$class(bug7068740, 0, ::javax::swing::JFrame)
public:
	bug7068740();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	using ::javax::swing::JFrame::list;
	void init$();
	static void doTest();
	static int32_t getSelectedRow();
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	static void setUp();
	using ::javax::swing::JFrame::show;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JTable* table;
};

#endif // _bug7068740_h_