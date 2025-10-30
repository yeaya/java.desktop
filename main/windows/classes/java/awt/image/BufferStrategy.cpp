#include <java/awt/image/BufferStrategy.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _BufferStrategy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(BufferStrategy::*)()>(&BufferStrategy::init$))},
	{"contentsLost", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"contentsRestored", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDrawGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{"show", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BufferStrategy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.BufferStrategy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BufferStrategy_MethodInfo_
};

$Object* allocate$BufferStrategy($Class* clazz) {
	return $of($alloc(BufferStrategy));
}

void BufferStrategy::init$() {
}

void BufferStrategy::dispose() {
}

BufferStrategy::BufferStrategy() {
}

$Class* BufferStrategy::load$($String* name, bool initialize) {
	$loadClass(BufferStrategy, name, initialize, &_BufferStrategy_ClassInfo_, allocate$BufferStrategy);
	return class$;
}

$Class* BufferStrategy::class$ = nullptr;

		} // image
	} // awt
} // java