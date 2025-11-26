#ifndef _com_sun_beans_decoder_DocumentHandler$1_h_
#define _com_sun_beans_decoder_DocumentHandler$1_h_
//$ class com.sun.beans.decoder.DocumentHandler$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {
				class DocumentHandler;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class DocumentHandler$1 : public ::java::security::PrivilegedAction {
	$class(DocumentHandler$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DocumentHandler$1();
	void init$(::com::sun::beans::decoder::DocumentHandler* this$0, ::org::xml::sax::InputSource* val$input);
	virtual $Object* run() override;
	::com::sun::beans::decoder::DocumentHandler* this$0 = nullptr;
	::org::xml::sax::InputSource* val$input = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_DocumentHandler$1_h_