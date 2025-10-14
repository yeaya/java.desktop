#ifndef _FastTooltipSwitchIAE_h_
#define _FastTooltipSwitchIAE_h_
//$ class FastTooltipSwitchIAE
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export FastTooltipSwitchIAE : public ::java::lang::Object {
	$class(FastTooltipSwitchIAE, 0, ::java::lang::Object)
public:
	FastTooltipSwitchIAE();
	void init$();
	static void doTest();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static ::java::awt::Dimension* oneByOneSize;
};

#endif // _FastTooltipSwitchIAE_h_