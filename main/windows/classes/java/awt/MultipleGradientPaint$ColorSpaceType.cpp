#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>

#include <java/awt/MultipleGradientPaint.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef SRGB

using $MultipleGradientPaint$ColorSpaceTypeArray = $Array<::java::awt::MultipleGradientPaint$ColorSpaceType>;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _MultipleGradientPaint$ColorSpaceType_FieldInfo_[] = {
	{"SRGB", "Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$ColorSpaceType, SRGB)},
	{"LINEAR_RGB", "Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$ColorSpaceType, LINEAR_RGB)},
	{"$VALUES", "[Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultipleGradientPaint$ColorSpaceType, $VALUES)},
	{}
};

$MethodInfo _MultipleGradientPaint$ColorSpaceType_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MultipleGradientPaint$ColorSpaceTypeArray*(*)()>(&MultipleGradientPaint$ColorSpaceType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MultipleGradientPaint$ColorSpaceType::*)($String*,int32_t)>(&MultipleGradientPaint$ColorSpaceType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MultipleGradientPaint$ColorSpaceType*(*)($String*)>(&MultipleGradientPaint$ColorSpaceType::valueOf))},
	{"values", "()[Ljava/awt/MultipleGradientPaint$ColorSpaceType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MultipleGradientPaint$ColorSpaceTypeArray*(*)()>(&MultipleGradientPaint$ColorSpaceType::values))},
	{}
};

$InnerClassInfo _MultipleGradientPaint$ColorSpaceType_InnerClassesInfo_[] = {
	{"java.awt.MultipleGradientPaint$ColorSpaceType", "java.awt.MultipleGradientPaint", "ColorSpaceType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultipleGradientPaint$ColorSpaceType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.MultipleGradientPaint$ColorSpaceType",
	"java.lang.Enum",
	nullptr,
	_MultipleGradientPaint$ColorSpaceType_FieldInfo_,
	_MultipleGradientPaint$ColorSpaceType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/MultipleGradientPaint$ColorSpaceType;>;",
	nullptr,
	_MultipleGradientPaint$ColorSpaceType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MultipleGradientPaint"
};

$Object* allocate$MultipleGradientPaint$ColorSpaceType($Class* clazz) {
	return $of($alloc(MultipleGradientPaint$ColorSpaceType));
}


MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint$ColorSpaceType::SRGB = nullptr;

MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint$ColorSpaceType::LINEAR_RGB = nullptr;
$MultipleGradientPaint$ColorSpaceTypeArray* MultipleGradientPaint$ColorSpaceType::$VALUES = nullptr;

$MultipleGradientPaint$ColorSpaceTypeArray* MultipleGradientPaint$ColorSpaceType::$values() {
	$init(MultipleGradientPaint$ColorSpaceType);
	return $new($MultipleGradientPaint$ColorSpaceTypeArray, {
		MultipleGradientPaint$ColorSpaceType::SRGB,
		MultipleGradientPaint$ColorSpaceType::LINEAR_RGB
	});
}

$MultipleGradientPaint$ColorSpaceTypeArray* MultipleGradientPaint$ColorSpaceType::values() {
	$init(MultipleGradientPaint$ColorSpaceType);
	return $cast($MultipleGradientPaint$ColorSpaceTypeArray, MultipleGradientPaint$ColorSpaceType::$VALUES->clone());
}

MultipleGradientPaint$ColorSpaceType* MultipleGradientPaint$ColorSpaceType::valueOf($String* name) {
	$init(MultipleGradientPaint$ColorSpaceType);
	return $cast(MultipleGradientPaint$ColorSpaceType, $Enum::valueOf(MultipleGradientPaint$ColorSpaceType::class$, name));
}

void MultipleGradientPaint$ColorSpaceType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MultipleGradientPaint$ColorSpaceType($Class* class$) {
	$assignStatic(MultipleGradientPaint$ColorSpaceType::SRGB, $new(MultipleGradientPaint$ColorSpaceType, "SRGB"_s, 0));
	$assignStatic(MultipleGradientPaint$ColorSpaceType::LINEAR_RGB, $new(MultipleGradientPaint$ColorSpaceType, "LINEAR_RGB"_s, 1));
	$assignStatic(MultipleGradientPaint$ColorSpaceType::$VALUES, MultipleGradientPaint$ColorSpaceType::$values());
}

MultipleGradientPaint$ColorSpaceType::MultipleGradientPaint$ColorSpaceType() {
}

$Class* MultipleGradientPaint$ColorSpaceType::load$($String* name, bool initialize) {
	$loadClass(MultipleGradientPaint$ColorSpaceType, name, initialize, &_MultipleGradientPaint$ColorSpaceType_ClassInfo_, clinit$MultipleGradientPaint$ColorSpaceType, allocate$MultipleGradientPaint$ColorSpaceType);
	return class$;
}

$Class* MultipleGradientPaint$ColorSpaceType::class$ = nullptr;

	} // awt
} // java