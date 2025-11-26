#include <FocusTraversal$2.h>

#include <FocusTraversal.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $FocusTraversal = ::FocusTraversal;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _FocusTraversal$2_FieldInfo_[] = {
	{"val$component", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$2, val$component)},
	{}
};

$MethodInfo _FocusTraversal$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", "()V", 0, $method(static_cast<void(FocusTraversal$2::*)($Component*)>(&FocusTraversal$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FocusTraversal$2_EnclosingMethodInfo_ = {
	"FocusTraversal",
	"focusOn",
	"(Ljava/awt/Component;)V"
};

$InnerClassInfo _FocusTraversal$2_InnerClassesInfo_[] = {
	{"FocusTraversal$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusTraversal$2_ClassInfo_ = {
	$ACC_SUPER,
	"FocusTraversal$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_FocusTraversal$2_FieldInfo_,
	_FocusTraversal$2_MethodInfo_,
	nullptr,
	&_FocusTraversal$2_EnclosingMethodInfo_,
	_FocusTraversal$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FocusTraversal"
};

$Object* allocate$FocusTraversal$2($Class* clazz) {
	return $of($alloc(FocusTraversal$2));
}

void FocusTraversal$2::init$($Component* val$component) {
	$set(this, val$component, val$component);
}

void FocusTraversal$2::run() {
	$nc(this->val$component)->requestFocusInWindow();
}

FocusTraversal$2::FocusTraversal$2() {
}

$Class* FocusTraversal$2::load$($String* name, bool initialize) {
	$loadClass(FocusTraversal$2, name, initialize, &_FocusTraversal$2_ClassInfo_, allocate$FocusTraversal$2);
	return class$;
}

$Class* FocusTraversal$2::class$ = nullptr;