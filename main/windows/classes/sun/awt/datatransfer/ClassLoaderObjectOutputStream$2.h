#ifndef _sun_awt_datatransfer_ClassLoaderObjectOutputStream$2_h_
#define _sun_awt_datatransfer_ClassLoaderObjectOutputStream$2_h_
//$ class sun.awt.datatransfer.ClassLoaderObjectOutputStream$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace datatransfer {
			class ClassLoaderObjectOutputStream;
		}
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class ClassLoaderObjectOutputStream$2 : public ::java::security::PrivilegedAction {
	$class(ClassLoaderObjectOutputStream$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ClassLoaderObjectOutputStream$2();
	void init$(::sun::awt::datatransfer::ClassLoaderObjectOutputStream* this$0, $Class* val$cl);
	virtual $Object* run() override;
	::sun::awt::datatransfer::ClassLoaderObjectOutputStream* this$0 = nullptr;
	$Class* val$cl = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_ClassLoaderObjectOutputStream$2_h_