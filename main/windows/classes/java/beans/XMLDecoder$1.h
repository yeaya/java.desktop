#ifndef _java_beans_XMLDecoder$1_h_
#define _java_beans_XMLDecoder$1_h_
//$ class java.beans.XMLDecoder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace beans {
		class XMLDecoder;
	}
}

namespace java {
	namespace beans {

class XMLDecoder$1 : public ::java::security::PrivilegedAction {
	$class(XMLDecoder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XMLDecoder$1();
	void init$(::java::beans::XMLDecoder* this$0);
	virtual $Object* run() override;
	::java::beans::XMLDecoder* this$0 = nullptr;
};

	} // beans
} // java

#endif // _java_beans_XMLDecoder$1_h_