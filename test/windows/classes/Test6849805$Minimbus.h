#ifndef _Test6849805$Minimbus_h_
#define _Test6849805$Minimbus_h_
//$ class Test6849805$Minimbus
//$ extends javax.swing.plaf.nimbus.NimbusLookAndFeel

#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>

namespace java {
	namespace awt {
		class Color;
	}
}

class $export Test6849805$Minimbus : public ::javax::swing::plaf::nimbus::NimbusLookAndFeel {
	$class(Test6849805$Minimbus, $NO_CLASS_INIT, ::javax::swing::plaf::nimbus::NimbusLookAndFeel)
public:
	Test6849805$Minimbus();
	void init$();
	virtual void test(::java::awt::Color* c1, ::java::awt::Color* c2, float f);
};

#endif // _Test6849805$Minimbus_h_