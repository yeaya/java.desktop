#include <javax/swing/JTree$1.h>

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
#include <javax/swing/DropMode.h>
#include <javax/swing/JTree.h>
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
using $JTree = ::javax::swing::JTree;

namespace javax {
	namespace swing {

$FieldInfo _JTree$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTree$1, $SwitchMap$javax$swing$DropMode)},
	{}
};

$EnclosingMethodInfo _JTree$1_EnclosingMethodInfo_ = {
	"javax.swing.JTree",
	nullptr,
	nullptr
};

$InnerClassInfo _JTree$1_InnerClassesInfo_[] = {
	{"javax.swing.JTree$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JTree$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.JTree$1",
	"java.lang.Object",
	nullptr,
	_JTree$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JTree$1_EnclosingMethodInfo_,
	_JTree$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$1($Class* clazz) {
	return $of($alloc(JTree$1));
}

$ints* JTree$1::$SwitchMap$javax$swing$DropMode = nullptr;

void clinit$JTree$1($Class* class$) {
	$assignStatic(JTree$1::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			$nc(JTree$1::$SwitchMap$javax$swing$DropMode)->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JTree$1::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JTree$1::$SwitchMap$javax$swing$DropMode)->set($DropMode::INSERT->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JTree$1::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON_OR_INSERT->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

JTree$1::JTree$1() {
}

$Class* JTree$1::load$($String* name, bool initialize) {
	$loadClass(JTree$1, name, initialize, &_JTree$1_ClassInfo_, clinit$JTree$1, allocate$JTree$1);
	return class$;
}

$Class* JTree$1::class$ = nullptr;

	} // swing
} // javax