#include <java/awt/Component$FlipSubRegionBufferStrategy.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component$FlipBufferStrategy.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Component = ::java::awt::Component;
using $Component$FlipBufferStrategy = ::java::awt::Component$FlipBufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SubRegionShowable = ::sun::awt::SubRegionShowable;

namespace java {
	namespace awt {

$FieldInfo _Component$FlipSubRegionBufferStrategy_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$FlipSubRegionBufferStrategy, this$0)},
	{}
};

$MethodInfo _Component$FlipSubRegionBufferStrategy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PROTECTED, $method(static_cast<void(Component$FlipSubRegionBufferStrategy::*)($Component*,int32_t,$BufferCapabilities*)>(&Component$FlipSubRegionBufferStrategy::init$)), "java.awt.AWTException"},
	{"show", "(IIII)V", nullptr, $PUBLIC},
	{"showIfNotLost", "(IIII)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$FlipSubRegionBufferStrategy_InnerClassesInfo_[] = {
	{"java.awt.Component$FlipSubRegionBufferStrategy", "java.awt.Component", "FlipSubRegionBufferStrategy", $PRIVATE},
	{"java.awt.Component$FlipBufferStrategy", "java.awt.Component", "FlipBufferStrategy", $PROTECTED},
	{}
};

$ClassInfo _Component$FlipSubRegionBufferStrategy_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$FlipSubRegionBufferStrategy",
	"java.awt.Component$FlipBufferStrategy",
	"sun.awt.SubRegionShowable",
	_Component$FlipSubRegionBufferStrategy_FieldInfo_,
	_Component$FlipSubRegionBufferStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_Component$FlipSubRegionBufferStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$FlipSubRegionBufferStrategy($Class* clazz) {
	return $of($alloc(Component$FlipSubRegionBufferStrategy));
}

int32_t Component$FlipSubRegionBufferStrategy::hashCode() {
	 return this->$Component$FlipBufferStrategy::hashCode();
}

bool Component$FlipSubRegionBufferStrategy::equals(Object$* arg0) {
	 return this->$Component$FlipBufferStrategy::equals(arg0);
}

$Object* Component$FlipSubRegionBufferStrategy::clone() {
	 return this->$Component$FlipBufferStrategy::clone();
}

$String* Component$FlipSubRegionBufferStrategy::toString() {
	 return this->$Component$FlipBufferStrategy::toString();
}

void Component$FlipSubRegionBufferStrategy::finalize() {
	this->$Component$FlipBufferStrategy::finalize();
}

void Component$FlipSubRegionBufferStrategy::init$($Component* this$0, int32_t numBuffers, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$Component$FlipBufferStrategy::init$(this$0, numBuffers, caps);
}

void Component$FlipSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	showSubRegion(x1, y1, x2, y2);
}

bool Component$FlipSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (!contentsLost()) {
		showSubRegion(x1, y1, x2, y2);
		return !contentsLost();
	}
	return false;
}

Component$FlipSubRegionBufferStrategy::Component$FlipSubRegionBufferStrategy() {
}

$Class* Component$FlipSubRegionBufferStrategy::load$($String* name, bool initialize) {
	$loadClass(Component$FlipSubRegionBufferStrategy, name, initialize, &_Component$FlipSubRegionBufferStrategy_ClassInfo_, allocate$Component$FlipSubRegionBufferStrategy);
	return class$;
}

$Class* Component$FlipSubRegionBufferStrategy::class$ = nullptr;

	} // awt
} // java