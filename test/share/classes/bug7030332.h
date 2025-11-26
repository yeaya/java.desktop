#ifndef _bug7030332_h_
#define _bug7030332_h_
//$ class bug7030332
//$ extends javax.swing.JApplet

#include <java/lang/Array.h>
#include <javax/swing/JApplet.h>

#pragma push_macro("HTML_SAMPLES")
#undef HTML_SAMPLES

namespace java {
	namespace awt {
		class Container;
	}
}

class $export bug7030332 : public ::javax::swing::JApplet {
	$class(bug7030332, 0, ::javax::swing::JApplet)
public:
	bug7030332();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	using ::javax::swing::JApplet::list;
	void init$();
	static ::java::awt::Container* createContentPane();
	virtual void init() override;
	static void main($StringArray* args);
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	static $StringArray* HTML_SAMPLES;
};

#pragma pop_macro("HTML_SAMPLES")

#endif // _bug7030332_h_