#include <java/awt/ModalEventFilter$1.h>

#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/ModalEventFilter.h>
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

#undef APPLICATION_MODAL
#undef DOCUMENT_MODAL
#undef TOOLKIT_MODAL

using $Dialog$ModalityTypeArray = $Array<::java::awt::Dialog$ModalityType>;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $ModalEventFilter = ::java::awt::ModalEventFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$FieldInfo _ModalEventFilter$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Dialog$ModalityType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ModalEventFilter$1, $SwitchMap$java$awt$Dialog$ModalityType)},
	{}
};

$EnclosingMethodInfo _ModalEventFilter$1_EnclosingMethodInfo_ = {
	"java.awt.ModalEventFilter",
	nullptr,
	nullptr
};

$InnerClassInfo _ModalEventFilter$1_InnerClassesInfo_[] = {
	{"java.awt.ModalEventFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ModalEventFilter$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.awt.ModalEventFilter$1",
	"java.lang.Object",
	nullptr,
	_ModalEventFilter$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ModalEventFilter$1_EnclosingMethodInfo_,
	_ModalEventFilter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.ModalEventFilter"
};

$Object* allocate$ModalEventFilter$1($Class* clazz) {
	return $of($alloc(ModalEventFilter$1));
}

$ints* ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType = nullptr;

void clinit$ModalEventFilter$1($Class* class$) {
	$assignStatic(ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType, $new($ints, $($Dialog$ModalityType::values())->length));
	{
		try {
			$nc(ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::DOCUMENT_MODAL->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::APPLICATION_MODAL->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ModalEventFilter$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::TOOLKIT_MODAL->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ModalEventFilter$1::ModalEventFilter$1() {
}

$Class* ModalEventFilter$1::load$($String* name, bool initialize) {
	$loadClass(ModalEventFilter$1, name, initialize, &_ModalEventFilter$1_ClassInfo_, clinit$ModalEventFilter$1, allocate$ModalEventFilter$1);
	return class$;
}

$Class* ModalEventFilter$1::class$ = nullptr;

	} // awt
} // java