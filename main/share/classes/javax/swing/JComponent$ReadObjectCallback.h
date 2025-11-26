#ifndef _javax_swing_JComponent$ReadObjectCallback_h_
#define _javax_swing_JComponent$ReadObjectCallback_h_
//$ class javax.swing.JComponent$ReadObjectCallback
//$ extends java.io.ObjectInputValidation

#include <java/io/ObjectInputValidation.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class JComponent$ReadObjectCallback : public ::java::io::ObjectInputValidation {
	$class(JComponent$ReadObjectCallback, $NO_CLASS_INIT, ::java::io::ObjectInputValidation)
public:
	JComponent$ReadObjectCallback();
	void init$(::javax::swing::JComponent* this$0, ::java::io::ObjectInputStream* s);
	void registerComponent(::javax::swing::JComponent* c);
	virtual void validateObject() override;
	::javax::swing::JComponent* this$0 = nullptr;
	::java::util::Vector* roots = nullptr;
	::java::io::ObjectInputStream* inputStream = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$ReadObjectCallback_h_