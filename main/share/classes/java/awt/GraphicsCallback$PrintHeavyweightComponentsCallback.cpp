#include <java/awt/GraphicsCallback$PrintHeavyweightComponentsCallback.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GraphicsCallback$PrintHeavyweightComponentsCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PrintHeavyweightComponentsCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PrintHeavyweightComponentsCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PrintHeavyweightComponentsCallback::*)()>(&GraphicsCallback$PrintHeavyweightComponentsCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PrintHeavyweightComponentsCallback*(*)()>(&GraphicsCallback$PrintHeavyweightComponentsCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PrintHeavyweightComponentsCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PrintHeavyweightComponentsCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PrintHeavyweightComponentsCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PrintHeavyweightComponentsCallback_FieldInfo_,
	_GraphicsCallback$PrintHeavyweightComponentsCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PrintHeavyweightComponentsCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PrintHeavyweightComponentsCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PrintHeavyweightComponentsCallback));
}

GraphicsCallback$PrintHeavyweightComponentsCallback* GraphicsCallback$PrintHeavyweightComponentsCallback::instance = nullptr;

void GraphicsCallback$PrintHeavyweightComponentsCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PrintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if ($instanceOf($LightweightPeer, $nc(comp)->peer)) {
		comp->printHeavyweightComponents(cg);
	} else {
		comp->printAll(cg);
	}
}

GraphicsCallback$PrintHeavyweightComponentsCallback* GraphicsCallback$PrintHeavyweightComponentsCallback::getInstance() {
	$init(GraphicsCallback$PrintHeavyweightComponentsCallback);
	return GraphicsCallback$PrintHeavyweightComponentsCallback::instance;
}

void clinit$GraphicsCallback$PrintHeavyweightComponentsCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PrintHeavyweightComponentsCallback::instance, $new(GraphicsCallback$PrintHeavyweightComponentsCallback));
}

GraphicsCallback$PrintHeavyweightComponentsCallback::GraphicsCallback$PrintHeavyweightComponentsCallback() {
}

$Class* GraphicsCallback$PrintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PrintHeavyweightComponentsCallback, name, initialize, &_GraphicsCallback$PrintHeavyweightComponentsCallback_ClassInfo_, clinit$GraphicsCallback$PrintHeavyweightComponentsCallback, allocate$GraphicsCallback$PrintHeavyweightComponentsCallback);
	return class$;
}

$Class* GraphicsCallback$PrintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // java