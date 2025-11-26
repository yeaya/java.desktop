#ifndef _sun_awt_SunToolkit$ModalityListenerList_h_
#define _sun_awt_SunToolkit$ModalityListenerList_h_
//$ class sun.awt.SunToolkit$ModalityListenerList
//$ extends sun.awt.ModalityListener

#include <sun/awt/ModalityListener.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace awt {
		class ModalityEvent;
	}
}

namespace sun {
	namespace awt {

class $export SunToolkit$ModalityListenerList : public ::sun::awt::ModalityListener {
	$class(SunToolkit$ModalityListenerList, $NO_CLASS_INIT, ::sun::awt::ModalityListener)
public:
	SunToolkit$ModalityListenerList();
	void init$();
	virtual void add(::sun::awt::ModalityListener* listener);
	virtual void modalityPopped(::sun::awt::ModalityEvent* ev) override;
	virtual void modalityPushed(::sun::awt::ModalityEvent* ev) override;
	virtual void remove(::sun::awt::ModalityListener* listener);
	::java::util::Vector* listeners = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SunToolkit$ModalityListenerList_h_