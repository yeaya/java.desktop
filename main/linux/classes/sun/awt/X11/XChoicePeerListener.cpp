#include <sun/awt/X11/XChoicePeerListener.h>

#include <sun/awt/X11/ListHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XChoicePeerListener_MethodInfo_[] = {
	{"unfurledChoiceClosing", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"unfurledChoiceOpening", "(Lsun/awt/X11/ListHelper;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XChoicePeerListener_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.awt.X11.XChoicePeerListener",
	nullptr,
	nullptr,
	nullptr,
	_XChoicePeerListener_MethodInfo_
};

$Object* allocate$XChoicePeerListener($Class* clazz) {
	return $of($alloc(XChoicePeerListener));
}

$Class* XChoicePeerListener::load$($String* name, bool initialize) {
	$loadClass(XChoicePeerListener, name, initialize, &_XChoicePeerListener_ClassInfo_, allocate$XChoicePeerListener);
	return class$;
}

$Class* XChoicePeerListener::class$ = nullptr;

		} // X11
	} // awt
} // sun