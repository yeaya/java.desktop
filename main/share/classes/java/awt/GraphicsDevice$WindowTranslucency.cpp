#include <java/awt/GraphicsDevice$WindowTranslucency.h>

#include <java/awt/GraphicsDevice.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef PERPIXEL_TRANSLUCENT
#undef PERPIXEL_TRANSPARENT
#undef TRANSLUCENT

using $GraphicsDevice$WindowTranslucencyArray = $Array<::java::awt::GraphicsDevice$WindowTranslucency>;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GraphicsDevice$WindowTranslucency_FieldInfo_[] = {
	{"PERPIXEL_TRANSPARENT", "Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GraphicsDevice$WindowTranslucency, PERPIXEL_TRANSPARENT)},
	{"TRANSLUCENT", "Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GraphicsDevice$WindowTranslucency, TRANSLUCENT)},
	{"PERPIXEL_TRANSLUCENT", "Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GraphicsDevice$WindowTranslucency, PERPIXEL_TRANSLUCENT)},
	{"$VALUES", "[Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GraphicsDevice$WindowTranslucency, $VALUES)},
	{}
};

$MethodInfo _GraphicsDevice$WindowTranslucency_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GraphicsDevice$WindowTranslucencyArray*(*)()>(&GraphicsDevice$WindowTranslucency::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GraphicsDevice$WindowTranslucency::*)($String*,int32_t)>(&GraphicsDevice$WindowTranslucency::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GraphicsDevice$WindowTranslucency*(*)($String*)>(&GraphicsDevice$WindowTranslucency::valueOf))},
	{"values", "()[Ljava/awt/GraphicsDevice$WindowTranslucency;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GraphicsDevice$WindowTranslucencyArray*(*)()>(&GraphicsDevice$WindowTranslucency::values))},
	{}
};

$InnerClassInfo _GraphicsDevice$WindowTranslucency_InnerClassesInfo_[] = {
	{"java.awt.GraphicsDevice$WindowTranslucency", "java.awt.GraphicsDevice", "WindowTranslucency", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GraphicsDevice$WindowTranslucency_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.GraphicsDevice$WindowTranslucency",
	"java.lang.Enum",
	nullptr,
	_GraphicsDevice$WindowTranslucency_FieldInfo_,
	_GraphicsDevice$WindowTranslucency_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/GraphicsDevice$WindowTranslucency;>;",
	nullptr,
	_GraphicsDevice$WindowTranslucency_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsDevice"
};

$Object* allocate$GraphicsDevice$WindowTranslucency($Class* clazz) {
	return $of($alloc(GraphicsDevice$WindowTranslucency));
}

GraphicsDevice$WindowTranslucency* GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSPARENT = nullptr;
GraphicsDevice$WindowTranslucency* GraphicsDevice$WindowTranslucency::TRANSLUCENT = nullptr;
GraphicsDevice$WindowTranslucency* GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT = nullptr;
$GraphicsDevice$WindowTranslucencyArray* GraphicsDevice$WindowTranslucency::$VALUES = nullptr;

$GraphicsDevice$WindowTranslucencyArray* GraphicsDevice$WindowTranslucency::$values() {
	$init(GraphicsDevice$WindowTranslucency);
	return $new($GraphicsDevice$WindowTranslucencyArray, {
		GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSPARENT,
		GraphicsDevice$WindowTranslucency::TRANSLUCENT,
		GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT
	});
}

$GraphicsDevice$WindowTranslucencyArray* GraphicsDevice$WindowTranslucency::values() {
	$init(GraphicsDevice$WindowTranslucency);
	return $cast($GraphicsDevice$WindowTranslucencyArray, GraphicsDevice$WindowTranslucency::$VALUES->clone());
}

GraphicsDevice$WindowTranslucency* GraphicsDevice$WindowTranslucency::valueOf($String* name) {
	$init(GraphicsDevice$WindowTranslucency);
	return $cast(GraphicsDevice$WindowTranslucency, $Enum::valueOf(GraphicsDevice$WindowTranslucency::class$, name));
}

void GraphicsDevice$WindowTranslucency::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GraphicsDevice$WindowTranslucency($Class* class$) {
	$assignStatic(GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSPARENT, $new(GraphicsDevice$WindowTranslucency, "PERPIXEL_TRANSPARENT"_s, 0));
	$assignStatic(GraphicsDevice$WindowTranslucency::TRANSLUCENT, $new(GraphicsDevice$WindowTranslucency, "TRANSLUCENT"_s, 1));
	$assignStatic(GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT, $new(GraphicsDevice$WindowTranslucency, "PERPIXEL_TRANSLUCENT"_s, 2));
	$assignStatic(GraphicsDevice$WindowTranslucency::$VALUES, GraphicsDevice$WindowTranslucency::$values());
}

GraphicsDevice$WindowTranslucency::GraphicsDevice$WindowTranslucency() {
}

$Class* GraphicsDevice$WindowTranslucency::load$($String* name, bool initialize) {
	$loadClass(GraphicsDevice$WindowTranslucency, name, initialize, &_GraphicsDevice$WindowTranslucency_ClassInfo_, clinit$GraphicsDevice$WindowTranslucency, allocate$GraphicsDevice$WindowTranslucency);
	return class$;
}

$Class* GraphicsDevice$WindowTranslucency::class$ = nullptr;

	} // awt
} // java