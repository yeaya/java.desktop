#ifndef _com_apple_eio_FileManager$1_h_
#define _com_apple_eio_FileManager$1_h_
//$ class com.apple.eio.FileManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace apple {
		namespace eio {

class FileManager$1 : public ::java::security::PrivilegedAction {
	$class(FileManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileManager$1();
	void init$();
	virtual $Object* run() override;
};

		} // eio
	} // apple
} // com

#endif // _com_apple_eio_FileManager$1_h_