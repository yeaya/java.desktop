#include <java/awt/GraphicsCallback$PeerPaintCallback.h>

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

$FieldInfo _GraphicsCallback$PeerPaintCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PeerPaintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PeerPaintCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PeerPaintCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PeerPaintCallback::*)()>(&GraphicsCallback$PeerPaintCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PeerPaintCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PeerPaintCallback*(*)()>(&GraphicsCallback$PeerPaintCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PeerPaintCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PeerPaintCallback", "java.awt.GraphicsCallback", "PeerPaintCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PeerPaintCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PeerPaintCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PeerPaintCallback_FieldInfo_,
	_GraphicsCallback$PeerPaintCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PeerPaintCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PeerPaintCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PeerPaintCallback));
}

GraphicsCallback$PeerPaintCallback* GraphicsCallback$PeerPaintCallback::instance = nullptr;

void GraphicsCallback$PeerPaintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PeerPaintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->validate();
	if ($instanceOf($LightweightPeer, comp->peer)) {
		comp->lightweightPaint(cg);
	} else {
		$nc(comp->peer)->paint(cg);
	}
}

GraphicsCallback$PeerPaintCallback* GraphicsCallback$PeerPaintCallback::getInstance() {
	$init(GraphicsCallback$PeerPaintCallback);
	return GraphicsCallback$PeerPaintCallback::instance;
}

void clinit$GraphicsCallback$PeerPaintCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PeerPaintCallback::instance, $new(GraphicsCallback$PeerPaintCallback));
}

GraphicsCallback$PeerPaintCallback::GraphicsCallback$PeerPaintCallback() {
}

$Class* GraphicsCallback$PeerPaintCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PeerPaintCallback, name, initialize, &_GraphicsCallback$PeerPaintCallback_ClassInfo_, clinit$GraphicsCallback$PeerPaintCallback, allocate$GraphicsCallback$PeerPaintCallback);
	return class$;
}

$Class* GraphicsCallback$PeerPaintCallback::class$ = nullptr;

	} // awt
} // java