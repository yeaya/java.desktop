#include <sun/java2d/d3d/D3DGraphicsDevice$D3DFSWindowAdapter.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DGraphicsDevice$D3DFSWindowAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DGraphicsDevice$D3DFSWindowAdapter::*)()>(&D3DGraphicsDevice$D3DFSWindowAdapter::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _D3DGraphicsDevice$D3DFSWindowAdapter_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter", "sun.java2d.d3d.D3DGraphicsDevice", "D3DFSWindowAdapter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DGraphicsDevice$D3DFSWindowAdapter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter",
	"java.awt.event.WindowAdapter",
	nullptr,
	nullptr,
	_D3DGraphicsDevice$D3DFSWindowAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_D3DGraphicsDevice$D3DFSWindowAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsDevice"
};

$Object* allocate$D3DGraphicsDevice$D3DFSWindowAdapter($Class* clazz) {
	return $of($alloc(D3DGraphicsDevice$D3DFSWindowAdapter));
}

void D3DGraphicsDevice$D3DFSWindowAdapter::init$() {
	$WindowAdapter::init$();
}

void D3DGraphicsDevice$D3DFSWindowAdapter::windowDeactivated($WindowEvent* e) {
	$nc($($D3DRenderQueue::getInstance()))->restoreDevices();
}

void D3DGraphicsDevice$D3DFSWindowAdapter::windowActivated($WindowEvent* e) {
	$nc($($D3DRenderQueue::getInstance()))->restoreDevices();
}

D3DGraphicsDevice$D3DFSWindowAdapter::D3DGraphicsDevice$D3DFSWindowAdapter() {
}

$Class* D3DGraphicsDevice$D3DFSWindowAdapter::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsDevice$D3DFSWindowAdapter, name, initialize, &_D3DGraphicsDevice$D3DFSWindowAdapter_ClassInfo_, allocate$D3DGraphicsDevice$D3DFSWindowAdapter);
	return class$;
}

$Class* D3DGraphicsDevice$D3DFSWindowAdapter::class$ = nullptr;

		} // d3d
	} // java2d
} // sun