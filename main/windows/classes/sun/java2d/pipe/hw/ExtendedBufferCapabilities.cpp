#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>
#include <jcpp.h>

#undef VSYNC_DEFAULT

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$FieldInfo _ExtendedBufferCapabilities_FieldInfo_[] = {
	{"vsync", "Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PRIVATE, $field(ExtendedBufferCapabilities, vsync)},
	{}
};

$MethodInfo _ExtendedBufferCapabilities_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedBufferCapabilities::*)($BufferCapabilities*)>(&ExtendedBufferCapabilities::init$))},
	{"<init>", "(Ljava/awt/ImageCapabilities;Ljava/awt/ImageCapabilities;Ljava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedBufferCapabilities::*)($ImageCapabilities*,$ImageCapabilities*,$BufferCapabilities$FlipContents*)>(&ExtendedBufferCapabilities::init$))},
	{"<init>", "(Ljava/awt/ImageCapabilities;Ljava/awt/ImageCapabilities;Ljava/awt/BufferCapabilities$FlipContents;Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedBufferCapabilities::*)($ImageCapabilities*,$ImageCapabilities*,$BufferCapabilities$FlipContents*,$ExtendedBufferCapabilities$VSyncType*)>(&ExtendedBufferCapabilities::init$))},
	{"<init>", "(Ljava/awt/BufferCapabilities;Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedBufferCapabilities::*)($BufferCapabilities*,$ExtendedBufferCapabilities$VSyncType*)>(&ExtendedBufferCapabilities::init$))},
	{"derive", "(Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;)Lsun/java2d/pipe/hw/ExtendedBufferCapabilities;", nullptr, $PUBLIC},
	{"getVSync", "()Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PUBLIC},
	{"isPageFlipping", "()Z", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ExtendedBufferCapabilities_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.hw.ExtendedBufferCapabilities$VSyncType", "sun.java2d.pipe.hw.ExtendedBufferCapabilities", "VSyncType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ExtendedBufferCapabilities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.hw.ExtendedBufferCapabilities",
	"java.awt.BufferCapabilities",
	nullptr,
	_ExtendedBufferCapabilities_FieldInfo_,
	_ExtendedBufferCapabilities_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedBufferCapabilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.hw.ExtendedBufferCapabilities$VSyncType"
};

$Object* allocate$ExtendedBufferCapabilities($Class* clazz) {
	return $of($alloc(ExtendedBufferCapabilities));
}

void ExtendedBufferCapabilities::init$($BufferCapabilities* caps) {
	$useLocalCurrentObjectStackCache();
	$var($ImageCapabilities, var$0, $nc(caps)->getFrontBufferCapabilities());
	$var($ImageCapabilities, var$1, caps->getBackBufferCapabilities());
	$BufferCapabilities::init$(var$0, var$1, $(caps->getFlipContents()));
	$init($ExtendedBufferCapabilities$VSyncType);
	$set(this, vsync, $ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT);
}

void ExtendedBufferCapabilities::init$($ImageCapabilities* front, $ImageCapabilities* back, $BufferCapabilities$FlipContents* flip) {
	$BufferCapabilities::init$(front, back, flip);
	$init($ExtendedBufferCapabilities$VSyncType);
	$set(this, vsync, $ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT);
}

void ExtendedBufferCapabilities::init$($ImageCapabilities* front, $ImageCapabilities* back, $BufferCapabilities$FlipContents* flip, $ExtendedBufferCapabilities$VSyncType* t) {
	$BufferCapabilities::init$(front, back, flip);
	$set(this, vsync, t);
}

void ExtendedBufferCapabilities::init$($BufferCapabilities* caps, $ExtendedBufferCapabilities$VSyncType* t) {
	$useLocalCurrentObjectStackCache();
	$var($ImageCapabilities, var$0, $nc(caps)->getFrontBufferCapabilities());
	$var($ImageCapabilities, var$1, caps->getBackBufferCapabilities());
	$BufferCapabilities::init$(var$0, var$1, $(caps->getFlipContents()));
	$set(this, vsync, t);
}

ExtendedBufferCapabilities* ExtendedBufferCapabilities::derive($ExtendedBufferCapabilities$VSyncType* t) {
	return $new(ExtendedBufferCapabilities, this, t);
}

$ExtendedBufferCapabilities$VSyncType* ExtendedBufferCapabilities::getVSync() {
	return this->vsync;
}

bool ExtendedBufferCapabilities::isPageFlipping() {
	return true;
}

ExtendedBufferCapabilities::ExtendedBufferCapabilities() {
}

$Class* ExtendedBufferCapabilities::load$($String* name, bool initialize) {
	$loadClass(ExtendedBufferCapabilities, name, initialize, &_ExtendedBufferCapabilities_ClassInfo_, allocate$ExtendedBufferCapabilities);
	return class$;
}

$Class* ExtendedBufferCapabilities::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun