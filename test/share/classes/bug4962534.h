#ifndef _bug4962534_h_
#define _bug4962534_h_
//$ class bug4962534
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOCK")
#undef LOCK

namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JLayeredPane;
	}
}

class $export bug4962534 : public ::java::lang::Object {
	$class(bug4962534, 0, ::java::lang::Object)
public:
	bug4962534();
	void init$();
	bool checkFrameIsOutOfScreenEDT();
	void createAndShowGUI();
	int32_t getJFrameWidthEDT();
	virtual void init();
	static void lambda$main$0();
	static void main($StringArray* args);
	void setFramePosEDT();
	void setJLayeredPaneEDT();
	void setNewFrameLocationEDT();
	void setTitleComponentEDT();
	virtual void start();
	::java::awt::Robot* robot = nullptr;
	$volatile(::java::awt::Point*) framePosition = nullptr;
	$volatile(::java::awt::Point*) newFrameLocation = nullptr;
	static ::javax::swing::JFrame* frame;
	::java::awt::Rectangle* gcBounds = nullptr;
	::java::awt::Component* titleComponent = nullptr;
	::javax::swing::JLayeredPane* lPane = nullptr;
	$volatile(bool) titleFound = false;
	static $Object* LOCK;
};

#pragma pop_macro("LOCK")

#endif // _bug4962534_h_