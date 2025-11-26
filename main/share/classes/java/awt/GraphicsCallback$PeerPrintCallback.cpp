#include <java/awt/GraphicsCallback$PeerPrintCallback.h>

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

$FieldInfo _GraphicsCallback$PeerPrintCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PeerPrintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PeerPrintCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PeerPrintCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PeerPrintCallback::*)()>(&GraphicsCallback$PeerPrintCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PeerPrintCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PeerPrintCallback*(*)()>(&GraphicsCallback$PeerPrintCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PeerPrintCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PeerPrintCallback", "java.awt.GraphicsCallback", "PeerPrintCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PeerPrintCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PeerPrintCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PeerPrintCallback_FieldInfo_,
	_GraphicsCallback$PeerPrintCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PeerPrintCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PeerPrintCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PeerPrintCallback));
}

GraphicsCallback$PeerPrintCallback* GraphicsCallback$PeerPrintCallback::instance = nullptr;

void GraphicsCallback$PeerPrintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PeerPrintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->validate();
	if ($instanceOf($LightweightPeer, comp->peer)) {
		comp->lightweightPrint(cg);
	} else {
		$nc(comp->peer)->print(cg);
	}
}

GraphicsCallback$PeerPrintCallback* GraphicsCallback$PeerPrintCallback::getInstance() {
	$init(GraphicsCallback$PeerPrintCallback);
	return GraphicsCallback$PeerPrintCallback::instance;
}

void clinit$GraphicsCallback$PeerPrintCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PeerPrintCallback::instance, $new(GraphicsCallback$PeerPrintCallback));
}

GraphicsCallback$PeerPrintCallback::GraphicsCallback$PeerPrintCallback() {
}

$Class* GraphicsCallback$PeerPrintCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PeerPrintCallback, name, initialize, &_GraphicsCallback$PeerPrintCallback_ClassInfo_, clinit$GraphicsCallback$PeerPrintCallback, allocate$GraphicsCallback$PeerPrintCallback);
	return class$;
}

$Class* GraphicsCallback$PeerPrintCallback::class$ = nullptr;

	} // awt
} // java