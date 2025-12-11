#include <sun/lwawt/macosx/CAccessibleText$11.h>

#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $CAccessibleText = ::sun::lwawt::macosx::CAccessibleText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$11_FieldInfo_[] = {
	{"val$line", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$11, val$line)},
	{"val$a", "Ljavax/accessibility/Accessible;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$11, val$a)},
	{}
};

$MethodInfo _CAccessibleText$11_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/Accessible;I)V", "()V", 0, $method(static_cast<void(CAccessibleText$11::*)($Accessible*,int32_t)>(&CAccessibleText$11::init$))},
	{"call", "()[I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CAccessibleText$11_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getRangeForLine",
	"(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)[I"
};

$InnerClassInfo _CAccessibleText$11_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$11_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$11",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$11_FieldInfo_,
	_CAccessibleText$11_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<[I>;",
	&_CAccessibleText$11_EnclosingMethodInfo_,
	_CAccessibleText$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$11($Class* clazz) {
	return $of($alloc(CAccessibleText$11));
}

void CAccessibleText$11::init$($Accessible* val$a, int32_t val$line) {
	$set(this, val$a, val$a);
	this->val$line = val$line;
}

$Object* CAccessibleText$11::call() {
	return $of($CAccessibleText::getRangeForLine(this->val$a, this->val$line));
}

CAccessibleText$11::CAccessibleText$11() {
}

$Class* CAccessibleText$11::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$11, name, initialize, &_CAccessibleText$11_ClassInfo_, allocate$CAccessibleText$11);
	return class$;
}

$Class* CAccessibleText$11::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun