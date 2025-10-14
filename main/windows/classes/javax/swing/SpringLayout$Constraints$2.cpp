#include <javax/swing/SpringLayout$Constraints$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Spring$SpringMap.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $Spring$SpringMap = ::javax::swing::Spring$SpringMap;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;

namespace javax {
	namespace swing {

$FieldInfo _SpringLayout$Constraints$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SpringLayout$Constraints;", nullptr, $FINAL | $SYNTHETIC, $field(SpringLayout$Constraints$2, this$0)},
	{}
};

$MethodInfo _SpringLayout$Constraints$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SpringLayout$Constraints;Ljavax/swing/Spring;)V", nullptr, 0, $method(static_cast<void(SpringLayout$Constraints$2::*)($SpringLayout$Constraints*,$Spring*)>(&SpringLayout$Constraints$2::init$))},
	{"inv", "(I)I", nullptr, $PROTECTED},
	{"map", "(I)I", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _SpringLayout$Constraints$2_EnclosingMethodInfo_ = {
	"javax.swing.SpringLayout$Constraints",
	"relativeBaselineToHeight",
	"(Ljavax/swing/Spring;)Ljavax/swing/Spring;"
};

$InnerClassInfo _SpringLayout$Constraints$2_InnerClassesInfo_[] = {
	{"javax.swing.SpringLayout$Constraints", "javax.swing.SpringLayout", "Constraints", $PUBLIC | $STATIC},
	{"javax.swing.SpringLayout$Constraints$2", nullptr, nullptr, 0},
	{"javax.swing.Spring$SpringMap", "javax.swing.Spring", "SpringMap", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SpringLayout$Constraints$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SpringLayout$Constraints$2",
	"javax.swing.Spring$SpringMap",
	nullptr,
	_SpringLayout$Constraints$2_FieldInfo_,
	_SpringLayout$Constraints$2_MethodInfo_,
	nullptr,
	&_SpringLayout$Constraints$2_EnclosingMethodInfo_,
	_SpringLayout$Constraints$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SpringLayout"
};

$Object* allocate$SpringLayout$Constraints$2($Class* clazz) {
	return $of($alloc(SpringLayout$Constraints$2));
}

void SpringLayout$Constraints$2::init$($SpringLayout$Constraints* this$0, $Spring* s) {
	$set(this, this$0, this$0);
	$Spring$SpringMap::init$(s);
}

int32_t SpringLayout$Constraints$2::map(int32_t i) {
	return this->this$0->getHeightFromBaseLine(i);
}

int32_t SpringLayout$Constraints$2::inv(int32_t i) {
	return this->this$0->getBaselineFromHeight(i);
}

SpringLayout$Constraints$2::SpringLayout$Constraints$2() {
}

$Class* SpringLayout$Constraints$2::load$($String* name, bool initialize) {
	$loadClass(SpringLayout$Constraints$2, name, initialize, &_SpringLayout$Constraints$2_ClassInfo_, allocate$SpringLayout$Constraints$2);
	return class$;
}

$Class* SpringLayout$Constraints$2::class$ = nullptr;

	} // swing
} // javax