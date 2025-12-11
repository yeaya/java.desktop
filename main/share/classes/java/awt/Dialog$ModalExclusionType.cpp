#include <java/awt/Dialog$ModalExclusionType.h>

#include <java/awt/Dialog.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APPLICATION_EXCLUDE
#undef NO_EXCLUDE
#undef TOOLKIT_EXCLUDE

using $Dialog$ModalExclusionTypeArray = $Array<::java::awt::Dialog$ModalExclusionType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Dialog$ModalExclusionType_FieldInfo_[] = {
	{"NO_EXCLUDE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalExclusionType, NO_EXCLUDE)},
	{"APPLICATION_EXCLUDE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalExclusionType, APPLICATION_EXCLUDE)},
	{"TOOLKIT_EXCLUDE", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalExclusionType, TOOLKIT_EXCLUDE)},
	{"$VALUES", "[Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Dialog$ModalExclusionType, $VALUES)},
	{}
};

$MethodInfo _Dialog$ModalExclusionType_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Dialog$ModalExclusionTypeArray*(*)()>(&Dialog$ModalExclusionType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Dialog$ModalExclusionType::*)($String*,int32_t)>(&Dialog$ModalExclusionType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Dialog$ModalExclusionType*(*)($String*)>(&Dialog$ModalExclusionType::valueOf))},
	{"values", "()[Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dialog$ModalExclusionTypeArray*(*)()>(&Dialog$ModalExclusionType::values))},
	{}
};

$InnerClassInfo _Dialog$ModalExclusionType_InnerClassesInfo_[] = {
	{"java.awt.Dialog$ModalExclusionType", "java.awt.Dialog", "ModalExclusionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dialog$ModalExclusionType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.Dialog$ModalExclusionType",
	"java.lang.Enum",
	nullptr,
	_Dialog$ModalExclusionType_FieldInfo_,
	_Dialog$ModalExclusionType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/Dialog$ModalExclusionType;>;",
	nullptr,
	_Dialog$ModalExclusionType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Dialog"
};

$Object* allocate$Dialog$ModalExclusionType($Class* clazz) {
	return $of($alloc(Dialog$ModalExclusionType));
}

Dialog$ModalExclusionType* Dialog$ModalExclusionType::NO_EXCLUDE = nullptr;
Dialog$ModalExclusionType* Dialog$ModalExclusionType::APPLICATION_EXCLUDE = nullptr;
Dialog$ModalExclusionType* Dialog$ModalExclusionType::TOOLKIT_EXCLUDE = nullptr;
$Dialog$ModalExclusionTypeArray* Dialog$ModalExclusionType::$VALUES = nullptr;

$Dialog$ModalExclusionTypeArray* Dialog$ModalExclusionType::$values() {
	$init(Dialog$ModalExclusionType);
	return $new($Dialog$ModalExclusionTypeArray, {
		Dialog$ModalExclusionType::NO_EXCLUDE,
		Dialog$ModalExclusionType::APPLICATION_EXCLUDE,
		Dialog$ModalExclusionType::TOOLKIT_EXCLUDE
	});
}

$Dialog$ModalExclusionTypeArray* Dialog$ModalExclusionType::values() {
	$init(Dialog$ModalExclusionType);
	return $cast($Dialog$ModalExclusionTypeArray, Dialog$ModalExclusionType::$VALUES->clone());
}

Dialog$ModalExclusionType* Dialog$ModalExclusionType::valueOf($String* name) {
	$init(Dialog$ModalExclusionType);
	return $cast(Dialog$ModalExclusionType, $Enum::valueOf(Dialog$ModalExclusionType::class$, name));
}

void Dialog$ModalExclusionType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Dialog$ModalExclusionType($Class* class$) {
	$assignStatic(Dialog$ModalExclusionType::NO_EXCLUDE, $new(Dialog$ModalExclusionType, "NO_EXCLUDE"_s, 0));
	$assignStatic(Dialog$ModalExclusionType::APPLICATION_EXCLUDE, $new(Dialog$ModalExclusionType, "APPLICATION_EXCLUDE"_s, 1));
	$assignStatic(Dialog$ModalExclusionType::TOOLKIT_EXCLUDE, $new(Dialog$ModalExclusionType, "TOOLKIT_EXCLUDE"_s, 2));
	$assignStatic(Dialog$ModalExclusionType::$VALUES, Dialog$ModalExclusionType::$values());
}

Dialog$ModalExclusionType::Dialog$ModalExclusionType() {
}

$Class* Dialog$ModalExclusionType::load$($String* name, bool initialize) {
	$loadClass(Dialog$ModalExclusionType, name, initialize, &_Dialog$ModalExclusionType_ClassInfo_, clinit$Dialog$ModalExclusionType, allocate$Dialog$ModalExclusionType);
	return class$;
}

$Class* Dialog$ModalExclusionType::class$ = nullptr;

	} // awt
} // java