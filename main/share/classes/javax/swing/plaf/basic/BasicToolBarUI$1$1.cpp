#include <javax/swing/plaf/basic/BasicToolBarUI$1$1.h>

#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $BasicToolBarUI$1 = ::javax::swing::plaf::basic::BasicToolBarUI$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$1$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/plaf/basic/BasicToolBarUI$1;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$1$1, this$1)},
	{"packing", "Z", nullptr, $PRIVATE, $field(BasicToolBarUI$1$1, packing)},
	{}
};

$MethodInfo _BasicToolBarUI$1$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI$1;)V", nullptr, 0, $method(static_cast<void(BasicToolBarUI$1$1::*)($BasicToolBarUI$1*)>(&BasicToolBarUI$1$1::init$))},
	{"validate", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicToolBarUI$1$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicToolBarUI$1",
	"createRootPane",
	"()Ljavax/swing/JRootPane;"
};

$InnerClassInfo _BasicToolBarUI$1$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicToolBarUI$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicToolBarUI$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$1$1",
	"javax.swing.JRootPane",
	nullptr,
	_BasicToolBarUI$1$1_FieldInfo_,
	_BasicToolBarUI$1$1_MethodInfo_,
	nullptr,
	&_BasicToolBarUI$1$1_EnclosingMethodInfo_,
	_BasicToolBarUI$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$1$1($Class* clazz) {
	return $of($alloc(BasicToolBarUI$1$1));
}

void BasicToolBarUI$1$1::init$($BasicToolBarUI$1* this$1) {
	$set(this, this$1, this$1);
	$JRootPane::init$();
	this->packing = false;
}

void BasicToolBarUI$1$1::validate() {
	$JRootPane::validate();
	if (!this->packing) {
		this->packing = true;
		this->this$1->pack();
		this->packing = false;
	}
}

BasicToolBarUI$1$1::BasicToolBarUI$1$1() {
}

$Class* BasicToolBarUI$1$1::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$1$1, name, initialize, &_BasicToolBarUI$1$1_ClassInfo_, allocate$BasicToolBarUI$1$1);
	return class$;
}

$Class* BasicToolBarUI$1$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax