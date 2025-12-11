#include <sun/lwawt/macosx/CAccessibleText$5.h>

#include <javax/accessibility/AccessibleEditableText.h>
#include <sun/lwawt/macosx/CAccessibleText.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CAccessibleText$5_FieldInfo_[] = {
	{"val$stop", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$5, val$stop)},
	{"val$start", "I", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$5, val$start)},
	{"val$aet", "Ljavax/accessibility/AccessibleEditableText;", nullptr, $FINAL | $SYNTHETIC, $field(CAccessibleText$5, val$aet)},
	{}
};

$MethodInfo _CAccessibleText$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/accessibility/AccessibleEditableText;II)V", "()V", 0, $method(static_cast<void(CAccessibleText$5::*)($AccessibleEditableText*,int32_t,int32_t)>(&CAccessibleText$5::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _CAccessibleText$5_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CAccessibleText",
	"getTextRange",
	"(Ljavax/accessibility/AccessibleEditableText;IILjava/awt/Component;)Ljava/lang/String;"
};

$InnerClassInfo _CAccessibleText$5_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText$5",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CAccessibleText$5_FieldInfo_,
	_CAccessibleText$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	&_CAccessibleText$5_EnclosingMethodInfo_,
	_CAccessibleText$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText"
};

$Object* allocate$CAccessibleText$5($Class* clazz) {
	return $of($alloc(CAccessibleText$5));
}

void CAccessibleText$5::init$($AccessibleEditableText* val$aet, int32_t val$start, int32_t val$stop) {
	$set(this, val$aet, val$aet);
	this->val$start = val$start;
	this->val$stop = val$stop;
}

$Object* CAccessibleText$5::call() {
	return $of($nc(this->val$aet)->getTextRange(this->val$start, this->val$stop));
}

CAccessibleText$5::CAccessibleText$5() {
}

$Class* CAccessibleText$5::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText$5, name, initialize, &_CAccessibleText$5_ClassInfo_, allocate$CAccessibleText$5);
	return class$;
}

$Class* CAccessibleText$5::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun