#include <com/apple/laf/ScreenMenu$3.h>

#include <com/apple/laf/ScreenMenu.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $ScreenMenu = ::com::apple::laf::ScreenMenu;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenMenu$3_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/ScreenMenu;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$3, this$0)},
	{"val$invoker", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenMenu$3, val$invoker)},
	{}
};

$MethodInfo _ScreenMenu$3_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/ScreenMenu;Ljavax/swing/JMenu;)V", "()V", 0, $method(static_cast<void(ScreenMenu$3::*)($ScreenMenu*,$JMenu*)>(&ScreenMenu$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScreenMenu$3_EnclosingMethodInfo_ = {
	"com.apple.laf.ScreenMenu",
	"invokeMenuClosing",
	"()V"
};

$InnerClassInfo _ScreenMenu$3_InnerClassesInfo_[] = {
	{"com.apple.laf.ScreenMenu$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScreenMenu$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.ScreenMenu$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_ScreenMenu$3_FieldInfo_,
	_ScreenMenu$3_MethodInfo_,
	nullptr,
	&_ScreenMenu$3_EnclosingMethodInfo_,
	_ScreenMenu$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.ScreenMenu"
};

$Object* allocate$ScreenMenu$3($Class* clazz) {
	return $of($alloc(ScreenMenu$3));
}

void ScreenMenu$3::init$($ScreenMenu* this$0, $JMenu* val$invoker) {
	$set(this, this$0, this$0);
	$set(this, val$invoker, val$invoker);
}

void ScreenMenu$3::run() {
	$nc(this->val$invoker)->setSelected(false);
	if (this->this$0->fItemBounds != nullptr) {
		for (int32_t i = 0; i < $nc(this->this$0->fItemBounds)->length; ++i) {
			$nc(this->this$0->fItemBounds)->set(i, nullptr);
		}
	}
	$set(this->this$0, fItemBounds, nullptr);
}

ScreenMenu$3::ScreenMenu$3() {
}

$Class* ScreenMenu$3::load$($String* name, bool initialize) {
	$loadClass(ScreenMenu$3, name, initialize, &_ScreenMenu$3_ClassInfo_, allocate$ScreenMenu$3);
	return class$;
}

$Class* ScreenMenu$3::class$ = nullptr;

		} // laf
	} // apple
} // com