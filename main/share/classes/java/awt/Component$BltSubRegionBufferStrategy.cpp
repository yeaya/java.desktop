#include <java/awt/Component$BltSubRegionBufferStrategy.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component$BltBufferStrategy.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Component = ::java::awt::Component;
using $Component$BltBufferStrategy = ::java::awt::Component$BltBufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Component$BltSubRegionBufferStrategy_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$BltSubRegionBufferStrategy, this$0)},
	{}
};

$MethodInfo _Component$BltSubRegionBufferStrategy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PROTECTED, $method(static_cast<void(Component$BltSubRegionBufferStrategy::*)($Component*,int32_t,$BufferCapabilities*)>(&Component$BltSubRegionBufferStrategy::init$))},
	{"show", "(IIII)V", nullptr, $PUBLIC},
	{"showIfNotLost", "(IIII)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$BltSubRegionBufferStrategy_InnerClassesInfo_[] = {
	{"java.awt.Component$BltSubRegionBufferStrategy", "java.awt.Component", "BltSubRegionBufferStrategy", $PRIVATE},
	{"java.awt.Component$BltBufferStrategy", "java.awt.Component", "BltBufferStrategy", $PROTECTED},
	{}
};

$ClassInfo _Component$BltSubRegionBufferStrategy_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$BltSubRegionBufferStrategy",
	"java.awt.Component$BltBufferStrategy",
	"sun.awt.SubRegionShowable",
	_Component$BltSubRegionBufferStrategy_FieldInfo_,
	_Component$BltSubRegionBufferStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_Component$BltSubRegionBufferStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$BltSubRegionBufferStrategy($Class* clazz) {
	return $of($alloc(Component$BltSubRegionBufferStrategy));
}

int32_t Component$BltSubRegionBufferStrategy::hashCode() {
	 return this->$Component$BltBufferStrategy::hashCode();
}

bool Component$BltSubRegionBufferStrategy::equals(Object$* arg0) {
	 return this->$Component$BltBufferStrategy::equals(arg0);
}

$Object* Component$BltSubRegionBufferStrategy::clone() {
	 return this->$Component$BltBufferStrategy::clone();
}

$String* Component$BltSubRegionBufferStrategy::toString() {
	 return this->$Component$BltBufferStrategy::toString();
}

void Component$BltSubRegionBufferStrategy::finalize() {
	this->$Component$BltBufferStrategy::finalize();
}

void Component$BltSubRegionBufferStrategy::init$($Component* this$0, int32_t numBuffers, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$Component$BltBufferStrategy::init$(this$0, numBuffers, caps);
}

void Component$BltSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	showSubRegion(x1, y1, x2, y2);
}

bool Component$BltSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (!contentsLost()) {
		showSubRegion(x1, y1, x2, y2);
		return !contentsLost();
	}
	return false;
}

Component$BltSubRegionBufferStrategy::Component$BltSubRegionBufferStrategy() {
}

$Class* Component$BltSubRegionBufferStrategy::load$($String* name, bool initialize) {
	$loadClass(Component$BltSubRegionBufferStrategy, name, initialize, &_Component$BltSubRegionBufferStrategy_ClassInfo_, allocate$Component$BltSubRegionBufferStrategy);
	return class$;
}

$Class* Component$BltSubRegionBufferStrategy::class$ = nullptr;

	} // awt
} // java