#include <sun/awt/X11/XLayerProtocol.h>

#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

#undef LAYER_ALWAYS_ON_TOP
#undef LAYER_NORMAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XLayerProtocol_FieldInfo_[] = {
	{"LAYER_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XLayerProtocol, LAYER_NORMAL)},
	{"LAYER_ALWAYS_ON_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XLayerProtocol, LAYER_ALWAYS_ON_TOP)},
	{}
};

$MethodInfo _XLayerProtocol_MethodInfo_[] = {
	{"setLayer", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"supportsLayer", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XLayerProtocol_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XLayerProtocol",
	nullptr,
	nullptr,
	_XLayerProtocol_FieldInfo_,
	_XLayerProtocol_MethodInfo_
};

$Object* allocate$XLayerProtocol($Class* clazz) {
	return $of($alloc(XLayerProtocol));
}

$Class* XLayerProtocol::load$($String* name, bool initialize) {
	$loadClass(XLayerProtocol, name, initialize, &_XLayerProtocol_ClassInfo_, allocate$XLayerProtocol);
	return class$;
}

$Class* XLayerProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun