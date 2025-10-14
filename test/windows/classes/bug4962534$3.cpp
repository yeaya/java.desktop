#include <bug4962534$3.h>

#include <bug4962534.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef FRAME_CONTENT_LAYER

using $ComponentArray = $Array<::java::awt::Component>;
using $bug4962534 = ::bug4962534;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JLayeredPane = ::javax::swing::JLayeredPane;

$FieldInfo _bug4962534$3_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$3, this$0)},
	{}
};

$MethodInfo _bug4962534$3_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(static_cast<void(bug4962534$3::*)($bug4962534*)>(&bug4962534$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$3_EnclosingMethodInfo_ = {
	"bug4962534",
	"setTitleComponentEDT",
	"()V"
};

$InnerClassInfo _bug4962534$3_InnerClassesInfo_[] = {
	{"bug4962534$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$3_FieldInfo_,
	_bug4962534$3_MethodInfo_,
	nullptr,
	&_bug4962534$3_EnclosingMethodInfo_,
	_bug4962534$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$3($Class* clazz) {
	return $of($alloc(bug4962534$3));
}

void bug4962534$3::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$3::run() {
	$init($JLayeredPane);
	for (int32_t j = 0; j < $nc($($nc(this->this$0->lPane)->getComponentsInLayer($nc($JLayeredPane::FRAME_CONTENT_LAYER)->intValue())))->length; ++j) {
		$set(this->this$0, titleComponent, $nc($($nc(this->this$0->lPane)->getComponentsInLayer($nc($JLayeredPane::FRAME_CONTENT_LAYER)->intValue())))->get(j));
		if ($nc($($nc($of(this->this$0->titleComponent))->getClass()->getName()))->equals("javax.swing.plaf.metal.MetalTitlePane"_s)) {
			this->this$0->titleFound = true;
			break;
		}
	}
}

bug4962534$3::bug4962534$3() {
}

$Class* bug4962534$3::load$($String* name, bool initialize) {
	$loadClass(bug4962534$3, name, initialize, &_bug4962534$3_ClassInfo_, allocate$bug4962534$3);
	return class$;
}

$Class* bug4962534$3::class$ = nullptr;