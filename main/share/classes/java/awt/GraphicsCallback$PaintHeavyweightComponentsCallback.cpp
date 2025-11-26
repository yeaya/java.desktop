#include <java/awt/GraphicsCallback$PaintHeavyweightComponentsCallback.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GraphicsCallback$PaintHeavyweightComponentsCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PaintHeavyweightComponentsCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PaintHeavyweightComponentsCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PaintHeavyweightComponentsCallback::*)()>(&GraphicsCallback$PaintHeavyweightComponentsCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PaintHeavyweightComponentsCallback*(*)()>(&GraphicsCallback$PaintHeavyweightComponentsCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PaintHeavyweightComponentsCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PaintHeavyweightComponentsCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PaintHeavyweightComponentsCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PaintHeavyweightComponentsCallback_FieldInfo_,
	_GraphicsCallback$PaintHeavyweightComponentsCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PaintHeavyweightComponentsCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PaintHeavyweightComponentsCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PaintHeavyweightComponentsCallback));
}

GraphicsCallback$PaintHeavyweightComponentsCallback* GraphicsCallback$PaintHeavyweightComponentsCallback::instance = nullptr;

void GraphicsCallback$PaintHeavyweightComponentsCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PaintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if ($instanceOf($LightweightPeer, $nc(comp)->peer)) {
		comp->paintHeavyweightComponents(cg);
	} else {
		comp->paintAll(cg);
	}
}

GraphicsCallback$PaintHeavyweightComponentsCallback* GraphicsCallback$PaintHeavyweightComponentsCallback::getInstance() {
	$init(GraphicsCallback$PaintHeavyweightComponentsCallback);
	return GraphicsCallback$PaintHeavyweightComponentsCallback::instance;
}

void clinit$GraphicsCallback$PaintHeavyweightComponentsCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PaintHeavyweightComponentsCallback::instance, $new(GraphicsCallback$PaintHeavyweightComponentsCallback));
}

GraphicsCallback$PaintHeavyweightComponentsCallback::GraphicsCallback$PaintHeavyweightComponentsCallback() {
}

$Class* GraphicsCallback$PaintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PaintHeavyweightComponentsCallback, name, initialize, &_GraphicsCallback$PaintHeavyweightComponentsCallback_ClassInfo_, clinit$GraphicsCallback$PaintHeavyweightComponentsCallback, allocate$GraphicsCallback$PaintHeavyweightComponentsCallback);
	return class$;
}

$Class* GraphicsCallback$PaintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // java