#include <javax/swing/JTable$6.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef INSERT
#undef INSERT_COLS
#undef INSERT_ROWS
#undef ON
#undef ON_OR_INSERT
#undef ON_OR_INSERT_COLS
#undef ON_OR_INSERT_ROWS
#undef USE_SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DropMode = ::javax::swing::DropMode;

namespace javax {
	namespace swing {

$FieldInfo _JTable$6_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$DropMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTable$6, $SwitchMap$javax$swing$DropMode)},
	{}
};

$EnclosingMethodInfo _JTable$6_EnclosingMethodInfo_ = {
	"javax.swing.JTable",
	nullptr,
	nullptr
};

$InnerClassInfo _JTable$6_InnerClassesInfo_[] = {
	{"javax.swing.JTable$6", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JTable$6_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.JTable$6",
	"java.lang.Object",
	nullptr,
	_JTable$6_FieldInfo_,
	nullptr,
	nullptr,
	&_JTable$6_EnclosingMethodInfo_,
	_JTable$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$6($Class* clazz) {
	return $of($alloc(JTable$6));
}

$ints* JTable$6::$SwitchMap$javax$swing$DropMode = nullptr;

void clinit$JTable$6($Class* class$) {
	$assignStatic(JTable$6::$SwitchMap$javax$swing$DropMode, $new($ints, $($DropMode::values())->length));
	{
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::USE_SELECTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::INSERT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::INSERT_ROWS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::INSERT_COLS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON_OR_INSERT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON_OR_INSERT_ROWS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(JTable$6::$SwitchMap$javax$swing$DropMode)->set($DropMode::ON_OR_INSERT_COLS->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JTable$6::JTable$6() {
}

$Class* JTable$6::load$($String* name, bool initialize) {
	$loadClass(JTable$6, name, initialize, &_JTable$6_ClassInfo_, clinit$JTable$6, allocate$JTable$6);
	return class$;
}

$Class* JTable$6::class$ = nullptr;

	} // swing
} // javax