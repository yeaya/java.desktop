#include <java/awt/GraphicsCallback$PaintCallback.h>

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

$FieldInfo _GraphicsCallback$PaintCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PaintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PaintCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PaintCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PaintCallback::*)()>(&GraphicsCallback$PaintCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PaintCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PaintCallback*(*)()>(&GraphicsCallback$PaintCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PaintCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PaintCallback", "java.awt.GraphicsCallback", "PaintCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PaintCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PaintCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PaintCallback_FieldInfo_,
	_GraphicsCallback$PaintCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PaintCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PaintCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PaintCallback));
}

GraphicsCallback$PaintCallback* GraphicsCallback$PaintCallback::instance = nullptr;

void GraphicsCallback$PaintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PaintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->paint(cg);
}

GraphicsCallback$PaintCallback* GraphicsCallback$PaintCallback::getInstance() {
	$init(GraphicsCallback$PaintCallback);
	return GraphicsCallback$PaintCallback::instance;
}

void clinit$GraphicsCallback$PaintCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PaintCallback::instance, $new(GraphicsCallback$PaintCallback));
}

GraphicsCallback$PaintCallback::GraphicsCallback$PaintCallback() {
}

$Class* GraphicsCallback$PaintCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PaintCallback, name, initialize, &_GraphicsCallback$PaintCallback_ClassInfo_, clinit$GraphicsCallback$PaintCallback, allocate$GraphicsCallback$PaintCallback);
	return class$;
}

$Class* GraphicsCallback$PaintCallback::class$ = nullptr;

	} // awt
} // java