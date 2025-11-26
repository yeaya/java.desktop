#include <sun/awt/X11/XDnDConstants.h>

#include <java/awt/dnd/DnDConstants.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XSelection.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef XDND_ACCEPT_DROP_FLAG
#undef XDND_DATA_TYPES_BIT
#undef XDND_MIN_PROTOCOL_VERSION
#undef XDND_PROTOCOL_MASK
#undef XDND_PROTOCOL_SHIFT
#undef XDND_PROTOCOL_VERSION

using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XAtom = ::sun::awt::X11::XAtom;
using $XSelection = ::sun::awt::X11::XSelection;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDnDConstants_FieldInfo_[] = {
	{"XA_XdndActionCopy", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndActionCopy)},
	{"XA_XdndActionMove", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndActionMove)},
	{"XA_XdndActionLink", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndActionLink)},
	{"XA_XdndActionList", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndActionList)},
	{"XA_XdndTypeList", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndTypeList)},
	{"XA_XdndAware", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndAware)},
	{"XA_XdndProxy", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndProxy)},
	{"XA_XdndSelection", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndSelection)},
	{"XA_XdndEnter", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndEnter)},
	{"XA_XdndPosition", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndPosition)},
	{"XA_XdndLeave", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndLeave)},
	{"XA_XdndDrop", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndDrop)},
	{"XA_XdndStatus", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndStatus)},
	{"XA_XdndFinished", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XA_XdndFinished)},
	{"XDnDSelection", "Lsun/awt/X11/XSelection;", nullptr, $STATIC | $FINAL, $staticField(XDnDConstants, XDnDSelection)},
	{"XDND_MIN_PROTOCOL_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDnDConstants, XDND_MIN_PROTOCOL_VERSION)},
	{"XDND_PROTOCOL_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDnDConstants, XDND_PROTOCOL_VERSION)},
	{"XDND_PROTOCOL_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDnDConstants, XDND_PROTOCOL_MASK)},
	{"XDND_PROTOCOL_SHIFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDnDConstants, XDND_PROTOCOL_SHIFT)},
	{"XDND_DATA_TYPES_BIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDnDConstants, XDND_DATA_TYPES_BIT)},
	{"XDND_ACCEPT_DROP_FLAG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDnDConstants, XDND_ACCEPT_DROP_FLAG)},
	{}
};

$MethodInfo _XDnDConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDnDConstants::*)()>(&XDnDConstants::init$))},
	{"getJavaActionForXDnDAction", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&XDnDConstants::getJavaActionForXDnDAction))},
	{"getXDnDActionForJavaAction", "(I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&XDnDConstants::getXDnDActionForJavaAction))},
	{}
};

$ClassInfo _XDnDConstants_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XDnDConstants",
	"java.lang.Object",
	nullptr,
	_XDnDConstants_FieldInfo_,
	_XDnDConstants_MethodInfo_
};

$Object* allocate$XDnDConstants($Class* clazz) {
	return $of($alloc(XDnDConstants));
}

$XAtom* XDnDConstants::XA_XdndActionCopy = nullptr;
$XAtom* XDnDConstants::XA_XdndActionMove = nullptr;
$XAtom* XDnDConstants::XA_XdndActionLink = nullptr;
$XAtom* XDnDConstants::XA_XdndActionList = nullptr;
$XAtom* XDnDConstants::XA_XdndTypeList = nullptr;
$XAtom* XDnDConstants::XA_XdndAware = nullptr;
$XAtom* XDnDConstants::XA_XdndProxy = nullptr;
$XAtom* XDnDConstants::XA_XdndSelection = nullptr;
$XAtom* XDnDConstants::XA_XdndEnter = nullptr;
$XAtom* XDnDConstants::XA_XdndPosition = nullptr;
$XAtom* XDnDConstants::XA_XdndLeave = nullptr;
$XAtom* XDnDConstants::XA_XdndDrop = nullptr;
$XAtom* XDnDConstants::XA_XdndStatus = nullptr;
$XAtom* XDnDConstants::XA_XdndFinished = nullptr;
$XSelection* XDnDConstants::XDnDSelection = nullptr;

void XDnDConstants::init$() {
}

int64_t XDnDConstants::getXDnDActionForJavaAction(int32_t javaAction) {
	$init(XDnDConstants);
	switch (javaAction) {
	case $DnDConstants::ACTION_COPY:
		{
			return $nc(XDnDConstants::XA_XdndActionCopy)->getAtom();
		}
	case $DnDConstants::ACTION_MOVE:
		{
			return $nc(XDnDConstants::XA_XdndActionMove)->getAtom();
		}
	case $DnDConstants::ACTION_LINK:
		{
			return $nc(XDnDConstants::XA_XdndActionLink)->getAtom();
		}
	default:
		{
			return 0;
		}
	}
}

int32_t XDnDConstants::getJavaActionForXDnDAction(int64_t xdndAction) {
	$init(XDnDConstants);
	if (xdndAction == $nc(XDnDConstants::XA_XdndActionCopy)->getAtom()) {
		return $DnDConstants::ACTION_COPY;
	} else {
		if (xdndAction == $nc(XDnDConstants::XA_XdndActionMove)->getAtom()) {
			return $DnDConstants::ACTION_MOVE;
		} else {
			if (xdndAction == $nc(XDnDConstants::XA_XdndActionLink)->getAtom()) {
				return $DnDConstants::ACTION_LINK;
			} else {
				return $DnDConstants::ACTION_NONE;
			}
		}
	}
}

void clinit$XDnDConstants($Class* class$) {
	$assignStatic(XDnDConstants::XA_XdndActionCopy, $XAtom::get("XdndActionCopy"_s));
	$assignStatic(XDnDConstants::XA_XdndActionMove, $XAtom::get("XdndActionMove"_s));
	$assignStatic(XDnDConstants::XA_XdndActionLink, $XAtom::get("XdndActionLink"_s));
	$assignStatic(XDnDConstants::XA_XdndActionList, $XAtom::get("XdndActionList"_s));
	$assignStatic(XDnDConstants::XA_XdndTypeList, $XAtom::get("XdndTypeList"_s));
	$assignStatic(XDnDConstants::XA_XdndAware, $XAtom::get("XdndAware"_s));
	$assignStatic(XDnDConstants::XA_XdndProxy, $XAtom::get("XdndProxy"_s));
	$assignStatic(XDnDConstants::XA_XdndSelection, $XAtom::get("XdndSelection"_s));
	$assignStatic(XDnDConstants::XA_XdndEnter, $XAtom::get("XdndEnter"_s));
	$assignStatic(XDnDConstants::XA_XdndPosition, $XAtom::get("XdndPosition"_s));
	$assignStatic(XDnDConstants::XA_XdndLeave, $XAtom::get("XdndLeave"_s));
	$assignStatic(XDnDConstants::XA_XdndDrop, $XAtom::get("XdndDrop"_s));
	$assignStatic(XDnDConstants::XA_XdndStatus, $XAtom::get("XdndStatus"_s));
	$assignStatic(XDnDConstants::XA_XdndFinished, $XAtom::get("XdndFinished"_s));
	$assignStatic(XDnDConstants::XDnDSelection, $new($XSelection, XDnDConstants::XA_XdndSelection));
}

XDnDConstants::XDnDConstants() {
}

$Class* XDnDConstants::load$($String* name, bool initialize) {
	$loadClass(XDnDConstants, name, initialize, &_XDnDConstants_ClassInfo_, clinit$XDnDConstants, allocate$XDnDConstants);
	return class$;
}

$Class* XDnDConstants::class$ = nullptr;

		} // X11
	} // awt
} // sun