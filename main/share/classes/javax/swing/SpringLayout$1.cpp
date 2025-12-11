#include <javax/swing/SpringLayout$1.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace javax {
	namespace swing {

$FieldInfo _SpringLayout$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Component$BaselineResizeBehavior", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SpringLayout$1, $SwitchMap$java$awt$Component$BaselineResizeBehavior)},
	{}
};

$EnclosingMethodInfo _SpringLayout$1_EnclosingMethodInfo_ = {
	"javax.swing.SpringLayout",
	nullptr,
	nullptr
};

$InnerClassInfo _SpringLayout$1_InnerClassesInfo_[] = {
	{"javax.swing.SpringLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SpringLayout$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.SpringLayout$1",
	"java.lang.Object",
	nullptr,
	_SpringLayout$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SpringLayout$1_EnclosingMethodInfo_,
	_SpringLayout$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SpringLayout"
};

$Object* allocate$SpringLayout$1($Class* clazz) {
	return $of($alloc(SpringLayout$1));
}

$ints* SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior = nullptr;

void clinit$SpringLayout$1($Class* class$) {
	$assignStatic(SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior, $new($ints, $($Component$BaselineResizeBehavior::values())->length));
	{
		try {
			$nc(SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CONSTANT_DESCENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CENTER_OFFSET->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SpringLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CONSTANT_ASCENT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SpringLayout$1::SpringLayout$1() {
}

$Class* SpringLayout$1::load$($String* name, bool initialize) {
	$loadClass(SpringLayout$1, name, initialize, &_SpringLayout$1_ClassInfo_, clinit$SpringLayout$1, allocate$SpringLayout$1);
	return class$;
}

$Class* SpringLayout$1::class$ = nullptr;

	} // swing
} // javax