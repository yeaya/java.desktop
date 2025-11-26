#ifndef _Test8007563_h_
#define _Test8007563_h_
//$ class Test8007563
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("LATCH")
#undef LATCH
#pragma push_macro("LIST")
#undef LIST
#pragma push_macro("ROBOT")
#undef ROBOT

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
		class UIManager$LookAndFeelInfo;
	}
}

class $export Test8007563 : public ::java::lang::Runnable {
	$class(Test8007563, 0, ::java::lang::Runnable)
public:
	Test8007563();
	void init$();
	static void addOpaqueError(bool opaque);
	static void main($StringArray* args);
	virtual void run() override;
	static bool updateLookAndFeel();
	static ::java::util::ArrayList* LIST;
	static $Array<::javax::swing::UIManager$LookAndFeelInfo>* INFO;
	static ::java::util::concurrent::CountDownLatch* LATCH;
	static ::java::awt::Robot* ROBOT;
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JTabbedPane* pane = nullptr;
};

#pragma pop_macro("INFO")
#pragma pop_macro("LATCH")
#pragma pop_macro("LIST")
#pragma pop_macro("ROBOT")

#endif // _Test8007563_h_