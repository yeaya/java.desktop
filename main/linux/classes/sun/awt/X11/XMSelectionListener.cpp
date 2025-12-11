#include <sun/awt/X11/XMSelectionListener.h>

#include <sun/awt/X11/XMSelection.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XMSelectionListener_MethodInfo_[] = {
	{"ownerChanged", "(ILsun/awt/X11/XMSelection;JJJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"ownerDeath", "(ILsun/awt/X11/XMSelection;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"selectionChanged", "(ILsun/awt/X11/XMSelection;JLsun/awt/X11/XPropertyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMSelectionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XMSelectionListener",
	nullptr,
	nullptr,
	nullptr,
	_XMSelectionListener_MethodInfo_
};

$Object* allocate$XMSelectionListener($Class* clazz) {
	return $of($alloc(XMSelectionListener));
}

$Class* XMSelectionListener::load$($String* name, bool initialize) {
	$loadClass(XMSelectionListener, name, initialize, &_XMSelectionListener_ClassInfo_, allocate$XMSelectionListener);
	return class$;
}

$Class* XMSelectionListener::class$ = nullptr;

		} // X11
	} // awt
} // sun