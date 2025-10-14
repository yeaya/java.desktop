#include <com/sun/java/swing/plaf/windows/TMSchema$TypeEnum.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema.h>
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

#undef BGTYPE
#undef BT_BORDERFILL
#undef BT_IMAGEFILE
#undef TEXTSHADOWTYPE
#undef TST_CONTINUOUS
#undef TST_NONE
#undef TST_SINGLE

using $TMSchema$TypeEnumArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum>;
using $TMSchema = ::com::sun::java::swing::plaf::windows::TMSchema;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _TMSchema$TypeEnum_FieldInfo_[] = {
	{"BT_IMAGEFILE", "Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$TypeEnum, BT_IMAGEFILE)},
	{"BT_BORDERFILL", "Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$TypeEnum, BT_BORDERFILL)},
	{"TST_NONE", "Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$TypeEnum, TST_NONE)},
	{"TST_SINGLE", "Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$TypeEnum, TST_SINGLE)},
	{"TST_CONTINUOUS", "Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$TypeEnum, TST_CONTINUOUS)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TMSchema$TypeEnum, $VALUES)},
	{"prop", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PRIVATE | $FINAL, $field(TMSchema$TypeEnum, prop)},
	{"enumName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TMSchema$TypeEnum, enumName)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(TMSchema$TypeEnum, value)},
	{}
};

$MethodInfo _TMSchema$TypeEnum_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TMSchema$TypeEnumArray*(*)()>(&TMSchema$TypeEnum::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/java/swing/plaf/windows/TMSchema$Prop;Ljava/lang/String;I)V", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;Ljava/lang/String;I)V", $PRIVATE, $method(static_cast<void(TMSchema$TypeEnum::*)($String*,int32_t,$TMSchema$Prop*,$String*,int32_t)>(&TMSchema$TypeEnum::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(TMSchema$TypeEnum::*)()>(&TMSchema$TypeEnum::getName))},
	{"getTypeEnum", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;I)Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $STATIC, $method(static_cast<TMSchema$TypeEnum*(*)($TMSchema$Prop*,int32_t)>(&TMSchema$TypeEnum::getTypeEnum))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TMSchema$TypeEnum*(*)($String*)>(&TMSchema$TypeEnum::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TMSchema$TypeEnumArray*(*)()>(&TMSchema$TypeEnum::values))},
	{}
};

$InnerClassInfo _TMSchema$TypeEnum_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.TMSchema$TypeEnum", "com.sun.java.swing.plaf.windows.TMSchema", "TypeEnum", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TMSchema$TypeEnum_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.windows.TMSchema$TypeEnum",
	"java.lang.Enum",
	nullptr,
	_TMSchema$TypeEnum_FieldInfo_,
	_TMSchema$TypeEnum_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;>;",
	nullptr,
	_TMSchema$TypeEnum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.TMSchema"
};

$Object* allocate$TMSchema$TypeEnum($Class* clazz) {
	return $of($alloc(TMSchema$TypeEnum));
}

TMSchema$TypeEnum* TMSchema$TypeEnum::BT_IMAGEFILE = nullptr;
TMSchema$TypeEnum* TMSchema$TypeEnum::BT_BORDERFILL = nullptr;
TMSchema$TypeEnum* TMSchema$TypeEnum::TST_NONE = nullptr;
TMSchema$TypeEnum* TMSchema$TypeEnum::TST_SINGLE = nullptr;
TMSchema$TypeEnum* TMSchema$TypeEnum::TST_CONTINUOUS = nullptr;
$TMSchema$TypeEnumArray* TMSchema$TypeEnum::$VALUES = nullptr;

$TMSchema$TypeEnumArray* TMSchema$TypeEnum::$values() {
	$init(TMSchema$TypeEnum);
	return $new($TMSchema$TypeEnumArray, {
		TMSchema$TypeEnum::BT_IMAGEFILE,
		TMSchema$TypeEnum::BT_BORDERFILL,
		TMSchema$TypeEnum::TST_NONE,
		TMSchema$TypeEnum::TST_SINGLE,
		TMSchema$TypeEnum::TST_CONTINUOUS
	});
}

$TMSchema$TypeEnumArray* TMSchema$TypeEnum::values() {
	$init(TMSchema$TypeEnum);
	return $cast($TMSchema$TypeEnumArray, TMSchema$TypeEnum::$VALUES->clone());
}

TMSchema$TypeEnum* TMSchema$TypeEnum::valueOf($String* name) {
	$init(TMSchema$TypeEnum);
	return $cast(TMSchema$TypeEnum, $Enum::valueOf(TMSchema$TypeEnum::class$, name));
}

void TMSchema$TypeEnum::init$($String* $enum$name, int32_t $enum$ordinal, $TMSchema$Prop* prop, $String* enumName, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, prop, prop);
	$set(this, enumName, enumName);
	this->value = value;
}

$String* TMSchema$TypeEnum::toString() {
	return $str({this->prop, "="_s, this->enumName, "="_s, $$str(this->value)});
}

$String* TMSchema$TypeEnum::getName() {
	return this->enumName;
}

TMSchema$TypeEnum* TMSchema$TypeEnum::getTypeEnum($TMSchema$Prop* prop, int32_t enumval) {
	$init(TMSchema$TypeEnum);
	{
		$var($TMSchema$TypeEnumArray, arr$, TMSchema$TypeEnum::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			TMSchema$TypeEnum* e = arr$->get(i$);
			{
				if ($nc(e)->prop == prop && e->value == enumval) {
					return e;
				}
			}
		}
	}
	return nullptr;
}

void clinit$TMSchema$TypeEnum($Class* class$) {
	$init($TMSchema$Prop);
	$assignStatic(TMSchema$TypeEnum::BT_IMAGEFILE, $new(TMSchema$TypeEnum, "BT_IMAGEFILE"_s, 0, $TMSchema$Prop::BGTYPE, "imagefile"_s, 0));
	$assignStatic(TMSchema$TypeEnum::BT_BORDERFILL, $new(TMSchema$TypeEnum, "BT_BORDERFILL"_s, 1, $TMSchema$Prop::BGTYPE, "borderfill"_s, 1));
	$assignStatic(TMSchema$TypeEnum::TST_NONE, $new(TMSchema$TypeEnum, "TST_NONE"_s, 2, $TMSchema$Prop::TEXTSHADOWTYPE, "none"_s, 0));
	$assignStatic(TMSchema$TypeEnum::TST_SINGLE, $new(TMSchema$TypeEnum, "TST_SINGLE"_s, 3, $TMSchema$Prop::TEXTSHADOWTYPE, "single"_s, 1));
	$assignStatic(TMSchema$TypeEnum::TST_CONTINUOUS, $new(TMSchema$TypeEnum, "TST_CONTINUOUS"_s, 4, $TMSchema$Prop::TEXTSHADOWTYPE, "continuous"_s, 2));
	$assignStatic(TMSchema$TypeEnum::$VALUES, TMSchema$TypeEnum::$values());
}

TMSchema$TypeEnum::TMSchema$TypeEnum() {
}

$Class* TMSchema$TypeEnum::load$($String* name, bool initialize) {
	$loadClass(TMSchema$TypeEnum, name, initialize, &_TMSchema$TypeEnum_ClassInfo_, clinit$TMSchema$TypeEnum, allocate$TMSchema$TypeEnum);
	return class$;
}

$Class* TMSchema$TypeEnum::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com