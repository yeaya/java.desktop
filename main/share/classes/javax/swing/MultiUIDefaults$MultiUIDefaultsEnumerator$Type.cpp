#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>

#include <java/lang/Enum.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <javax/swing/MultiUIDefaults.h>
#include <jcpp.h>

#undef ELEMENTS
#undef KEYS

using $MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray = $Array<::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _MultiUIDefaults$MultiUIDefaultsEnumerator$Type_FieldInfo_[] = {
	{"KEYS", "Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, KEYS)},
	{"ELEMENTS", "Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, ELEMENTS)},
	{"$VALUES", "[Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $VALUES)},
	{}
};

$MethodInfo _MultiUIDefaults$MultiUIDefaultsEnumerator$Type_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray*(*)()>(&MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::*)($String*,int32_t)>(&MultiUIDefaults$MultiUIDefaultsEnumerator$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MultiUIDefaults$MultiUIDefaultsEnumerator$Type*(*)($String*)>(&MultiUIDefaults$MultiUIDefaultsEnumerator$Type::valueOf))},
	{"values", "()[Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray*(*)()>(&MultiUIDefaults$MultiUIDefaultsEnumerator$Type::values))},
	{}
};

$InnerClassInfo _MultiUIDefaults$MultiUIDefaultsEnumerator$Type_InnerClassesInfo_[] = {
	{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "javax.swing.MultiUIDefaults", "MultiUIDefaultsEnumerator", $PRIVATE | $STATIC},
	{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type", "javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MultiUIDefaults$MultiUIDefaultsEnumerator$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type",
	"java.lang.Enum",
	nullptr,
	_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_FieldInfo_,
	_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;>;",
	nullptr,
	_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.MultiUIDefaults"
};

$Object* allocate$MultiUIDefaults$MultiUIDefaultsEnumerator$Type($Class* clazz) {
	return $of($alloc(MultiUIDefaults$MultiUIDefaultsEnumerator$Type));
}

MultiUIDefaults$MultiUIDefaultsEnumerator$Type* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS = nullptr;
MultiUIDefaults$MultiUIDefaultsEnumerator$Type* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS = nullptr;
$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$VALUES = nullptr;

$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$values() {
	$init(MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $new($MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray, {
		MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS,
		MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS
	});
}

$MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::values() {
	$init(MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $cast($MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray, MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$VALUES->clone());
}

MultiUIDefaults$MultiUIDefaultsEnumerator$Type* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::valueOf($String* name) {
	$init(MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $cast(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $Enum::valueOf(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::class$, name));
}

void MultiUIDefaults$MultiUIDefaultsEnumerator$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MultiUIDefaults$MultiUIDefaultsEnumerator$Type($Class* class$) {
	$assignStatic(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS, $new(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, "KEYS"_s, 0));
	$assignStatic(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS, $new(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, "ELEMENTS"_s, 1));
	$assignStatic(MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$VALUES, MultiUIDefaults$MultiUIDefaultsEnumerator$Type::$values());
}

MultiUIDefaults$MultiUIDefaultsEnumerator$Type::MultiUIDefaults$MultiUIDefaultsEnumerator$Type() {
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaults$MultiUIDefaultsEnumerator$Type, name, initialize, &_MultiUIDefaults$MultiUIDefaultsEnumerator$Type_ClassInfo_, clinit$MultiUIDefaults$MultiUIDefaultsEnumerator$Type, allocate$MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return class$;
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator$Type::class$ = nullptr;

	} // swing
} // javax