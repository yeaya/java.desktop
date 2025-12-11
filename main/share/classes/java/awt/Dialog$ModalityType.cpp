#include <java/awt/Dialog$ModalityType.h>

#include <java/awt/Dialog.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APPLICATION_MODAL
#undef DOCUMENT_MODAL
#undef MODELESS
#undef TOOLKIT_MODAL

using $Dialog$ModalityTypeArray = $Array<::java::awt::Dialog$ModalityType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Dialog$ModalityType_FieldInfo_[] = {
	{"MODELESS", "Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalityType, MODELESS)},
	{"DOCUMENT_MODAL", "Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalityType, DOCUMENT_MODAL)},
	{"APPLICATION_MODAL", "Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalityType, APPLICATION_MODAL)},
	{"TOOLKIT_MODAL", "Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dialog$ModalityType, TOOLKIT_MODAL)},
	{"$VALUES", "[Ljava/awt/Dialog$ModalityType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Dialog$ModalityType, $VALUES)},
	{}
};

$MethodInfo _Dialog$ModalityType_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/Dialog$ModalityType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Dialog$ModalityTypeArray*(*)()>(&Dialog$ModalityType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Dialog$ModalityType::*)($String*,int32_t)>(&Dialog$ModalityType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Dialog$ModalityType*(*)($String*)>(&Dialog$ModalityType::valueOf))},
	{"values", "()[Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dialog$ModalityTypeArray*(*)()>(&Dialog$ModalityType::values))},
	{}
};

$InnerClassInfo _Dialog$ModalityType_InnerClassesInfo_[] = {
	{"java.awt.Dialog$ModalityType", "java.awt.Dialog", "ModalityType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dialog$ModalityType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.Dialog$ModalityType",
	"java.lang.Enum",
	nullptr,
	_Dialog$ModalityType_FieldInfo_,
	_Dialog$ModalityType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/Dialog$ModalityType;>;",
	nullptr,
	_Dialog$ModalityType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Dialog"
};

$Object* allocate$Dialog$ModalityType($Class* clazz) {
	return $of($alloc(Dialog$ModalityType));
}

Dialog$ModalityType* Dialog$ModalityType::MODELESS = nullptr;
Dialog$ModalityType* Dialog$ModalityType::DOCUMENT_MODAL = nullptr;
Dialog$ModalityType* Dialog$ModalityType::APPLICATION_MODAL = nullptr;
Dialog$ModalityType* Dialog$ModalityType::TOOLKIT_MODAL = nullptr;
$Dialog$ModalityTypeArray* Dialog$ModalityType::$VALUES = nullptr;

$Dialog$ModalityTypeArray* Dialog$ModalityType::$values() {
	$init(Dialog$ModalityType);
	return $new($Dialog$ModalityTypeArray, {
		Dialog$ModalityType::MODELESS,
		Dialog$ModalityType::DOCUMENT_MODAL,
		Dialog$ModalityType::APPLICATION_MODAL,
		Dialog$ModalityType::TOOLKIT_MODAL
	});
}

$Dialog$ModalityTypeArray* Dialog$ModalityType::values() {
	$init(Dialog$ModalityType);
	return $cast($Dialog$ModalityTypeArray, Dialog$ModalityType::$VALUES->clone());
}

Dialog$ModalityType* Dialog$ModalityType::valueOf($String* name) {
	$init(Dialog$ModalityType);
	return $cast(Dialog$ModalityType, $Enum::valueOf(Dialog$ModalityType::class$, name));
}

void Dialog$ModalityType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Dialog$ModalityType($Class* class$) {
	$assignStatic(Dialog$ModalityType::MODELESS, $new(Dialog$ModalityType, "MODELESS"_s, 0));
	$assignStatic(Dialog$ModalityType::DOCUMENT_MODAL, $new(Dialog$ModalityType, "DOCUMENT_MODAL"_s, 1));
	$assignStatic(Dialog$ModalityType::APPLICATION_MODAL, $new(Dialog$ModalityType, "APPLICATION_MODAL"_s, 2));
	$assignStatic(Dialog$ModalityType::TOOLKIT_MODAL, $new(Dialog$ModalityType, "TOOLKIT_MODAL"_s, 3));
	$assignStatic(Dialog$ModalityType::$VALUES, Dialog$ModalityType::$values());
}

Dialog$ModalityType::Dialog$ModalityType() {
}

$Class* Dialog$ModalityType::load$($String* name, bool initialize) {
	$loadClass(Dialog$ModalityType, name, initialize, &_Dialog$ModalityType_ClassInfo_, clinit$Dialog$ModalityType, allocate$Dialog$ModalityType);
	return class$;
}

$Class* Dialog$ModalityType::class$ = nullptr;

	} // awt
} // java