#include <sun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback.h>

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

$FieldInfo _SunGraphicsCallback$PaintHeavyweightComponentsCallback_FieldInfo_[] = {
	{"instance", "Lsun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphicsCallback$PaintHeavyweightComponentsCallback, instance)},
	{}
};

$MethodInfo _SunGraphicsCallback$PaintHeavyweightComponentsCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunGraphicsCallback$PaintHeavyweightComponentsCallback::*)()>(&SunGraphicsCallback$PaintHeavyweightComponentsCallback::init$))},
	{"getInstance", "()Lsun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SunGraphicsCallback$PaintHeavyweightComponentsCallback*(*)()>(&SunGraphicsCallback$PaintHeavyweightComponentsCallback::getInstance))},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunGraphicsCallback$PaintHeavyweightComponentsCallback_InnerClassesInfo_[] = {
	{"sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PaintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SunGraphicsCallback$PaintHeavyweightComponentsCallback_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback",
	"sun.awt.SunGraphicsCallback",
	nullptr,
	_SunGraphicsCallback$PaintHeavyweightComponentsCallback_FieldInfo_,
	_SunGraphicsCallback$PaintHeavyweightComponentsCallback_MethodInfo_,
	nullptr,
	nullptr,
	_SunGraphicsCallback$PaintHeavyweightComponentsCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunGraphicsCallback"
};

$Object* allocate$SunGraphicsCallback$PaintHeavyweightComponentsCallback($Class* clazz) {
	return $of($alloc(SunGraphicsCallback$PaintHeavyweightComponentsCallback));
}

SunGraphicsCallback$PaintHeavyweightComponentsCallback* SunGraphicsCallback$PaintHeavyweightComponentsCallback::instance = nullptr;

void SunGraphicsCallback$PaintHeavyweightComponentsCallback::init$() {
	$SunGraphicsCallback::init$();
}

void SunGraphicsCallback$PaintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if (!$nc(comp)->isLightweight()) {
		comp->paintAll(cg);
	} else if ($instanceOf($Container, comp)) {
		runComponents($($nc(($cast($Container, comp)))->getComponents()), cg, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
	}
}

SunGraphicsCallback$PaintHeavyweightComponentsCallback* SunGraphicsCallback$PaintHeavyweightComponentsCallback::getInstance() {
	$init(SunGraphicsCallback$PaintHeavyweightComponentsCallback);
	return SunGraphicsCallback$PaintHeavyweightComponentsCallback::instance;
}

void clinit$SunGraphicsCallback$PaintHeavyweightComponentsCallback($Class* class$) {
	$assignStatic(SunGraphicsCallback$PaintHeavyweightComponentsCallback::instance, $new(SunGraphicsCallback$PaintHeavyweightComponentsCallback));
}

SunGraphicsCallback$PaintHeavyweightComponentsCallback::SunGraphicsCallback$PaintHeavyweightComponentsCallback() {
}

$Class* SunGraphicsCallback$PaintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$loadClass(SunGraphicsCallback$PaintHeavyweightComponentsCallback, name, initialize, &_SunGraphicsCallback$PaintHeavyweightComponentsCallback_ClassInfo_, clinit$SunGraphicsCallback$PaintHeavyweightComponentsCallback, allocate$SunGraphicsCallback$PaintHeavyweightComponentsCallback);
	return class$;
}

$Class* SunGraphicsCallback$PaintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // sun