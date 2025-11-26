#include <javax/swing/plaf/nimbus/Effect$EffectType.h>

#include <java/lang/Enum.h>
#include <javax/swing/plaf/nimbus/Effect.h>
#include <jcpp.h>

#undef BLENDED
#undef OVER
#undef UNDER

using $Effect$EffectTypeArray = $Array<::javax::swing::plaf::nimbus::Effect$EffectType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Effect = ::javax::swing::plaf::nimbus::Effect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _Effect$EffectType_FieldInfo_[] = {
	{"UNDER", "Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Effect$EffectType, UNDER)},
	{"BLENDED", "Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Effect$EffectType, BLENDED)},
	{"OVER", "Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Effect$EffectType, OVER)},
	{"$VALUES", "[Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Effect$EffectType, $VALUES)},
	{}
};

$MethodInfo _Effect$EffectType_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Effect$EffectTypeArray*(*)()>(&Effect$EffectType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Effect$EffectType::*)($String*,int32_t)>(&Effect$EffectType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Effect$EffectType*(*)($String*)>(&Effect$EffectType::valueOf))},
	{"values", "()[Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Effect$EffectTypeArray*(*)()>(&Effect$EffectType::values))},
	{}
};

$InnerClassInfo _Effect$EffectType_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.Effect$EffectType", "javax.swing.plaf.nimbus.Effect", "EffectType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Effect$EffectType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.plaf.nimbus.Effect$EffectType",
	"java.lang.Enum",
	nullptr,
	_Effect$EffectType_FieldInfo_,
	_Effect$EffectType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/plaf/nimbus/Effect$EffectType;>;",
	nullptr,
	_Effect$EffectType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.Effect"
};

$Object* allocate$Effect$EffectType($Class* clazz) {
	return $of($alloc(Effect$EffectType));
}

Effect$EffectType* Effect$EffectType::UNDER = nullptr;
Effect$EffectType* Effect$EffectType::BLENDED = nullptr;
Effect$EffectType* Effect$EffectType::OVER = nullptr;
$Effect$EffectTypeArray* Effect$EffectType::$VALUES = nullptr;

$Effect$EffectTypeArray* Effect$EffectType::$values() {
	$init(Effect$EffectType);
	return $new($Effect$EffectTypeArray, {
		Effect$EffectType::UNDER,
		Effect$EffectType::BLENDED,
		Effect$EffectType::OVER
	});
}

$Effect$EffectTypeArray* Effect$EffectType::values() {
	$init(Effect$EffectType);
	return $cast($Effect$EffectTypeArray, Effect$EffectType::$VALUES->clone());
}

Effect$EffectType* Effect$EffectType::valueOf($String* name) {
	$init(Effect$EffectType);
	return $cast(Effect$EffectType, $Enum::valueOf(Effect$EffectType::class$, name));
}

void Effect$EffectType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Effect$EffectType($Class* class$) {
	$assignStatic(Effect$EffectType::UNDER, $new(Effect$EffectType, "UNDER"_s, 0));
	$assignStatic(Effect$EffectType::BLENDED, $new(Effect$EffectType, "BLENDED"_s, 1));
	$assignStatic(Effect$EffectType::OVER, $new(Effect$EffectType, "OVER"_s, 2));
	$assignStatic(Effect$EffectType::$VALUES, Effect$EffectType::$values());
}

Effect$EffectType::Effect$EffectType() {
}

$Class* Effect$EffectType::load$($String* name, bool initialize) {
	$loadClass(Effect$EffectType, name, initialize, &_Effect$EffectType_ClassInfo_, clinit$Effect$EffectType, allocate$Effect$EffectType);
	return class$;
}

$Class* Effect$EffectType::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax