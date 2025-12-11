#include <javax/swing/text/JTextComponent$5.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef INSERT
#undef USE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DropMode = ::javax::swing::DropMode;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$5_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTextComponent$5, $SwitchMap$javax$swing$DropMode)},
	{}
};

$EnclosingMethodInfo _JTextComponent$5_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent",
	nullptr,
	nullptr
};

$InnerClassInfo _JTextComponent$5_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$5", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JTextComponent$5_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.text.JTextComponent$5",
	"java.lang.Object",
	nullptr,
	_JTextComponent$5_FieldInfo_,
	nullptr,
	nullptr,
	&_JTextComponent$5_EnclosingMethodInfo_,
	_JTextComponent$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$5($Class* clazz) {
	return $of($alloc(JTextComponent$5));
}

$ints* JTextComponent$5::$SwitchMap$javax$swing$DropMode = nullptr;

void clinit$JTextComponent$5($Class* class$) {
	$assignStatic(JTextComponent$5::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			$nc(JTextComponent$5::$SwitchMap$javax$swing$DropMode)->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTextComponent$5::$SwitchMap$javax$swing$DropMode)->set($DropMode::INSERT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JTextComponent$5::JTextComponent$5() {
}

$Class* JTextComponent$5::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$5, name, initialize, &_JTextComponent$5_ClassInfo_, clinit$JTextComponent$5, allocate$JTextComponent$5);
	return class$;
}

$Class* JTextComponent$5::class$ = nullptr;

		} // text
	} // swing
} // javax