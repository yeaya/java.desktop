#include <sun/lwawt/macosx/CViewPlatformEmbeddedFrame.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformEventNotifier.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CViewEmbeddedFrame.h>
#include <sun/lwawt/macosx/CWrapper$NSView.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformEventNotifier = ::sun::lwawt::PlatformEventNotifier;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CPlatformResponder = ::sun::lwawt::macosx::CPlatformResponder;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CViewEmbeddedFrame = ::sun::lwawt::macosx::CViewEmbeddedFrame;
using $CWrapper$NSView = ::sun::lwawt::macosx::CWrapper$NSView;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview : public $CFRetainedResource$CFNativeAction {
	$class(CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t view) override {
		$CWrapper$NSView::removeFromSuperview(view);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::*)()>(&CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::load$($String* name, bool initialize) {
	$loadClass(CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::class$ = nullptr;

class CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1 : public $CFRetainedResource$CFNativeAction {
	$class(CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(bool visible) {
		this->visible = visible;
	}
	virtual void run(int64_t ptr) override {
		CViewPlatformEmbeddedFrame::lambda$setVisible$0(visible, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1>());
	}
	bool visible = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::fieldInfos[2] = {
	{"visible", "Z", nullptr, $PUBLIC, $field(CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1, visible)},
	{}
};
$MethodInfo CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::*)(bool)>(&CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::load$($String* name, bool initialize) {
	$loadClass(CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::class$ = nullptr;

$FieldInfo _CViewPlatformEmbeddedFrame_FieldInfo_[] = {
	{"view", "Lsun/lwawt/macosx/CPlatformView;", nullptr, $PRIVATE, $field(CViewPlatformEmbeddedFrame, view)},
	{"peer", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE, $field(CViewPlatformEmbeddedFrame, peer)},
	{"target", "Lsun/lwawt/macosx/CViewEmbeddedFrame;", nullptr, $PRIVATE, $field(CViewPlatformEmbeddedFrame, target)},
	{"responder", "Lsun/lwawt/macosx/CPlatformResponder;", nullptr, $PRIVATE, $field(CViewPlatformEmbeddedFrame, responder)},
	{}
};

$MethodInfo _CViewPlatformEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CViewPlatformEmbeddedFrame::*)()>(&CViewPlatformEmbeddedFrame::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLayerPtr", "()J", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getNSViewPtr", "()J", nullptr, $PUBLIC},
	{"getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC},
	{"getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"isFullScreenMode", "()Z", nullptr, $PUBLIC},
	{"isUnderMouse", "()Z", nullptr, $PUBLIC},
	{"lambda$setVisible$0", "(ZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,int64_t)>(&CViewPlatformEmbeddedFrame::lambda$setVisible$0))},
	{"rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setSizeConstraints", "(IIII)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWindowState", "(I)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CViewPlatformEmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CViewPlatformEmbeddedFrame",
	"java.lang.Object",
	"sun.lwawt.PlatformWindow",
	_CViewPlatformEmbeddedFrame_FieldInfo_,
	_CViewPlatformEmbeddedFrame_MethodInfo_
};

$Object* allocate$CViewPlatformEmbeddedFrame($Class* clazz) {
	return $of($alloc(CViewPlatformEmbeddedFrame));
}

void CViewPlatformEmbeddedFrame::init$() {
}

void CViewPlatformEmbeddedFrame::initialize($Window* target, $LWWindowPeer* peer, $PlatformWindow* owner) {
	$set(this, peer, peer);
	$set(this, target, $cast($CViewEmbeddedFrame, target));
	$set(this, responder, $new($CPlatformResponder, peer, false));
	$set(this, view, $new($CPlatformView));
	$nc(this->view)->initialize(peer, this->responder);
	int64_t var$0 = $nc(this->target)->getEmbedderHandle();
	$CWrapper$NSView::addSubview(var$0, $nc(this->view)->getAWTView());
	$nc(this->view)->setAutoResizable(true);
}

int64_t CViewPlatformEmbeddedFrame::getNSViewPtr() {
	return $nc(this->view)->getAWTView();
}

int64_t CViewPlatformEmbeddedFrame::getLayerPtr() {
	return $nc(this->view)->getWindowLayerPtr();
}

$LWWindowPeer* CViewPlatformEmbeddedFrame::getPeer() {
	return this->peer;
}

void CViewPlatformEmbeddedFrame::dispose() {
	$nc(this->view)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview)));
	$nc(this->view)->dispose();
}

void CViewPlatformEmbeddedFrame::setVisible(bool visible) {
	$nc(this->view)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1, visible)));
}

void CViewPlatformEmbeddedFrame::setTitle($String* title) {
}

void CViewPlatformEmbeddedFrame::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->view)->setBounds(x, y, w, h);
	$nc(this->peer)->notifyReshape(x, y, w, h);
}

$GraphicsDevice* CViewPlatformEmbeddedFrame::getGraphicsDevice() {
	return $nc(this->view)->getGraphicsDevice();
}

$Point* CViewPlatformEmbeddedFrame::getLocationOnScreen() {
	return $nc(this->view)->getLocationOnScreen();
}

$Insets* CViewPlatformEmbeddedFrame::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

$FontMetrics* CViewPlatformEmbeddedFrame::getFontMetrics($Font* f) {
	$throwNew($RuntimeException, "Not implemented"_s);
	$shouldNotReachHere();
}

$SurfaceData* CViewPlatformEmbeddedFrame::getScreenSurface() {
	return $nc(this->view)->getSurfaceData();
}

$SurfaceData* CViewPlatformEmbeddedFrame::replaceSurfaceData() {
	return $nc(this->view)->replaceSurfaceData();
}

void CViewPlatformEmbeddedFrame::setModalBlocked(bool blocked) {
}

void CViewPlatformEmbeddedFrame::toFront() {
}

void CViewPlatformEmbeddedFrame::toBack() {
}

void CViewPlatformEmbeddedFrame::setMenuBar($MenuBar* mb) {
}

void CViewPlatformEmbeddedFrame::setAlwaysOnTop(bool value) {
}

void CViewPlatformEmbeddedFrame::updateFocusableWindowState() {
}

bool CViewPlatformEmbeddedFrame::rejectFocusRequest($FocusEvent$Cause* cause) {
	return false;
}

bool CViewPlatformEmbeddedFrame::requestWindowFocus() {
	return true;
}

bool CViewPlatformEmbeddedFrame::isActive() {
	return $nc(this->target)->isParentWindowActive();
}

void CViewPlatformEmbeddedFrame::setResizable(bool resizable) {
}

void CViewPlatformEmbeddedFrame::setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {
}

void CViewPlatformEmbeddedFrame::updateIconImages() {
}

void CViewPlatformEmbeddedFrame::setOpacity(float opacity) {
}

void CViewPlatformEmbeddedFrame::setOpaque(bool isOpaque) {
}

void CViewPlatformEmbeddedFrame::enterFullScreenMode() {
}

void CViewPlatformEmbeddedFrame::exitFullScreenMode() {
}

bool CViewPlatformEmbeddedFrame::isFullScreenMode() {
	return false;
}

void CViewPlatformEmbeddedFrame::setWindowState(int32_t windowState) {
}

bool CViewPlatformEmbeddedFrame::isUnderMouse() {
	return $nc(this->view)->isUnderMouse();
}

void CViewPlatformEmbeddedFrame::lambda$setVisible$0(bool visible, int64_t ptr) {
	$init(CViewPlatformEmbeddedFrame);
	$CWrapper$NSView::setHidden(ptr, !visible);
}

CViewPlatformEmbeddedFrame::CViewPlatformEmbeddedFrame() {
}

$Class* CViewPlatformEmbeddedFrame::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::classInfo$.name)) {
			return CViewPlatformEmbeddedFrame$$Lambda$removeFromSuperview::load$(name, initialize);
		}
		if (name->equals(CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::classInfo$.name)) {
			return CViewPlatformEmbeddedFrame$$Lambda$lambda$setVisible$0$1::load$(name, initialize);
		}
	}
	$loadClass(CViewPlatformEmbeddedFrame, name, initialize, &_CViewPlatformEmbeddedFrame_ClassInfo_, allocate$CViewPlatformEmbeddedFrame);
	return class$;
}

$Class* CViewPlatformEmbeddedFrame::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun