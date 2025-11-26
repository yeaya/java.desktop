#include <java/awt/GraphicsCallback.h>

#include <sun/awt/SunGraphicsCallback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;

namespace java {
	namespace awt {

$MethodInfo _GraphicsCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GraphicsCallback::*)()>(&GraphicsCallback::init$))},
	{}
};

$InnerClassInfo _GraphicsCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PrintHeavyweightComponentsCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PaintHeavyweightComponentsCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PeerPrintCallback", "java.awt.GraphicsCallback", "PeerPrintCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PeerPaintCallback", "java.awt.GraphicsCallback", "PeerPaintCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PrintAllCallback", "java.awt.GraphicsCallback", "PrintAllCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PaintAllCallback", "java.awt.GraphicsCallback", "PaintAllCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PrintCallback", "java.awt.GraphicsCallback", "PrintCallback", $STATIC | $FINAL},
	{"java.awt.GraphicsCallback$PaintCallback", "java.awt.GraphicsCallback", "PaintCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.GraphicsCallback",
	"sun.awt.SunGraphicsCallback",
	nullptr,
	nullptr,
	_GraphicsCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback,java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback,java.awt.GraphicsCallback$PeerPrintCallback,java.awt.GraphicsCallback$PeerPaintCallback,java.awt.GraphicsCallback$PrintAllCallback,java.awt.GraphicsCallback$PaintAllCallback,java.awt.GraphicsCallback$PrintCallback,java.awt.GraphicsCallback$PaintCallback"
};

$Object* allocate$GraphicsCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback));
}

void GraphicsCallback::init$() {
	$SunGraphicsCallback::init$();
}

GraphicsCallback::GraphicsCallback() {
}

$Class* GraphicsCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback, name, initialize, &_GraphicsCallback_ClassInfo_, allocate$GraphicsCallback);
	return class$;
}

$Class* GraphicsCallback::class$ = nullptr;

	} // awt
} // java