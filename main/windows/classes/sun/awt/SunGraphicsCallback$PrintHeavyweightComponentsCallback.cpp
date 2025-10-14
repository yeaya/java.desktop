#include <sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunGraphicsCallback.h>
#include <jcpp.h>

#undef HEAVYWEIGHTS
#undef LIGHTWEIGHTS

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;

namespace sun {
	namespace awt {

$FieldInfo _SunGraphicsCallback$PrintHeavyweightComponentsCallback_FieldInfo_[] = {
	{"instance", "Lsun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphicsCallback$PrintHeavyweightComponentsCallback, instance)},
	{}
};

$MethodInfo _SunGraphicsCallback$PrintHeavyweightComponentsCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunGraphicsCallback$PrintHeavyweightComponentsCallback::*)()>(&SunGraphicsCallback$PrintHeavyweightComponentsCallback::init$))},
	{"getInstance", "()Lsun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SunGraphicsCallback$PrintHeavyweightComponentsCallback*(*)()>(&SunGraphicsCallback$PrintHeavyweightComponentsCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunGraphicsCallback$PrintHeavyweightComponentsCallback_InnerClassesInfo_[] = {
	{"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PrintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SunGraphicsCallback$PrintHeavyweightComponentsCallback_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback",
	"sun.awt.SunGraphicsCallback",
	nullptr,
	_SunGraphicsCallback$PrintHeavyweightComponentsCallback_FieldInfo_,
	_SunGraphicsCallback$PrintHeavyweightComponentsCallback_MethodInfo_,
	nullptr,
	nullptr,
	_SunGraphicsCallback$PrintHeavyweightComponentsCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunGraphicsCallback"
};

$Object* allocate$SunGraphicsCallback$PrintHeavyweightComponentsCallback($Class* clazz) {
	return $of($alloc(SunGraphicsCallback$PrintHeavyweightComponentsCallback));
}

SunGraphicsCallback$PrintHeavyweightComponentsCallback* SunGraphicsCallback$PrintHeavyweightComponentsCallback::instance = nullptr;

void SunGraphicsCallback$PrintHeavyweightComponentsCallback::init$() {
	$SunGraphicsCallback::init$();
}

void SunGraphicsCallback$PrintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if (!$nc(comp)->isLightweight()) {
		comp->printAll(cg);
	} else if ($instanceOf($Container, comp)) {
		runComponents($($nc(($cast($Container, comp)))->getComponents()), cg, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
	}
}

SunGraphicsCallback$PrintHeavyweightComponentsCallback* SunGraphicsCallback$PrintHeavyweightComponentsCallback::getInstance() {
	$init(SunGraphicsCallback$PrintHeavyweightComponentsCallback);
	return SunGraphicsCallback$PrintHeavyweightComponentsCallback::instance;
}

void clinit$SunGraphicsCallback$PrintHeavyweightComponentsCallback($Class* class$) {
	$assignStatic(SunGraphicsCallback$PrintHeavyweightComponentsCallback::instance, $new(SunGraphicsCallback$PrintHeavyweightComponentsCallback));
}

SunGraphicsCallback$PrintHeavyweightComponentsCallback::SunGraphicsCallback$PrintHeavyweightComponentsCallback() {
}

$Class* SunGraphicsCallback$PrintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$loadClass(SunGraphicsCallback$PrintHeavyweightComponentsCallback, name, initialize, &_SunGraphicsCallback$PrintHeavyweightComponentsCallback_ClassInfo_, clinit$SunGraphicsCallback$PrintHeavyweightComponentsCallback, allocate$SunGraphicsCallback$PrintHeavyweightComponentsCallback);
	return class$;
}

$Class* SunGraphicsCallback$PrintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // sun