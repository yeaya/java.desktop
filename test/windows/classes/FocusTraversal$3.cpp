#include <FocusTraversal$3.h>

#include <FocusTraversal.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <javax/swing/FocusManager.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $FocusTraversal = ::FocusTraversal;
using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $FocusManager = ::javax::swing::FocusManager;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _FocusTraversal$3_FieldInfo_[] = {
	{"val$direction", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$3, val$direction)},
	{"val$queriedFocusOwner", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$3, val$queriedFocusOwner)},
	{}
};

$MethodInfo _FocusTraversal$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(FocusTraversal$3::*)($Component*,$String*)>(&FocusTraversal$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FocusTraversal$3_EnclosingMethodInfo_ = {
	"FocusTraversal",
	"isFocusOwner",
	"(Ljava/awt/Component;Ljava/lang/String;)V"
};

$InnerClassInfo _FocusTraversal$3_InnerClassesInfo_[] = {
	{"FocusTraversal$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusTraversal$3_ClassInfo_ = {
	$ACC_SUPER,
	"FocusTraversal$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_FocusTraversal$3_FieldInfo_,
	_FocusTraversal$3_MethodInfo_,
	nullptr,
	&_FocusTraversal$3_EnclosingMethodInfo_,
	_FocusTraversal$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FocusTraversal"
};

$Object* allocate$FocusTraversal$3($Class* clazz) {
	return $of($alloc(FocusTraversal$3));
}

void FocusTraversal$3::init$($Component* val$queriedFocusOwner, $String* val$direction) {
	$set(this, val$queriedFocusOwner, val$queriedFocusOwner);
	$set(this, val$direction, val$direction);
}

void FocusTraversal$3::run() {
	$useLocalCurrentObjectStackCache();
	$var($Component, actualFocusOwner, $nc($($FocusManager::getCurrentManager()))->getFocusOwner());
	if (actualFocusOwner != this->val$queriedFocusOwner) {
		$init($FocusTraversal);
		$nc($FocusTraversal::frame)->dispose();
		$throwNew($RuntimeException, $$str({"Focus component is wrong after "_s, this->val$direction, " direction "_s}));
	}
}

FocusTraversal$3::FocusTraversal$3() {
}

$Class* FocusTraversal$3::load$($String* name, bool initialize) {
	$loadClass(FocusTraversal$3, name, initialize, &_FocusTraversal$3_ClassInfo_, allocate$FocusTraversal$3);
	return class$;
}

$Class* FocusTraversal$3::class$ = nullptr;