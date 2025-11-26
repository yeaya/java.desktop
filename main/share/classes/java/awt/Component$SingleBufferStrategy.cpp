#include <java/awt/Component$SingleBufferStrategy.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferStrategy.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Component$SingleBufferStrategy_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$SingleBufferStrategy, this$0)},
	{"caps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(Component$SingleBufferStrategy, caps)},
	{}
};

$MethodInfo _Component$SingleBufferStrategy_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, $method(static_cast<void(Component$SingleBufferStrategy::*)($Component*,$BufferCapabilities*)>(&Component$SingleBufferStrategy::init$))},
	{"contentsLost", "()Z", nullptr, $PUBLIC},
	{"contentsRestored", "()Z", nullptr, $PUBLIC},
	{"getCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getDrawGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$SingleBufferStrategy_InnerClassesInfo_[] = {
	{"java.awt.Component$SingleBufferStrategy", "java.awt.Component", "SingleBufferStrategy", $PRIVATE},
	{}
};

$ClassInfo _Component$SingleBufferStrategy_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$SingleBufferStrategy",
	"java.awt.image.BufferStrategy",
	nullptr,
	_Component$SingleBufferStrategy_FieldInfo_,
	_Component$SingleBufferStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_Component$SingleBufferStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$SingleBufferStrategy($Class* clazz) {
	return $of($alloc(Component$SingleBufferStrategy));
}

void Component$SingleBufferStrategy::init$($Component* this$0, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$BufferStrategy::init$();
	$set(this, caps, caps);
}

$BufferCapabilities* Component$SingleBufferStrategy::getCapabilities() {
	return this->caps;
}

$Graphics* Component$SingleBufferStrategy::getDrawGraphics() {
	return this->this$0->getGraphics();
}

bool Component$SingleBufferStrategy::contentsLost() {
	return false;
}

bool Component$SingleBufferStrategy::contentsRestored() {
	return false;
}

void Component$SingleBufferStrategy::show() {
}

Component$SingleBufferStrategy::Component$SingleBufferStrategy() {
}

$Class* Component$SingleBufferStrategy::load$($String* name, bool initialize) {
	$loadClass(Component$SingleBufferStrategy, name, initialize, &_Component$SingleBufferStrategy_ClassInfo_, allocate$Component$SingleBufferStrategy);
	return class$;
}

$Class* Component$SingleBufferStrategy::class$ = nullptr;

	} // awt
} // java