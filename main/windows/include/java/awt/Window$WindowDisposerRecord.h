#ifndef _java_awt_Window$WindowDisposerRecord_h_
#define _java_awt_Window$WindowDisposerRecord_h_
//$ class java.awt.Window$WindowDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class $import Window$WindowDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(Window$WindowDisposerRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	Window$WindowDisposerRecord();
	void init$(::sun::awt::AppContext* context, ::java::awt::Window* victim);
	virtual void dispose() override;
	virtual void updateOwner();
	::java::lang::ref::WeakReference* owner = nullptr;
	::java::lang::ref::WeakReference* weakThis = nullptr;
	::java::lang::ref::WeakReference* context = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Window$WindowDisposerRecord_h_