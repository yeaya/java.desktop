#ifndef _Bug8161483_h_
#define _Bug8161483_h_
//$ class Bug8161483
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

class $export Bug8161483 : public ::javax::swing::JFrame {
	$class(Bug8161483, 0, ::javax::swing::JFrame)
public:
	Bug8161483();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	using ::javax::swing::JFrame::list;
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static ::javax::swing::JFrame* frame;
	static $volatile(::java::lang::Exception*) exception;
	::javax::swing::JList* countryList = nullptr;
};

#endif // _Bug8161483_h_