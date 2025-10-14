#ifndef _WrongAltProcessing_h_
#define _WrongAltProcessing_h_
//$ class WrongAltProcessing
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextField;
	}
}

class $export WrongAltProcessing : public ::java::lang::Object {
	$class(WrongAltProcessing, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WrongAltProcessing();
	void init$();
	static void clickWindowsTitle(::javax::swing::JFrame* frame);
	static void createWindows();
	static void initRobot();
	static void main($StringArray* args);
	static void pressTab();
	static void printABCD();
	static void runScript();
	static void verify();
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* firstFrame;
	static ::javax::swing::JFrame* secondFrame;
	static ::javax::swing::JTextField* mainFrameTf1;
	static ::javax::swing::JTextField* mainFrameTf2;
	static ::javax::swing::JTextField* secondFrameTf;
};

#endif // _WrongAltProcessing_h_