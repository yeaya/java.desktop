#include <java/awt/GraphicsCallback$PaintAllCallback.h>

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

$FieldInfo _GraphicsCallback$PaintAllCallback_FieldInfo_[] = {
	{"instance", "Ljava/awt/GraphicsCallback$PaintAllCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PaintAllCallback, instance)},
	{}
};

$MethodInfo _GraphicsCallback$PaintAllCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsCallback$PaintAllCallback::*)()>(&GraphicsCallback$PaintAllCallback::init$))},
	{"getInstance", "()Ljava/awt/GraphicsCallback$PaintAllCallback;", nullptr, $STATIC, $method(static_cast<GraphicsCallback$PaintAllCallback*(*)()>(&GraphicsCallback$PaintAllCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicsCallback$PaintAllCallback_InnerClassesInfo_[] = {
	{"java.awt.GraphicsCallback$PaintAllCallback", "java.awt.GraphicsCallback", "PaintAllCallback", $STATIC | $FINAL},
	{}
};

$ClassInfo _GraphicsCallback$PaintAllCallback_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.GraphicsCallback$PaintAllCallback",
	"java.awt.GraphicsCallback",
	nullptr,
	_GraphicsCallback$PaintAllCallback_FieldInfo_,
	_GraphicsCallback$PaintAllCallback_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsCallback$PaintAllCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsCallback"
};

$Object* allocate$GraphicsCallback$PaintAllCallback($Class* clazz) {
	return $of($alloc(GraphicsCallback$PaintAllCallback));
}

GraphicsCallback$PaintAllCallback* GraphicsCallback$PaintAllCallback::instance = nullptr;

void GraphicsCallback$PaintAllCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PaintAllCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->paintAll(cg);
}

GraphicsCallback$PaintAllCallback* GraphicsCallback$PaintAllCallback::getInstance() {
	$init(GraphicsCallback$PaintAllCallback);
	return GraphicsCallback$PaintAllCallback::instance;
}

void clinit$GraphicsCallback$PaintAllCallback($Class* class$) {
	$assignStatic(GraphicsCallback$PaintAllCallback::instance, $new(GraphicsCallback$PaintAllCallback));
}

GraphicsCallback$PaintAllCallback::GraphicsCallback$PaintAllCallback() {
}

$Class* GraphicsCallback$PaintAllCallback::load$($String* name, bool initialize) {
	$loadClass(GraphicsCallback$PaintAllCallback, name, initialize, &_GraphicsCallback$PaintAllCallback_ClassInfo_, clinit$GraphicsCallback$PaintAllCallback, allocate$GraphicsCallback$PaintAllCallback);
	return class$;
}

$Class* GraphicsCallback$PaintAllCallback::class$ = nullptr;

	} // awt
} // java