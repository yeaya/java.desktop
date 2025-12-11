#include <sun/lwawt/macosx/CWarningWindow$1$1.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CWarningWindow$1.h>
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
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CWarningWindow = ::sun::lwawt::macosx::CWarningWindow;
using $CWarningWindow$1 = ::sun::lwawt::macosx::CWarningWindow$1;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CWarningWindow$1$1_FieldInfo_[] = {
	{"this$1", "Lsun/lwawt/macosx/CWarningWindow$1;", nullptr, $FINAL | $SYNTHETIC, $field(CWarningWindow$1$1, this$1)},
	{}
};

$MethodInfo _CWarningWindow$1$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CWarningWindow$1;Lsun/lwawt/LWWindowPeer;)V", nullptr, 0, $method(static_cast<void(CWarningWindow$1$1::*)($CWarningWindow$1*,$LWWindowPeer*)>(&CWarningWindow$1$1::init$))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CWarningWindow$1$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CWarningWindow$1",
	"createCGLayer",
	"()Lsun/java2d/opengl/CGLLayer;"
};

$InnerClassInfo _CWarningWindow$1$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWarningWindow$1", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CWarningWindow$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CWarningWindow$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CWarningWindow$1$1",
	"sun.java2d.opengl.CGLLayer",
	nullptr,
	_CWarningWindow$1$1_FieldInfo_,
	_CWarningWindow$1$1_MethodInfo_,
	nullptr,
	&_CWarningWindow$1$1_EnclosingMethodInfo_,
	_CWarningWindow$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWarningWindow"
};

$Object* allocate$CWarningWindow$1$1($Class* clazz) {
	return $of($alloc(CWarningWindow$1$1));
}

void CWarningWindow$1$1::init$($CWarningWindow$1* this$1, $LWWindowPeer* peer) {
	$set(this, this$1, this$1);
	$CGLLayer::init$(peer);
}

$Rectangle* CWarningWindow$1$1::getBounds() {
	return $nc(this->this$1->this$0)->getBounds();
}

$GraphicsConfiguration* CWarningWindow$1$1::getGraphicsConfiguration() {
	$var($LWWindowPeer, peer, $cast($LWWindowPeer, $nc($nc(this->this$1->this$0)->ownerPeer)->get()));
	return $nc(peer)->getGraphicsConfiguration();
}

bool CWarningWindow$1$1::isOpaque() {
	return false;
}

CWarningWindow$1$1::CWarningWindow$1$1() {
}

$Class* CWarningWindow$1$1::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$1$1, name, initialize, &_CWarningWindow$1$1_ClassInfo_, allocate$CWarningWindow$1$1);
	return class$;
}

$Class* CWarningWindow$1$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun