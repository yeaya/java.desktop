#include <java/awt/GridBagLayout$1.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/GridBagLayout.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef OTHER

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$FieldInfo _GridBagLayout$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Component$BaselineResizeBehavior", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GridBagLayout$1, $SwitchMap$java$awt$Component$BaselineResizeBehavior)},
	{}
};

$EnclosingMethodInfo _GridBagLayout$1_EnclosingMethodInfo_ = {
	"java.awt.GridBagLayout",
	nullptr,
	nullptr
};

$InnerClassInfo _GridBagLayout$1_InnerClassesInfo_[] = {
	{"java.awt.GridBagLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GridBagLayout$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.awt.GridBagLayout$1",
	"java.lang.Object",
	nullptr,
	_GridBagLayout$1_FieldInfo_,
	nullptr,
	nullptr,
	&_GridBagLayout$1_EnclosingMethodInfo_,
	_GridBagLayout$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GridBagLayout"
};

$Object* allocate$GridBagLayout$1($Class* clazz) {
	return $of($alloc(GridBagLayout$1));
}

$ints* GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior = nullptr;

void clinit$GridBagLayout$1($Class* class$) {
	$assignStatic(GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior, $new($ints, $($Component$BaselineResizeBehavior::values())->length));
	{
		try {
			$nc(GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CONSTANT_ASCENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CENTER_OFFSET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(GridBagLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::OTHER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GridBagLayout$1::GridBagLayout$1() {
}

$Class* GridBagLayout$1::load$($String* name, bool initialize) {
	$loadClass(GridBagLayout$1, name, initialize, &_GridBagLayout$1_ClassInfo_, clinit$GridBagLayout$1, allocate$GridBagLayout$1);
	return class$;
}

$Class* GridBagLayout$1::class$ = nullptr;

	} // awt
} // java