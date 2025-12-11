#include <sun/lwawt/macosx/CViewEmbeddedFrame.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/lwawt/LWCanvasPeer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $LWCanvasPeer = ::sun::lwawt::LWCanvasPeer;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWContainerPeer = ::sun::lwawt::LWContainerPeer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0 : public $Runnable {
	$class(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(CViewEmbeddedFrame* inst, int32_t width, int32_t height) {
		$set(this, inst$, inst);
		this->width = width;
		this->height = height;
	}
	virtual void run() override {
		$nc(inst$)->lambda$validateWithBounds$0(width, height);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0>());
	}
	CViewEmbeddedFrame* inst$ = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0, inst$)},
	{"width", "I", nullptr, $PUBLIC, $field(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0, width)},
	{"height", "I", nullptr, $PUBLIC, $field(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0, height)},
	{}
};
$MethodInfo CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CViewEmbeddedFrame;II)V", nullptr, $PUBLIC, $method(static_cast<void(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::*)(CViewEmbeddedFrame*,int32_t,int32_t)>(&CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::load$($String* name, bool initialize) {
	$loadClass(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::class$ = nullptr;

$FieldInfo _CViewEmbeddedFrame_FieldInfo_[] = {
	{"nsViewPtr", "J", nullptr, $PRIVATE | $FINAL, $field(CViewEmbeddedFrame, nsViewPtr)},
	{"isActive", "Z", nullptr, $PRIVATE, $field(CViewEmbeddedFrame, isActive$)},
	{}
};

$MethodInfo _CViewEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CViewEmbeddedFrame::*)(int64_t)>(&CViewEmbeddedFrame::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"getEmbedderHandle", "()J", nullptr, $PUBLIC},
	{"isParentWindowActive", "()Z", nullptr, $PUBLIC},
	{"lambda$validateWithBounds$0", "(II)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CViewEmbeddedFrame::*)(int32_t,int32_t)>(&CViewEmbeddedFrame::lambda$validateWithBounds$0))},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC},
	{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{"validateWithBounds", "(IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CViewEmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CViewEmbeddedFrame",
	"sun.awt.EmbeddedFrame",
	nullptr,
	_CViewEmbeddedFrame_FieldInfo_,
	_CViewEmbeddedFrame_MethodInfo_
};

$Object* allocate$CViewEmbeddedFrame($Class* clazz) {
	return $of($alloc(CViewEmbeddedFrame));
}

void CViewEmbeddedFrame::init$(int64_t nsViewPtr) {
	$EmbeddedFrame::init$();
	this->isActive$ = false;
	this->nsViewPtr = nsViewPtr;
}

void CViewEmbeddedFrame::addNotify() {
	$useLocalCurrentObjectStackCache();
	if (!isDisplayable()) {
		$var($LWCToolkit, toolkit, $cast($LWCToolkit, $Toolkit::getDefaultToolkit()));
		setPeer($(static_cast<$ComponentPeer*>(static_cast<$LWComponentPeer*>(static_cast<$LWCanvasPeer*>(static_cast<$LWContainerPeer*>($nc(toolkit)->createEmbeddedFrame(this)))))));
	}
	$EmbeddedFrame::addNotify();
}

int64_t CViewEmbeddedFrame::getEmbedderHandle() {
	return this->nsViewPtr;
}

void CViewEmbeddedFrame::registerAccelerator($AWTKeyStroke* awtks) {
}

void CViewEmbeddedFrame::unregisterAccelerator($AWTKeyStroke* awtks) {
}

bool CViewEmbeddedFrame::isParentWindowActive() {
	return this->isActive$;
}

void CViewEmbeddedFrame::synthesizeWindowActivation(bool activated) {
	$useLocalCurrentObjectStackCache();
	if (this->isActive$ != activated) {
		this->isActive$ = activated;
		$var($LWWindowPeer, peer, $cast($LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
		$nc(peer)->notifyActivation(activated, nullptr);
	}
}

void CViewEmbeddedFrame::validateWithBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	try {
		$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0, this, width, height)), static_cast<$Component*>(this));
	} catch ($InvocationTargetException& ex) {
	}
}

void CViewEmbeddedFrame::lambda$validateWithBounds$0(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($LWWindowPeer, peer, $cast($LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	$nc(peer)->setBoundsPrivate(0, 0, width, height);
	validate();
	setVisible(true);
}

CViewEmbeddedFrame::CViewEmbeddedFrame() {
}

$Class* CViewEmbeddedFrame::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::classInfo$.name)) {
			return CViewEmbeddedFrame$$Lambda$lambda$validateWithBounds$0::load$(name, initialize);
		}
	}
	$loadClass(CViewEmbeddedFrame, name, initialize, &_CViewEmbeddedFrame_ClassInfo_, allocate$CViewEmbeddedFrame);
	return class$;
}

$Class* CViewEmbeddedFrame::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun