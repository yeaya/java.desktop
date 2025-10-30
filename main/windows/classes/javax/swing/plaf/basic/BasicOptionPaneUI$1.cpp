#include <javax/swing/plaf/basic/BasicOptionPaneUI$1.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$1, this$0)},
	{}
};

$MethodInfo _BasicOptionPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;)V", nullptr, 0, $method(static_cast<void(BasicOptionPaneUI$1::*)($BasicOptionPaneUI*)>(&BasicOptionPaneUI$1::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicOptionPaneUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicOptionPaneUI",
	"addMessageComponents",
	"(Ljava/awt/Container;Ljava/awt/GridBagConstraints;Ljava/lang/Object;IZ)V"
};

$InnerClassInfo _BasicOptionPaneUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicOptionPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$1",
	"javax.swing.JPanel",
	nullptr,
	_BasicOptionPaneUI$1_FieldInfo_,
	_BasicOptionPaneUI$1_MethodInfo_,
	nullptr,
	&_BasicOptionPaneUI$1_EnclosingMethodInfo_,
	_BasicOptionPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$1($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$1));
}

void BasicOptionPaneUI$1::init$($BasicOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
}

$Dimension* BasicOptionPaneUI$1::getPreferredSize() {
	$var($Font, f, getFont());
	if (f != nullptr) {
		return $new($Dimension, 1, f->getSize() + 2);
	}
	return $new($Dimension, 0, 0);
}

BasicOptionPaneUI$1::BasicOptionPaneUI$1() {
}

$Class* BasicOptionPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$1, name, initialize, &_BasicOptionPaneUI$1_ClassInfo_, allocate$BasicOptionPaneUI$1);
	return class$;
}

$Class* BasicOptionPaneUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax