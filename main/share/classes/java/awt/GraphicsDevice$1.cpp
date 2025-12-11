#include <java/awt/GraphicsDevice$1.h>

#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef PERPIXEL_TRANSLUCENT
#undef PERPIXEL_TRANSPARENT
#undef TRANSLUCENT

using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$FieldInfo _GraphicsDevice$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GraphicsDevice$1, $SwitchMap$java$awt$GraphicsDevice$WindowTranslucency)},
	{}
};

$EnclosingMethodInfo _GraphicsDevice$1_EnclosingMethodInfo_ = {
	"java.awt.GraphicsDevice",
	nullptr,
	nullptr
};

$InnerClassInfo _GraphicsDevice$1_InnerClassesInfo_[] = {
	{"java.awt.GraphicsDevice$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GraphicsDevice$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.awt.GraphicsDevice$1",
	"java.lang.Object",
	nullptr,
	_GraphicsDevice$1_FieldInfo_,
	nullptr,
	nullptr,
	&_GraphicsDevice$1_EnclosingMethodInfo_,
	_GraphicsDevice$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsDevice"
};

$Object* allocate$GraphicsDevice$1($Class* clazz) {
	return $of($alloc(GraphicsDevice$1));
}

$ints* GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency = nullptr;

void clinit$GraphicsDevice$1($Class* class$) {
	$assignStatic(GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency, $new($ints, $($GraphicsDevice$WindowTranslucency::values())->length));
	{
		try {
			$nc(GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency)->set($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSPARENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency)->set($GraphicsDevice$WindowTranslucency::TRANSLUCENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency)->set($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GraphicsDevice$1::GraphicsDevice$1() {
}

$Class* GraphicsDevice$1::load$($String* name, bool initialize) {
	$loadClass(GraphicsDevice$1, name, initialize, &_GraphicsDevice$1_ClassInfo_, clinit$GraphicsDevice$1, allocate$GraphicsDevice$1);
	return class$;
}

$Class* GraphicsDevice$1::class$ = nullptr;

	} // awt
} // java