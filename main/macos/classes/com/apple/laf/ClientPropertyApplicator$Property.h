#ifndef _com_apple_laf_ClientPropertyApplicator$Property_h_
#define _com_apple_laf_ClientPropertyApplicator$Property_h_
//$ class com.apple.laf.ClientPropertyApplicator$Property
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {

class ClientPropertyApplicator$Property : public ::java::lang::Object {
	$class(ClientPropertyApplicator$Property, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClientPropertyApplicator$Property();
	void init$($String* name);
	virtual void applyProperty(Object$* target, Object$* value) {}
	$String* name = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ClientPropertyApplicator$Property_h_