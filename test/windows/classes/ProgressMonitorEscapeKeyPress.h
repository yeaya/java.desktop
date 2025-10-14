#ifndef _ProgressMonitorEscapeKeyPress_h_
#define _ProgressMonitorEscapeKeyPress_h_
//$ class ProgressMonitorEscapeKeyPress
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestThread;
namespace javax {
	namespace swing {
		class JFrame;
		class ProgressMonitor;
	}
}

class $export ProgressMonitorEscapeKeyPress : public ::java::lang::Object {
	$class(ProgressMonitorEscapeKeyPress, 0, ::java::lang::Object)
public:
	ProgressMonitorEscapeKeyPress();
	void init$();
	static void createTestUI();
	static void disposeTestUI();
	static void lambda$disposeTestUI$0();
	static void main($StringArray* args);
	static ::javax::swing::ProgressMonitor* monitor;
	static int32_t counter;
	static ::TestThread* robotThread;
	static ::javax::swing::JFrame* frame;
};

#endif // _ProgressMonitorEscapeKeyPress_h_