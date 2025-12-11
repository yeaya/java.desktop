#include <sun/lwawt/macosx/CWarningWindow$1.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CWarningWindow$1$1.h>
#include <sun/lwawt/macosx/CWarningWindow$1$2.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CWarningWindow = ::sun::lwawt::macosx::CWarningWindow;
using $CWarningWindow$1$1 = ::sun::lwawt::macosx::CWarningWindow$1$1;
using $CWarningWindow$1$2 = ::sun::lwawt::macosx::CWarningWindow$1$2;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CWarningWindow$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CWarningWindow$1, this$0)},
	{}
};

$MethodInfo _CWarningWindow$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CWarningWindow;)V", nullptr, 0, $method(static_cast<void(CWarningWindow$1::*)($CWarningWindow*)>(&CWarningWindow$1::init$))},
	{"createCGLayer", "()Lsun/java2d/opengl/CGLLayer;", nullptr, $PUBLIC},
	{"createMTLLayer", "()Lsun/java2d/metal/MTLLayer;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CWarningWindow$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CWarningWindow",
	"createContentView",
	"()Lsun/lwawt/macosx/CPlatformView;"
};

$InnerClassInfo _CWarningWindow$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWarningWindow$1", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CWarningWindow$1$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CWarningWindow$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CWarningWindow$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CWarningWindow$1",
	"sun.lwawt.macosx.CPlatformView",
	nullptr,
	_CWarningWindow$1_FieldInfo_,
	_CWarningWindow$1_MethodInfo_,
	nullptr,
	&_CWarningWindow$1_EnclosingMethodInfo_,
	_CWarningWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWarningWindow"
};

$Object* allocate$CWarningWindow$1($Class* clazz) {
	return $of($alloc(CWarningWindow$1));
}

void CWarningWindow$1::init$($CWarningWindow* this$0) {
	$set(this, this$0, this$0);
	$CPlatformView::init$();
}

$GraphicsConfiguration* CWarningWindow$1::getGraphicsConfiguration() {
	$var($LWWindowPeer, peer, $cast($LWWindowPeer, $nc(this->this$0->ownerPeer)->get()));
	return $nc(peer)->getGraphicsConfiguration();
}

$Rectangle* CWarningWindow$1::getBounds() {
	return this->this$0->getBounds();
}

$CGLLayer* CWarningWindow$1::createCGLayer() {
	return $new($CWarningWindow$1$1, this, nullptr);
}

$MTLLayer* CWarningWindow$1::createMTLLayer() {
	return $new($CWarningWindow$1$2, this, nullptr);
}

CWarningWindow$1::CWarningWindow$1() {
}

$Class* CWarningWindow$1::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$1, name, initialize, &_CWarningWindow$1_ClassInfo_, allocate$CWarningWindow$1);
	return class$;
}

$Class* CWarningWindow$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun