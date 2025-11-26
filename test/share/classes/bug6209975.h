#ifndef _bug6209975_h_
#define _bug6209975_h_
//$ class bug6209975
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RO1")
#undef RO1
#pragma push_macro("RO2")
#undef RO2

class bug6209975$ReturnObject;
namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JMenu;
	}
}

class $export bug6209975 : public ::java::lang::Object {
	$class(bug6209975, 0, ::java::lang::Object)
public:
	bug6209975();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::Point* getButtonClickPoint();
	static ::java::awt::Point* getMenuClickPoint();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::bug6209975$ReturnObject* RO1;
	static ::bug6209975$ReturnObject* RO2;
	static ::javax::swing::JMenu* menu;
	static ::javax::swing::JButton* button;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("RO1")
#pragma pop_macro("RO2")

#endif // _bug6209975_h_