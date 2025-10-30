#include <javax/swing/DebugGraphicsObserver.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _DebugGraphicsObserver_FieldInfo_[] = {
	{"lastInfo", "I", nullptr, 0, $field(DebugGraphicsObserver, lastInfo)},
	{}
};

$MethodInfo _DebugGraphicsObserver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DebugGraphicsObserver::*)()>(&DebugGraphicsObserver::init$))},
	{"allBitsPresent", "()Z", nullptr, $SYNCHRONIZED},
	{"imageHasProblem", "()Z", nullptr, $SYNCHRONIZED},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _DebugGraphicsObserver_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DebugGraphicsObserver",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_DebugGraphicsObserver_FieldInfo_,
	_DebugGraphicsObserver_MethodInfo_
};

$Object* allocate$DebugGraphicsObserver($Class* clazz) {
	return $of($alloc(DebugGraphicsObserver));
}

void DebugGraphicsObserver::init$() {
}

bool DebugGraphicsObserver::allBitsPresent() {
	$synchronized(this) {
		return ((int32_t)(this->lastInfo & (uint32_t)$ImageObserver::ALLBITS)) != 0;
	}
}

bool DebugGraphicsObserver::imageHasProblem() {
	$synchronized(this) {
		return (((int32_t)(this->lastInfo & (uint32_t)$ImageObserver::ERROR)) != 0 || ((int32_t)(this->lastInfo & (uint32_t)$ImageObserver::ABORT)) != 0);
	}
}

bool DebugGraphicsObserver::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(this) {
		this->lastInfo = infoflags;
		return true;
	}
}

DebugGraphicsObserver::DebugGraphicsObserver() {
}

$Class* DebugGraphicsObserver::load$($String* name, bool initialize) {
	$loadClass(DebugGraphicsObserver, name, initialize, &_DebugGraphicsObserver_ClassInfo_, allocate$DebugGraphicsObserver);
	return class$;
}

$Class* DebugGraphicsObserver::class$ = nullptr;

	} // swing
} // javax