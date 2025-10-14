#ifndef _TableViewLayoutTest_h_
#define _TableViewLayoutTest_h_
//$ class TableViewLayoutTest
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}

class $export TableViewLayoutTest : public ::javax::swing::JFrame {
	$class(TableViewLayoutTest, 0, ::javax::swing::JFrame)
public:
	TableViewLayoutTest();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	using ::javax::swing::JFrame::list;
	void init$();
	static void hitKey(::java::awt::Robot* robot, int32_t k);
	void initCodeBug();
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static double yCaret;
	static double xCaret;
	static int32_t tn;
	static double yCarFLTab;
	static double yCarLLTab;
	static double xCarBTab;
	static double xCarETab;
	static double dyCarFLTab;
	static double dyCarLLTab;
	static double dxCarBTab;
	static double dxCarETab;
	static ::javax::swing::JEditorPane* edit;
	static ::TableViewLayoutTest* frame;
	static $String* Prop;
	static bool isTabWrong;
	static ::java::lang::Boolean* isI18n;
};

#endif // _TableViewLayoutTest_h_