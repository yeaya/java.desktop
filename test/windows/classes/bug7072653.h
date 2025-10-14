#ifndef _bug7072653_h_
#define _bug7072653_h_
//$ class bug7072653
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
	}
}

class $export bug7072653 : public ::java::lang::Object {
	$class(bug7072653, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7072653();
	void init$();
	static void executeCase($String* lookAndFeelString, ::java::awt::GraphicsDevice* sd);
	static void lambda$executeCase$0($String* lookAndFeelString, ::java::awt::GraphicsDevice* sd);
	static void main($StringArray* args);
	static void setup($String* lookAndFeelString, ::java::awt::GraphicsDevice* sd);
	static void test();
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JComboBox* combobox;
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
};

#endif // _bug7072653_h_