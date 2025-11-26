#ifndef _JComboBoxPopupLocation_h_
#define _JComboBoxPopupLocation_h_
//$ class JComboBoxPopupLocation
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PROPERTY_NAME")
#undef PROPERTY_NAME
#pragma push_macro("SIZE")
#undef SIZE

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export JComboBoxPopupLocation : public ::java::lang::Object {
	$class(JComboBoxPopupLocation, 0, ::java::lang::Object)
public:
	JComboBoxPopupLocation();
	void init$();
	static void dispose();
	static void lambda$dispose$2();
	static void lambda$step$0(::java::awt::Point* point);
	static void lambda$validate$3(::javax::swing::JComboBox* comboBox);
	static void main($StringArray* args);
	static void setup(::java::awt::Point* tmp);
	static void step($Array<::java::awt::GraphicsDevice>* sds, ::javax::swing::UIManager$LookAndFeelInfo* lookAndFeelItem);
	static void test(::javax::swing::JComboBox* comboBox);
	static void validate(::javax::swing::JComboBox* comboBox);
	static const int32_t SIZE = 300;
	static $String* PROPERTY_NAME;
	static $volatile(::java::awt::Robot*) robot;
	static $volatile(::javax::swing::JComboBox*) comboBox;
	static $volatile(::javax::swing::JFrame*) frame;
};

#pragma pop_macro("PROPERTY_NAME")
#pragma pop_macro("SIZE")

#endif // _JComboBoxPopupLocation_h_