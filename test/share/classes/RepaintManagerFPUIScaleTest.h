#ifndef _RepaintManagerFPUIScaleTest_h_
#define _RepaintManagerFPUIScaleTest_h_
//$ class RepaintManagerFPUIScaleTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COLORS")
#undef COLORS
#pragma push_macro("INSTRUCTIONS")
#undef INSTRUCTIONS

namespace java {
	namespace awt {
		class Color;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
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
		class JComponent;
		class JFrame;
	}
}

class $export RepaintManagerFPUIScaleTest : public ::java::lang::Object {
	$class(RepaintManagerFPUIScaleTest, 0, ::java::lang::Object)
public:
	RepaintManagerFPUIScaleTest();
	void init$();
	static ::javax::swing::JComponent* createComponent();
	static ::java::awt::Image* createTestImage(int32_t width, int32_t height, int32_t colorindex);
	static ::java::awt::Image* createTestImage(int32_t w, int32_t h, double scaleX, double scaleY, ::java::awt::Color* color);
	static void createUI();
	static void lambda$createUI$0(::javax::swing::JFrame* mainFrame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
	static $Array<::java::awt::Color>* COLORS;
};

#pragma pop_macro("COLORS")
#pragma pop_macro("INSTRUCTIONS")

#endif // _RepaintManagerFPUIScaleTest_h_