#include <java/awt/PointerInfo.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _PointerInfo_FieldInfo_[] = {
	{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(PointerInfo, device)},
	{"location", "Ljava/awt/Point;", nullptr, $PRIVATE | $FINAL, $field(PointerInfo, location)},
	{}
};

$MethodInfo _PointerInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsDevice;Ljava/awt/Point;)V", nullptr, 0, $method(static_cast<void(PointerInfo::*)($GraphicsDevice*,$Point*)>(&PointerInfo::init$))},
	{"getDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PointerInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.PointerInfo",
	"java.lang.Object",
	nullptr,
	_PointerInfo_FieldInfo_,
	_PointerInfo_MethodInfo_
};

$Object* allocate$PointerInfo($Class* clazz) {
	return $of($alloc(PointerInfo));
}

void PointerInfo::init$($GraphicsDevice* device, $Point* location) {
	$set(this, device, device);
	$set(this, location, location);
}

$GraphicsDevice* PointerInfo::getDevice() {
	return this->device;
}

$Point* PointerInfo::getLocation() {
	return this->location;
}

PointerInfo::PointerInfo() {
}

$Class* PointerInfo::load$($String* name, bool initialize) {
	$loadClass(PointerInfo, name, initialize, &_PointerInfo_ClassInfo_, allocate$PointerInfo);
	return class$;
}

$Class* PointerInfo::class$ = nullptr;

	} // awt
} // java