#include <sun/awt/windows/WComponentPeer$1.h>

#include <java/awt/Container.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DWindowSurfaceData.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DSurfaceData$D3DWindowSurfaceData = ::sun::java2d::d3d::D3DSurfaceData$D3DWindowSurfaceData;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WComponentPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$1, this$0)},
	{"val$cont", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(WComponentPeer$1, val$cont)},
	{}
};

$MethodInfo _WComponentPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WComponentPeer;Ljava/awt/Container;)V", "()V", 0, $method(static_cast<void(WComponentPeer$1::*)($WComponentPeer*,$Container*)>(&WComponentPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WComponentPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WComponentPeer",
	"dynamicallyLayoutContainer",
	"()V"
};

$InnerClassInfo _WComponentPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WComponentPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WComponentPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WComponentPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WComponentPeer$1_FieldInfo_,
	_WComponentPeer$1_MethodInfo_,
	nullptr,
	&_WComponentPeer$1_EnclosingMethodInfo_,
	_WComponentPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WComponentPeer"
};

$Object* allocate$WComponentPeer$1($Class* clazz) {
	return $of($alloc(WComponentPeer$1));
}

void WComponentPeer$1::init$($WComponentPeer* this$0, $Container* val$cont) {
	$set(this, this$0, this$0);
	$set(this, val$cont, val$cont);
}

void WComponentPeer$1::run() {
	$nc(this->val$cont)->invalidate();
	$nc(this->val$cont)->validate();
	if ($instanceOf($D3DSurfaceData$D3DWindowSurfaceData, this->this$0->surfaceData) || $instanceOf($OGLSurfaceData, this->this$0->surfaceData)) {
		try {
			this->this$0->replaceSurfaceData();
		} catch ($InvalidPipeException& e) {
		}
	}
}

WComponentPeer$1::WComponentPeer$1() {
}

$Class* WComponentPeer$1::load$($String* name, bool initialize) {
	$loadClass(WComponentPeer$1, name, initialize, &_WComponentPeer$1_ClassInfo_, allocate$WComponentPeer$1);
	return class$;
}

$Class* WComponentPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun