#include <sun/awt/X11/XAbstractMenuItem.h>

#include <java/awt/Graphics.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XAbstractMenuItem_MethodInfo_[] = {
	{"getHeight", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getShortcutWidth", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getWidth", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMenuPeer", "(Lsun/awt/X11/XMenuPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XAbstractMenuItem_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XAbstractMenuItem",
	nullptr,
	nullptr,
	nullptr,
	_XAbstractMenuItem_MethodInfo_
};

$Object* allocate$XAbstractMenuItem($Class* clazz) {
	return $of($alloc(XAbstractMenuItem));
}

$Class* XAbstractMenuItem::load$($String* name, bool initialize) {
	$loadClass(XAbstractMenuItem, name, initialize, &_XAbstractMenuItem_ClassInfo_, allocate$XAbstractMenuItem);
	return class$;
}

$Class* XAbstractMenuItem::class$ = nullptr;

		} // X11
	} // awt
} // sun