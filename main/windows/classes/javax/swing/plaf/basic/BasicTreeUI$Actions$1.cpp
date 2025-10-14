#include <javax/swing/plaf/basic/BasicTreeUI$Actions$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Actions = ::javax::swing::plaf::basic::BasicTreeUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$Actions$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI$Actions;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Actions$1, this$0)},
	{"val$rowCount", "I", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Actions$1, val$rowCount)},
	{"val$ui", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Actions$1, val$ui)},
	{}
};

$MethodInfo _BasicTreeUI$Actions$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI$Actions;Ljavax/swing/plaf/basic/BasicTreeUI;I)V", "()V", 0, $method(static_cast<void(BasicTreeUI$Actions$1::*)($BasicTreeUI$Actions*,$BasicTreeUI*,int32_t)>(&BasicTreeUI$Actions$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicTreeUI$Actions$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicTreeUI$Actions",
	"home",
	"(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZZ)V"
};

$InnerClassInfo _BasicTreeUI$Actions$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$Actions", "javax.swing.plaf.basic.BasicTreeUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicTreeUI$Actions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicTreeUI$Actions$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$Actions$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_BasicTreeUI$Actions$1_FieldInfo_,
	_BasicTreeUI$Actions$1_MethodInfo_,
	nullptr,
	&_BasicTreeUI$Actions$1_EnclosingMethodInfo_,
	_BasicTreeUI$Actions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$Actions$1($Class* clazz) {
	return $of($alloc(BasicTreeUI$Actions$1));
}

void BasicTreeUI$Actions$1::init$($BasicTreeUI$Actions* this$0, $BasicTreeUI* val$ui, int32_t val$rowCount) {
	$set(this, this$0, this$0);
	$set(this, val$ui, val$ui);
	this->val$rowCount = val$rowCount;
}

void BasicTreeUI$Actions$1::run() {
	$nc(this->val$ui)->ensureRowsAreVisible(this->val$rowCount - 1, this->val$rowCount - 1);
}

BasicTreeUI$Actions$1::BasicTreeUI$Actions$1() {
}

$Class* BasicTreeUI$Actions$1::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$Actions$1, name, initialize, &_BasicTreeUI$Actions$1_ClassInfo_, allocate$BasicTreeUI$Actions$1);
	return class$;
}

$Class* BasicTreeUI$Actions$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax