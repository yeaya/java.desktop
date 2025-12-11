#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$12.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

#undef ARMED
#undef PRESSED

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$12_FieldInfo_[] = {
	{"val$result", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$12, val$result)},
	{}
};

$MethodInfo _WindowsFileChooserUI$12_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JButton;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$12::*)($JButton*)>(&WindowsFileChooserUI$12::init$))},
	{"setPressed", "(Z)V", nullptr, $PUBLIC},
	{"setRollover", "(Z)V", nullptr, $PUBLIC},
	{"setSelected", "(Z)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$12_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"createToolButton",
	"(Ljavax/swing/Action;Ljavax/swing/Icon;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JButton;"
};

$InnerClassInfo _WindowsFileChooserUI$12_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$12_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12",
	"javax.swing.DefaultButtonModel",
	nullptr,
	_WindowsFileChooserUI$12_FieldInfo_,
	_WindowsFileChooserUI$12_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$12_EnclosingMethodInfo_,
	_WindowsFileChooserUI$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$12($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$12));
}

void WindowsFileChooserUI$12::init$($JButton* val$result) {
	$set(this, val$result, val$result);
	$DefaultButtonModel::init$();
}

void WindowsFileChooserUI$12::setPressed(bool b) {
	if (!b || isRollover()) {
		$DefaultButtonModel::setPressed(b);
	}
}

void WindowsFileChooserUI$12::setRollover(bool b) {
	$useLocalCurrentObjectStackCache();
	if (b && !isRollover()) {
		{
			$var($ComponentArray, arr$, $nc($($nc(this->val$result)->getParent()))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, component, arr$->get(i$));
				{
					if ($instanceOf($JButton, component) && !$equals(component, this->val$result)) {
						$nc($($nc(($cast($JButton, component)))->getModel()))->setRollover(false);
					}
				}
			}
		}
	}
	$DefaultButtonModel::setRollover(b);
}

void WindowsFileChooserUI$12::setSelected(bool b) {
	$DefaultButtonModel::setSelected(b);
	if (b) {
		this->stateMask |= $DefaultButtonModel::PRESSED | $DefaultButtonModel::ARMED;
	} else {
		this->stateMask &= (uint32_t)~($DefaultButtonModel::PRESSED | $DefaultButtonModel::ARMED);
	}
}

WindowsFileChooserUI$12::WindowsFileChooserUI$12() {
}

$Class* WindowsFileChooserUI$12::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$12, name, initialize, &_WindowsFileChooserUI$12_ClassInfo_, allocate$WindowsFileChooserUI$12);
	return class$;
}

$Class* WindowsFileChooserUI$12::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com