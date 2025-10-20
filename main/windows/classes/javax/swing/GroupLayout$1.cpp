#include <javax/swing/GroupLayout$1.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
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
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

#undef CENTER
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef TRAILING

using $Component$BaselineResizeBehaviorArray = $Array<::java::awt::Component$BaselineResizeBehavior>;
using $GroupLayout$AlignmentArray = $Array<::javax::swing::GroupLayout$Alignment>;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Component$BaselineResizeBehavior", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$1, $SwitchMap$java$awt$Component$BaselineResizeBehavior)},
	{"$SwitchMap$javax$swing$GroupLayout$Alignment", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GroupLayout$1, $SwitchMap$javax$swing$GroupLayout$Alignment)},
	{}
};

$EnclosingMethodInfo _GroupLayout$1_EnclosingMethodInfo_ = {
	"javax.swing.GroupLayout",
	nullptr,
	nullptr
};

$InnerClassInfo _GroupLayout$1_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _GroupLayout$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.GroupLayout$1",
	"java.lang.Object",
	nullptr,
	_GroupLayout$1_FieldInfo_,
	nullptr,
	nullptr,
	&_GroupLayout$1_EnclosingMethodInfo_,
	_GroupLayout$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$1($Class* clazz) {
	return $of($alloc(GroupLayout$1));
}

$ints* GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior = nullptr;
$ints* GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment = nullptr;

void clinit$GroupLayout$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior, $new($ints, $($Component$BaselineResizeBehavior::values())->length));
	{
		try {
			$nc(GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CONSTANT_ASCENT->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupLayout$1::$SwitchMap$java$awt$Component$BaselineResizeBehavior)->set($Component$BaselineResizeBehavior::CONSTANT_DESCENT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment, $new($ints, $($GroupLayout$Alignment::values())->length));
	{
		try {
			$nc(GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment)->set($GroupLayout$Alignment::TRAILING->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(GroupLayout$1::$SwitchMap$javax$swing$GroupLayout$Alignment)->set($GroupLayout$Alignment::CENTER->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

GroupLayout$1::GroupLayout$1() {
}

$Class* GroupLayout$1::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$1, name, initialize, &_GroupLayout$1_ClassInfo_, clinit$GroupLayout$1, allocate$GroupLayout$1);
	return class$;
}

$Class* GroupLayout$1::class$ = nullptr;

	} // swing
} // javax