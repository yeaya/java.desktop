#include <CloseOnMouseClickPropertyTest$1.h>

#include <CloseOnMouseClickPropertyTest$TestType.h>
#include <CloseOnMouseClickPropertyTest.h>
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
#include <jcpp.h>

#undef CHECK_BOX_MENU_ITEM
#undef MENU_ITEM
#undef RADIO_BUTTON_MENU_ITEM

using $CloseOnMouseClickPropertyTest = ::CloseOnMouseClickPropertyTest;
using $CloseOnMouseClickPropertyTest$TestType = ::CloseOnMouseClickPropertyTest$TestType;
using $CloseOnMouseClickPropertyTest$TestTypeArray = $Array<CloseOnMouseClickPropertyTest$TestType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$FieldInfo _CloseOnMouseClickPropertyTest$1_FieldInfo_[] = {
	{"$SwitchMap$CloseOnMouseClickPropertyTest$TestType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CloseOnMouseClickPropertyTest$1, $SwitchMap$CloseOnMouseClickPropertyTest$TestType)},
	{}
};

$EnclosingMethodInfo _CloseOnMouseClickPropertyTest$1_EnclosingMethodInfo_ = {
	"CloseOnMouseClickPropertyTest",
	nullptr,
	nullptr
};

$InnerClassInfo _CloseOnMouseClickPropertyTest$1_InnerClassesInfo_[] = {
	{"CloseOnMouseClickPropertyTest$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CloseOnMouseClickPropertyTest$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"CloseOnMouseClickPropertyTest$1",
	"java.lang.Object",
	nullptr,
	_CloseOnMouseClickPropertyTest$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CloseOnMouseClickPropertyTest$1_EnclosingMethodInfo_,
	_CloseOnMouseClickPropertyTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CloseOnMouseClickPropertyTest"
};

$Object* allocate$CloseOnMouseClickPropertyTest$1($Class* clazz) {
	return $of($alloc(CloseOnMouseClickPropertyTest$1));
}

$ints* CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType = nullptr;

void clinit$CloseOnMouseClickPropertyTest$1($Class* class$) {
	$assignStatic(CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType, $new($ints, $($CloseOnMouseClickPropertyTest$TestType::values())->length));
	{
		try {
			$nc(CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType)->set($CloseOnMouseClickPropertyTest$TestType::MENU_ITEM->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType)->set($CloseOnMouseClickPropertyTest$TestType::CHECK_BOX_MENU_ITEM->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CloseOnMouseClickPropertyTest$1::$SwitchMap$CloseOnMouseClickPropertyTest$TestType)->set($CloseOnMouseClickPropertyTest$TestType::RADIO_BUTTON_MENU_ITEM->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

CloseOnMouseClickPropertyTest$1::CloseOnMouseClickPropertyTest$1() {
}

$Class* CloseOnMouseClickPropertyTest$1::load$($String* name, bool initialize) {
	$loadClass(CloseOnMouseClickPropertyTest$1, name, initialize, &_CloseOnMouseClickPropertyTest$1_ClassInfo_, clinit$CloseOnMouseClickPropertyTest$1, allocate$CloseOnMouseClickPropertyTest$1);
	return class$;
}

$Class* CloseOnMouseClickPropertyTest$1::class$ = nullptr;