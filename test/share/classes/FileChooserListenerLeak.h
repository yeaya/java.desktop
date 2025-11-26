#ifndef _FileChooserListenerLeak_h_
#define _FileChooserListenerLeak_h_
//$ class FileChooserListenerLeak
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export FileChooserListenerLeak : public ::java::lang::Object {
	$class(FileChooserListenerLeak, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileChooserListenerLeak();
	void init$();
	static void checkListenersCount(::java::awt::Component* comp);
	static void lambda$main$0();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test($ObjectArray* listeners);
};

#endif // _FileChooserListenerLeak_h_