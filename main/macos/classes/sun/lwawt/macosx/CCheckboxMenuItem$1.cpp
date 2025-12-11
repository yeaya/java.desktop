#include <sun/lwawt/macosx/CCheckboxMenuItem$1.h>

#include <java/awt/CheckboxMenuItem.h>
#include <sun/lwawt/macosx/CCheckboxMenuItem.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CCheckboxMenuItem = ::sun::lwawt::macosx::CCheckboxMenuItem;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CCheckboxMenuItem$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CCheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CCheckboxMenuItem$1, this$0)},
	{"val$state", "Z", nullptr, $FINAL | $SYNTHETIC, $field(CCheckboxMenuItem$1, val$state)},
	{"val$target", "Ljava/awt/CheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CCheckboxMenuItem$1, val$target)},
	{}
};

$MethodInfo _CCheckboxMenuItem$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CCheckboxMenuItem;Ljava/awt/CheckboxMenuItem;Z)V", "()V", 0, $method(static_cast<void(CCheckboxMenuItem$1::*)($CCheckboxMenuItem*,$CheckboxMenuItem*,bool)>(&CCheckboxMenuItem$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CCheckboxMenuItem$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CCheckboxMenuItem",
	"handleAction",
	"(Z)V"
};

$InnerClassInfo _CCheckboxMenuItem$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CCheckboxMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CCheckboxMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CCheckboxMenuItem$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_CCheckboxMenuItem$1_FieldInfo_,
	_CCheckboxMenuItem$1_MethodInfo_,
	nullptr,
	&_CCheckboxMenuItem$1_EnclosingMethodInfo_,
	_CCheckboxMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CCheckboxMenuItem"
};

$Object* allocate$CCheckboxMenuItem$1($Class* clazz) {
	return $of($alloc(CCheckboxMenuItem$1));
}

void CCheckboxMenuItem$1::init$($CCheckboxMenuItem* this$0, $CheckboxMenuItem* val$target, bool val$state) {
	$set(this, this$0, this$0);
	$set(this, val$target, val$target);
	this->val$state = val$state;
}

void CCheckboxMenuItem$1::run() {
	$nc(this->val$target)->setState(this->val$state);
}

CCheckboxMenuItem$1::CCheckboxMenuItem$1() {
}

$Class* CCheckboxMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(CCheckboxMenuItem$1, name, initialize, &_CCheckboxMenuItem$1_ClassInfo_, allocate$CCheckboxMenuItem$1);
	return class$;
}

$Class* CCheckboxMenuItem$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun