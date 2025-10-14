#include <javax/swing/MultiUIDefaults$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <javax/swing/MultiUIDefaults.h>
#include <jcpp.h>

#undef ELEMENTS
#undef KEYS

using $MultiUIDefaults$MultiUIDefaultsEnumerator$TypeArray = $Array<::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MultiUIDefaults = ::javax::swing::MultiUIDefaults;
using $MultiUIDefaults$MultiUIDefaultsEnumerator = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator;
using $MultiUIDefaults$MultiUIDefaultsEnumerator$Type = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type;

namespace javax {
	namespace swing {

$FieldInfo _MultiUIDefaults$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MultiUIDefaults$1, $SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type)},
	{}
};

$EnclosingMethodInfo _MultiUIDefaults$1_EnclosingMethodInfo_ = {
	"javax.swing.MultiUIDefaults",
	nullptr,
	nullptr
};

$InnerClassInfo _MultiUIDefaults$1_InnerClassesInfo_[] = {
	{"javax.swing.MultiUIDefaults$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MultiUIDefaults$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.MultiUIDefaults$1",
	"java.lang.Object",
	nullptr,
	_MultiUIDefaults$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MultiUIDefaults$1_EnclosingMethodInfo_,
	_MultiUIDefaults$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.MultiUIDefaults"
};

$Object* allocate$MultiUIDefaults$1($Class* clazz) {
	return $of($alloc(MultiUIDefaults$1));
}

$ints* MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type = nullptr;

void clinit$MultiUIDefaults$1($Class* class$) {
	$assignStatic(MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type, $new($ints, $($MultiUIDefaults$MultiUIDefaultsEnumerator$Type::values())->length));
	{
		try {
			$nc(MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type)->set($MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type)->set($MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

MultiUIDefaults$1::MultiUIDefaults$1() {
}

$Class* MultiUIDefaults$1::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaults$1, name, initialize, &_MultiUIDefaults$1_ClassInfo_, clinit$MultiUIDefaults$1, allocate$MultiUIDefaults$1);
	return class$;
}

$Class* MultiUIDefaults$1::class$ = nullptr;

	} // swing
} // javax