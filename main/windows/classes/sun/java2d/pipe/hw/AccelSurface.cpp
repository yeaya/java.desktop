#include <sun/java2d/pipe/hw/AccelSurface.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/pipe/hw/BufferedContextProvider.h>
#include <jcpp.h>

#undef FLIP_BACKBUFFER
#undef RT_PLAIN
#undef RT_TEXTURE
#undef TEXTURE
#undef UNDEFINED
#undef WINDOW

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Surface = ::sun::java2d::Surface;
using $BufferedContextProvider = ::sun::java2d::pipe::hw::BufferedContextProvider;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$FieldInfo _AccelSurface_FieldInfo_[] = {
	{"UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, UNDEFINED)},
	{"WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, WINDOW)},
	{"RT_PLAIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, RT_PLAIN)},
	{"TEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, TEXTURE)},
	{"FLIP_BACKBUFFER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, FLIP_BACKBUFFER)},
	{"RT_TEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccelSurface, RT_TEXTURE)},
	{}
};

$MethodInfo _AccelSurface_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNativeBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNativeOps", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getNativeResource", "(I)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isSurfaceLost", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"markDirty", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccelSurface_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.hw.AccelSurface",
	nullptr,
	"sun.java2d.pipe.hw.BufferedContextProvider,sun.java2d.Surface",
	_AccelSurface_FieldInfo_,
	_AccelSurface_MethodInfo_
};

$Object* allocate$AccelSurface($Class* clazz) {
	return $of($alloc(AccelSurface));
}

int32_t AccelSurface::hashCode() {
	 return this->$BufferedContextProvider::hashCode();
}

bool AccelSurface::equals(Object$* arg0) {
	 return this->$BufferedContextProvider::equals(arg0);
}

$Object* AccelSurface::clone() {
	 return this->$BufferedContextProvider::clone();
}

$String* AccelSurface::toString() {
	 return this->$BufferedContextProvider::toString();
}

void AccelSurface::finalize() {
	this->$BufferedContextProvider::finalize();
}

$Class* AccelSurface::load$($String* name, bool initialize) {
	$loadClass(AccelSurface, name, initialize, &_AccelSurface_ClassInfo_, allocate$AccelSurface);
	return class$;
}

$Class* AccelSurface::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun