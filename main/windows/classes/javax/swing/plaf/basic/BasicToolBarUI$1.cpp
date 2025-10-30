#include <javax/swing/plaf/basic/BasicToolBarUI$1.h>

#include <java/awt/GraphicsConfiguration.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1$1.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$1$1 = ::javax::swing::plaf::basic::BasicToolBarUI$1$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$1, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/lang/String;Ljava/awt/GraphicsConfiguration;)V", nullptr, 0, $method(static_cast<void(BasicToolBarUI$1::*)($BasicToolBarUI*,$String*,$GraphicsConfiguration*)>(&BasicToolBarUI$1::init$))},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _BasicToolBarUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicToolBarUI",
	"createFloatingFrame",
	"(Ljavax/swing/JToolBar;)Ljavax/swing/JFrame;"
};

$InnerClassInfo _BasicToolBarUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicToolBarUI$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicToolBarUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$1",
	"javax.swing.JFrame",
	nullptr,
	_BasicToolBarUI$1_FieldInfo_,
	_BasicToolBarUI$1_MethodInfo_,
	nullptr,
	&_BasicToolBarUI$1_EnclosingMethodInfo_,
	_BasicToolBarUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$1($Class* clazz) {
	return $of($alloc(BasicToolBarUI$1));
}

void BasicToolBarUI$1::init$($BasicToolBarUI* this$0, $String* title, $GraphicsConfiguration* gc) {
	$set(this, this$0, this$0);
	$JFrame::init$(title, gc);
}

$JRootPane* BasicToolBarUI$1::createRootPane() {
	$var($JRootPane, rootPane, $new($BasicToolBarUI$1$1, this));
	rootPane->setOpaque(true);
	return rootPane;
}

BasicToolBarUI$1::BasicToolBarUI$1() {
}

$Class* BasicToolBarUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$1, name, initialize, &_BasicToolBarUI$1_ClassInfo_, allocate$BasicToolBarUI$1);
	return class$;
}

$Class* BasicToolBarUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax