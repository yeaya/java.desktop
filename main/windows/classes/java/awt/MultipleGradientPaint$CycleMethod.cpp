#include <java/awt/MultipleGradientPaint$CycleMethod.h>

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

#undef NO_CYCLE
#undef REFLECT
#undef REPEAT

using $MultipleGradientPaint$CycleMethodArray = $Array<::java::awt::MultipleGradientPaint$CycleMethod>;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _MultipleGradientPaint$CycleMethod_FieldInfo_[] = {
	{"NO_CYCLE", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$CycleMethod, NO_CYCLE)},
	{"REFLECT", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$CycleMethod, REFLECT)},
	{"REPEAT", "Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultipleGradientPaint$CycleMethod, REPEAT)},
	{"$VALUES", "[Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultipleGradientPaint$CycleMethod, $VALUES)},
	{}
};

$MethodInfo _MultipleGradientPaint$CycleMethod_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MultipleGradientPaint$CycleMethodArray*(*)()>(&MultipleGradientPaint$CycleMethod::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MultipleGradientPaint$CycleMethod::*)($String*,int32_t)>(&MultipleGradientPaint$CycleMethod::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MultipleGradientPaint$CycleMethod*(*)($String*)>(&MultipleGradientPaint$CycleMethod::valueOf))},
	{"values", "()[Ljava/awt/MultipleGradientPaint$CycleMethod;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MultipleGradientPaint$CycleMethodArray*(*)()>(&MultipleGradientPaint$CycleMethod::values))},
	{}
};

$InnerClassInfo _MultipleGradientPaint$CycleMethod_InnerClassesInfo_[] = {
	{"java.awt.MultipleGradientPaint$CycleMethod", "java.awt.MultipleGradientPaint", "CycleMethod", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultipleGradientPaint$CycleMethod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.MultipleGradientPaint$CycleMethod",
	"java.lang.Enum",
	nullptr,
	_MultipleGradientPaint$CycleMethod_FieldInfo_,
	_MultipleGradientPaint$CycleMethod_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/MultipleGradientPaint$CycleMethod;>;",
	nullptr,
	_MultipleGradientPaint$CycleMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MultipleGradientPaint"
};

$Object* allocate$MultipleGradientPaint$CycleMethod($Class* clazz) {
	return $of($alloc(MultipleGradientPaint$CycleMethod));
}


MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::NO_CYCLE = nullptr;

MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::REFLECT = nullptr;

MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::REPEAT = nullptr;
$MultipleGradientPaint$CycleMethodArray* MultipleGradientPaint$CycleMethod::$VALUES = nullptr;

$MultipleGradientPaint$CycleMethodArray* MultipleGradientPaint$CycleMethod::$values() {
	$init(MultipleGradientPaint$CycleMethod);
	return $new($MultipleGradientPaint$CycleMethodArray, {
		MultipleGradientPaint$CycleMethod::NO_CYCLE,
		MultipleGradientPaint$CycleMethod::REFLECT,
		MultipleGradientPaint$CycleMethod::REPEAT
	});
}

$MultipleGradientPaint$CycleMethodArray* MultipleGradientPaint$CycleMethod::values() {
	$init(MultipleGradientPaint$CycleMethod);
	return $cast($MultipleGradientPaint$CycleMethodArray, MultipleGradientPaint$CycleMethod::$VALUES->clone());
}

MultipleGradientPaint$CycleMethod* MultipleGradientPaint$CycleMethod::valueOf($String* name) {
	$init(MultipleGradientPaint$CycleMethod);
	return $cast(MultipleGradientPaint$CycleMethod, $Enum::valueOf(MultipleGradientPaint$CycleMethod::class$, name));
}

void MultipleGradientPaint$CycleMethod::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MultipleGradientPaint$CycleMethod($Class* class$) {
	$assignStatic(MultipleGradientPaint$CycleMethod::NO_CYCLE, $new(MultipleGradientPaint$CycleMethod, "NO_CYCLE"_s, 0));
	$assignStatic(MultipleGradientPaint$CycleMethod::REFLECT, $new(MultipleGradientPaint$CycleMethod, "REFLECT"_s, 1));
	$assignStatic(MultipleGradientPaint$CycleMethod::REPEAT, $new(MultipleGradientPaint$CycleMethod, "REPEAT"_s, 2));
	$assignStatic(MultipleGradientPaint$CycleMethod::$VALUES, MultipleGradientPaint$CycleMethod::$values());
}

MultipleGradientPaint$CycleMethod::MultipleGradientPaint$CycleMethod() {
}

$Class* MultipleGradientPaint$CycleMethod::load$($String* name, bool initialize) {
	$loadClass(MultipleGradientPaint$CycleMethod, name, initialize, &_MultipleGradientPaint$CycleMethod_ClassInfo_, clinit$MultipleGradientPaint$CycleMethod, allocate$MultipleGradientPaint$CycleMethod);
	return class$;
}

$Class* MultipleGradientPaint$CycleMethod::class$ = nullptr;

	} // awt
} // java