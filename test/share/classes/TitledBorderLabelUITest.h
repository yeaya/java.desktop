#ifndef _TitledBorderLabelUITest_h_
#define _TitledBorderLabelUITest_h_
//$ class TitledBorderLabelUITest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIZE")
#undef SIZE

namespace javax {
	namespace swing {
		class JComponent;
	}
}

class $export TitledBorderLabelUITest : public ::java::lang::Object {
	$class(TitledBorderLabelUITest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TitledBorderLabelUITest();
	void init$();
	static void createAndShowGUI();
	static void main($StringArray* args);
	static void paintToImage(::javax::swing::JComponent* comp);
	static const int32_t SIZE = 50;
	static bool useLAF;
};

#pragma pop_macro("SIZE")

#endif // _TitledBorderLabelUITest_h_