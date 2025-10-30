#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$XPComboBoxButton.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $WindowsComboBoxUI$XPComboBoxButton = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$XPComboBoxButton;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JTextField = ::javax::swing::JTextField;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsComboBoxUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsComboBoxUI$1::*)()>(&WindowsComboBoxUI$1::init$))},
	{"getComboBox", "(Ljava/awt/event/MouseEvent;)Ljavax/swing/JComboBox;", "(Ljava/awt/event/MouseEvent;)Ljavax/swing/JComboBox<*>;", $PRIVATE, $method(static_cast<$JComboBox*(WindowsComboBoxUI$1::*)($MouseEvent*)>(&WindowsComboBoxUI$1::getComboBox))},
	{"getWindowsComboBoxUI", "(Ljava/awt/event/MouseEvent;)Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;", nullptr, $PRIVATE, $method(static_cast<$WindowsComboBoxUI*(WindowsComboBoxUI$1::*)($MouseEvent*)>(&WindowsComboBoxUI$1::getWindowsComboBoxUI))},
	{"handleRollover", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsComboBoxUI$1::*)($MouseEvent*,bool)>(&WindowsComboBoxUI$1::handleRollover))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsComboBoxUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsComboBoxUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsComboBoxUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	nullptr,
	_WindowsComboBoxUI$1_MethodInfo_,
	nullptr,
	&_WindowsComboBoxUI$1_EnclosingMethodInfo_,
	_WindowsComboBoxUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$1($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$1));
}

void WindowsComboBoxUI$1::init$() {
	$MouseAdapter::init$();
}

void WindowsComboBoxUI$1::handleRollover($MouseEvent* e, bool isRollover) {
	$useLocalCurrentObjectStackCache();
	$var($JComboBox, comboBox, getComboBox(e));
	$var($WindowsComboBoxUI, comboBoxUI, getWindowsComboBoxUI(e));
	if (comboBox == nullptr || comboBoxUI == nullptr) {
		return;
	}
	if (!$nc(comboBox)->isEditable()) {
		$var($ButtonModel, m, nullptr);
		if ($WindowsComboBoxUI::access$000(comboBoxUI) != nullptr) {
			$assign(m, $nc($($WindowsComboBoxUI::access$100(comboBoxUI)))->getModel());
		}
		if (m != nullptr) {
			m->setRollover(isRollover);
		}
	}
	$nc(comboBoxUI)->isRollover = isRollover;
	$nc(comboBox)->repaint();
}

void WindowsComboBoxUI$1::mouseEntered($MouseEvent* e) {
	handleRollover(e, true);
}

void WindowsComboBoxUI$1::mouseExited($MouseEvent* e) {
	handleRollover(e, false);
}

$JComboBox* WindowsComboBoxUI$1::getComboBox($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Object, source, $nc(event)->getSource());
	$var($JComboBox, rv, nullptr);
	if ($instanceOf($JComboBox, source)) {
		$assign(rv, $cast($JComboBox, source));
	} else if ($instanceOf($WindowsComboBoxUI$XPComboBoxButton, source)) {
		$assign(rv, $WindowsComboBoxUI::access$200($($nc(($cast($WindowsComboBoxUI$XPComboBoxButton, source)))->getWindowsComboBoxUI())));
	} else if ($instanceOf($JTextField, source) && $instanceOf($JComboBox, $($nc(($cast($JTextField, source)))->getParent()))) {
		$assign(rv, $cast($JComboBox, $nc(($cast($JTextField, source)))->getParent()));
	}
	return rv;
}

$WindowsComboBoxUI* WindowsComboBoxUI$1::getWindowsComboBoxUI($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($JComboBox, comboBox, getComboBox(event));
	$var($WindowsComboBoxUI, rv, nullptr);
	if (comboBox != nullptr && $instanceOf($WindowsComboBoxUI, $($cast($ComboBoxUI, comboBox->getUI())))) {
		$assign(rv, $cast($WindowsComboBoxUI, $cast($ComboBoxUI, comboBox->getUI())));
	}
	return rv;
}

WindowsComboBoxUI$1::WindowsComboBoxUI$1() {
}

$Class* WindowsComboBoxUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$1, name, initialize, &_WindowsComboBoxUI$1_ClassInfo_, allocate$WindowsComboBoxUI$1);
	return class$;
}

$Class* WindowsComboBoxUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com