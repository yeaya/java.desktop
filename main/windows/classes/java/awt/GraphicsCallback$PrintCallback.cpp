#include <java/awt/GraphicsCallback$PrintCallback.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _GraphicsCallback$PrintCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PrintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PrintCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PrintCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PrintCallback::*)()>(&GraphicsCallback$PrintCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PrintCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PrintCallback*(*)()>(&GraphicsCallback$PrintCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PrintCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PrintCallback", "java.awt.GraphicsCallback", "PrintCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PrintCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PrintCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PrintCallback_FieldInfo_,
	_GraphicsCallback$PrintCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PrintCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PrintCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PrintCallback));
}

GraphicsCallback$PrintCallback* GraphicsCallback$PrintCallback::instance = nullptr;

void GraphicsCallback$PrintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PrintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->print(cg);
}

GraphicsCallback$PrintCallback* GraphicsCallback$PrintCallback::getInstance() {
	$init(GraphicsCallback$PrintCallback);
	return GraphicsCallback$PrintCallback::instance;
}

void clinit$GraphicsCallback$PrintCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PrintCallback::instance, $new(GraphicsCallback$PrintCallback));
}

GraphicsCallback$PrintCallback::GraphicsCallback$PrintCallback() {
}

$Class* GraphicsCallback$PrintCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PrintCallback, name, initialize, &_GraphicsCallback$PrintCallback_ClassInfo_, clinit$GraphicsCallback$PrintCallback, allocate$GraphicsCallback$PrintCallback);
	return class$;
}

$Class* GraphicsCallback$PrintCallback::class$ = nullptr;

	} // awt
} // java