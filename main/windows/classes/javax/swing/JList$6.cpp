#include <javax/swing/JList$6.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

#undef INSERT
#undef ON
#undef ON_OR_INSERT
#undef USE_SELECTION

using $DropModeArray = $Array<::javax::swing::DropMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DropMode = ::javax::swing::DropMode;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

$FieldInfo _JList$6_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JList$6, $SwitchMap$javax$swing$DropMode)},
	{}
};

$EnclosingMethodInfo _JList$6_EnclosingMethodInfo_ = {
	"javax.swing.JList",
	nullptr,
	nullptr
};

$InnerClassInfo _JList$6_InnerClassesInfo_[] = {
	{"javax.swing.JList$6", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JList$6_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.JList$6",
	"java.lang.Object",
	nullptr,
	_JList$6_FieldInfo_,
	nullptr,
	nullptr,
	&_JList$6_EnclosingMethodInfo_,
	_JList$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$6($Class* clazz) {
	return $of($alloc(JList$6));
}

$ints* JList$6::$SwitchMap$javax$swing$DropMode = nullptr;

void clinit$JList$6($Class* class$) {
	$assignStatic(JList$6::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			$nc(JList$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JList$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JList$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::INSERT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JList$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON_OR_INSERT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JList$6::JList$6() {
}

$Class* JList$6::load$($String* name, bool initialize) {
	$loadClass(JList$6, name, initialize, &_JList$6_ClassInfo_, clinit$JList$6, allocate$JList$6);
	return class$;
}

$Class* JList$6::class$ = nullptr;

	} // swing
} // javax