#include <sun/lwawt/macosx/CAccessibleText$9.h>

#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessibleText = ::sun::lwawt::macosx::CAccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$9_FieldInfo_[] = {
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$9, val$index)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$9, val$a)},
	{}
};

$MethodInfo _CAccessibleText$9_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(static_cast<void(CAccessibleText$9::*)($Accessible*,int32_t)>(&CAccessibleText$9::init$))},
	{"call", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$9_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getLineNumberForIndex",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)I"
};

$InnerClassInfo _CAccessibleText$9_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$9",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$9_FieldInfo_,
	_CAccessibleText$9_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Integer;>;",
	&_CAccessibleText$9_EnclosingMethodInfo_,
	_CAccessibleText$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$9($Class* clazz) {
	return $of($alloc(CAccessibleText$9));
}

void CAccessibleText$9::init$($Accessible* val$a, int32_t val$index) {
	$set(this, val$a, val$a);
	this->val$index = val$index;
}

$Object* CAccessibleText$9::call() {
	return $of($Integer::valueOf($CAccessibleText::getLineNumberForIndex(this->val$a, this->val$index)));
}

CAccessibleText$9::CAccessibleText$9() {
}

$Class* CAccessibleText$9::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$9, name, initialize, &_CAccessibleText$9_ClassInfo_, allocate$CAccessibleText$9);
	return class$;
}

$Class* CAccessibleText$9::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun