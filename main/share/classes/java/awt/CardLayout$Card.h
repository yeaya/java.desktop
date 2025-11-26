#ifndef _java_awt_CardLayout$Card_h_
#define _java_awt_CardLayout$Card_h_
//$ class java.awt.CardLayout$Card
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class CardLayout;
		class Component;
	}
}

namespace java {
	namespace awt {

class $export CardLayout$Card : public ::java::io::Serializable {
	$class(CardLayout$Card, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CardLayout$Card();
	void init$(::java::awt::CardLayout* this$0, $String* cardName, ::java::awt::Component* cardComponent);
	::java::awt::CardLayout* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x5C2731B0BB6BD6AE;
	$String* name = nullptr;
	::java::awt::Component* comp = nullptr;
};

	} // awt
} // java

#endif // _java_awt_CardLayout$Card_h_