#include <java/awt/GraphicsCallback$PrintAllCallback.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GraphicsCallback$PrintAllCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PrintAllCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PrintAllCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PrintAllCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PrintAllCallback::*)()>(&GraphicsCallback$PrintAllCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PrintAllCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PrintAllCallback*(*)()>(&GraphicsCallback$PrintAllCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PrintAllCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PrintAllCallback", "java.awt.GraphicsCallback", "PrintAllCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PrintAllCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PrintAllCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PrintAllCallback_FieldInfo_,
	_GraphicsCallback$PrintAllCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PrintAllCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PrintAllCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PrintAllCallback));
}

GraphicsCallback$PrintAllCallback* GraphicsCallback$PrintAllCallback::instance = nullptr;

void GraphicsCallback$PrintAllCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PrintAllCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->printAll(cg);
}

GraphicsCallback$PrintAllCallback* GraphicsCallback$PrintAllCallback::getInstance() {
	$init(GraphicsCallback$PrintAllCallback);
	return GraphicsCallback$PrintAllCallback::instance;
}

void clinit$GraphicsCallback$PrintAllCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PrintAllCallback::instance, $new(GraphicsCallback$PrintAllCallback));
}

GraphicsCallback$PrintAllCallback::GraphicsCallback$PrintAllCallback() {
}

$Class* GraphicsCallback$PrintAllCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PrintAllCallback, name, initialize, &_GraphicsCallback$PrintAllCallback_ClassInfo_, clinit$GraphicsCallback$PrintAllCallback, allocate$GraphicsCallback$PrintAllCallback);
	return class$;
}

$Class* GraphicsCallback$PrintAllCallback::class$ = nullptr;

	} // awt
} // java