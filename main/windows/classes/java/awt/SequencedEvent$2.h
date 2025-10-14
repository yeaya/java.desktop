#ifndef _java_awt_SequencedEvent$2_h_
#define _java_awt_SequencedEvent$2_h_
//$ class java.awt.SequencedEvent$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {

class SequencedEvent$2 : public ::java::security::PrivilegedAction {
	$class(SequencedEvent$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SequencedEvent$2();
	void init$();
	virtual $Object* run() override;
};

	} // awt
} // java

#endif // _java_awt_SequencedEvent$2_h_