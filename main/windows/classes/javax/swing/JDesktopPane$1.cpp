#include <javax/swing/JDesktopPane$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <jcpp.h>

using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;

namespace javax {
	namespace swing {

$FieldInfo _JDesktopPane$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JDesktopPane;", nullptr, $FINAL | $SYNTHETIC, $field(JDesktopPane$1, this$0)},
	{}
};

$MethodInfo _JDesktopPane$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDesktopPane;)V", nullptr, 0, $method(static_cast<void(JDesktopPane$1::*)($JDesktopPane*)>(&JDesktopPane$1::init$))},
	{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JDesktopPane$1_EnclosingMethodInfo_ = {
	"javax.swing.JDesktopPane",
	"<init>",
	"()V"
};

$InnerClassInfo _JDesktopPane$1_InnerClassesInfo_[] = {
	{"javax.swing.JDesktopPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JDesktopPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JDesktopPane$1",
	"javax.swing.LayoutFocusTraversalPolicy",
	nullptr,
	_JDesktopPane$1_FieldInfo_,
	_JDesktopPane$1_MethodInfo_,
	nullptr,
	&_JDesktopPane$1_EnclosingMethodInfo_,
	_JDesktopPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JDesktopPane"
};

$Object* allocate$JDesktopPane$1($Class* clazz) {
	return $of($alloc(JDesktopPane$1));
}

void JDesktopPane$1::init$($JDesktopPane* this$0) {
	$set(this, this$0, this$0);
	$LayoutFocusTraversalPolicy::init$();
}

$Component* JDesktopPane$1::getDefaultComponent($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrameArray, jifArray, this->this$0->getAllFrames());
	$var($Component, comp, nullptr);
	{
		$var($JInternalFrameArray, arr$, jifArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($JInternalFrame, jif, arr$->get(i$));
			{
				$assign(comp, $nc($($nc(jif)->getFocusTraversalPolicy()))->getDefaultComponent(jif));
				if (comp != nullptr) {
					break;
				}
			}
		}
	}
	return comp;
}

JDesktopPane$1::JDesktopPane$1() {
}

$Class* JDesktopPane$1::load$($String* name, bool initialize) {
	$loadClass(JDesktopPane$1, name, initialize, &_JDesktopPane$1_ClassInfo_, allocate$JDesktopPane$1);
	return class$;
}

$Class* JDesktopPane$1::class$ = nullptr;

	} // swing
} // javax