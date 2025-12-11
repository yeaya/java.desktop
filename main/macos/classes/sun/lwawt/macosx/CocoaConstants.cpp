#include <sun/lwawt/macosx/CocoaConstants.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CocoaConstants_FieldInfo_[] = {
	{"NSLeftMouseDown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSLeftMouseDown)},
	{"NSLeftMouseUp", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSLeftMouseUp)},
	{"NSRightMouseDown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSRightMouseDown)},
	{"NSRightMouseUp", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSRightMouseUp)},
	{"NSMouseMoved", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSMouseMoved)},
	{"NSLeftMouseDragged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSLeftMouseDragged)},
	{"NSRightMouseDragged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSRightMouseDragged)},
	{"NSMouseEntered", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSMouseEntered)},
	{"NSMouseExited", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSMouseExited)},
	{"NSKeyDown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSKeyDown)},
	{"NSKeyUp", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSKeyUp)},
	{"NSFlagsChanged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSFlagsChanged)},
	{"NSScrollWheel", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSScrollWheel)},
	{"NSOtherMouseDown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSOtherMouseDown)},
	{"NSOtherMouseUp", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSOtherMouseUp)},
	{"NSOtherMouseDragged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NSOtherMouseDragged)},
	{"AllLeftMouseEventsMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, AllLeftMouseEventsMask)},
	{"AllRightMouseEventsMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, AllRightMouseEventsMask)},
	{"AllOtherMouseEventsMask", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, AllOtherMouseEventsMask)},
	{"kCGMouseButtonLeft", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, kCGMouseButtonLeft)},
	{"kCGMouseButtonRight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, kCGMouseButtonRight)},
	{"kCGMouseButtonCenter", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, kCGMouseButtonCenter)},
	{"NPCocoaEventDrawRect", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventDrawRect)},
	{"NPCocoaEventMouseDown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventMouseDown)},
	{"NPCocoaEventMouseUp", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventMouseUp)},
	{"NPCocoaEventMouseMoved", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventMouseMoved)},
	{"NPCocoaEventMouseEntered", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventMouseEntered)},
	{"NPCocoaEventMouseExited", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventMouseExited)},
	{"NPCocoaEventMouseDragged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventMouseDragged)},
	{"NPCocoaEventKeyDown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventKeyDown)},
	{"NPCocoaEventKeyUp", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventKeyUp)},
	{"NPCocoaEventFlagsChanged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventFlagsChanged)},
	{"NPCocoaEventFocusChanged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventFocusChanged)},
	{"NPCocoaEventWindowFocusChanged", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventWindowFocusChanged)},
	{"NPCocoaEventScrollWheel", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventScrollWheel)},
	{"NPCocoaEventTextInput", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CocoaConstants, NPCocoaEventTextInput)},
	{}
};

$MethodInfo _CocoaConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CocoaConstants::*)()>(&CocoaConstants::init$))},
	{}
};

$ClassInfo _CocoaConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CocoaConstants",
	"java.lang.Object",
	nullptr,
	_CocoaConstants_FieldInfo_,
	_CocoaConstants_MethodInfo_
};

$Object* allocate$CocoaConstants($Class* clazz) {
	return $of($alloc(CocoaConstants));
}

void CocoaConstants::init$() {
}

CocoaConstants::CocoaConstants() {
}

$Class* CocoaConstants::load$($String* name, bool initialize) {
	$loadClass(CocoaConstants, name, initialize, &_CocoaConstants_ClassInfo_, allocate$CocoaConstants);
	return class$;
}

$Class* CocoaConstants::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun