#include <java/awt/Dialog$1.h>

#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef APPLICATION_MODAL
#undef DOCUMENT_MODAL
#undef MODELESS
#undef TOOLKIT_MODAL

using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$FieldInfo _Dialog$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Dialog$ModalityType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Dialog$1, $SwitchMap$java$awt$Dialog$ModalityType)},
	{}
};

$EnclosingMethodInfo _Dialog$1_EnclosingMethodInfo_ = {
	"java.awt.Dialog",
	nullptr,
	nullptr
};

$InnerClassInfo _Dialog$1_InnerClassesInfo_[] = {
	{"java.awt.Dialog$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Dialog$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.awt.Dialog$1",
	"java.lang.Object",
	nullptr,
	_Dialog$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Dialog$1_EnclosingMethodInfo_,
	_Dialog$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Dialog"
};

$Object* allocate$Dialog$1($Class* clazz) {
	return $of($alloc(Dialog$1));
}

$ints* Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType = nullptr;

void clinit$Dialog$1($Class* class$) {
	$assignStatic(Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType, $new($ints, $($Dialog$ModalityType::values())->length));
	{
		try {
			$nc(Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::MODELESS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::DOCUMENT_MODAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::APPLICATION_MODAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType)->set($Dialog$ModalityType::TOOLKIT_MODAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Dialog$1::Dialog$1() {
}

$Class* Dialog$1::load$($String* name, bool initialize) {
	$loadClass(Dialog$1, name, initialize, &_Dialog$1_ClassInfo_, clinit$Dialog$1, allocate$Dialog$1);
	return class$;
}

$Class* Dialog$1::class$ = nullptr;

	} // awt
} // java