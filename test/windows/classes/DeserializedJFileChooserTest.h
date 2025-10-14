#ifndef _DeserializedJFileChooserTest_h_
#define _DeserializedJFileChooserTest_h_
//$ class DeserializedJFileChooserTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JButton;
		class JFileChooser;
		class UIManager$LookAndFeelInfo;
	}
}

class $export DeserializedJFileChooserTest : public ::java::lang::Object {
	$class(DeserializedJFileChooserTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeserializedJFileChooserTest();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static $volatile(::javax::swing::JButton*) defaultSet;
	static ::javax::swing::JFileChooser* deserialized;
};

#endif // _DeserializedJFileChooserTest_h_