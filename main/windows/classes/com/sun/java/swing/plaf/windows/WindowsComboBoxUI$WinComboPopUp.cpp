#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyListener.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

#undef HOT
#undef LBCP_BORDER_NOSCROLL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyListener = ::java::awt::event::KeyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicComboPopup$InvocationKeyHandler = ::javax::swing::plaf::basic::BasicComboPopup$InvocationKeyHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsComboBoxUI$WinComboPopUp_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsComboBoxUI$WinComboPopUp, this$0)},
	{"listBoxBorder", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsComboBoxUI$WinComboPopUp, listBoxBorder)},
	{"xp", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $PRIVATE, $field(WindowsComboBoxUI$WinComboPopUp, xp)},
	{}
};

$MethodInfo _WindowsComboBoxUI$WinComboPopUp_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(WindowsComboBoxUI$WinComboPopUp::*)($WindowsComboBoxUI*,$JComboBox*)>(&WindowsComboBoxUI$WinComboPopUp::init$))},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsComboBoxUI$WinComboPopUp_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WinComboPopUp", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "InvocationKeyHandler", $PROTECTED},
	{}
};

$ClassInfo _WindowsComboBoxUI$WinComboPopUp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp",
	"javax.swing.plaf.basic.BasicComboPopup",
	nullptr,
	_WindowsComboBoxUI$WinComboPopUp_FieldInfo_,
	_WindowsComboBoxUI$WinComboPopUp_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsComboBoxUI$WinComboPopUp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$WinComboPopUp($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$WinComboPopUp));
}

void WindowsComboBoxUI$WinComboPopUp::init$($WindowsComboBoxUI* this$0, $JComboBox* combo) {
	$set(this, this$0, this$0);
	$BasicComboPopup::init$(combo);
	$set(this, listBoxBorder, nullptr);
	$set(this, xp, $XPStyle::getXP());
	$init($TMSchema$Part);
	if (this->xp != nullptr && $nc(this->xp)->isSkinDefined(combo, $TMSchema$Part::LBCP_BORDER_NOSCROLL)) {
		$set(this, listBoxBorder, $new($XPStyle$Skin, static_cast<$Component*>(combo), $TMSchema$Part::LBCP_BORDER_NOSCROLL));
		this->setBorder($$new($EmptyBorder, 1, 1, 1, 1));
	}
}

$KeyListener* WindowsComboBoxUI$WinComboPopUp::createKeyListener() {
	return $new($WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler, this);
}

void WindowsComboBoxUI$WinComboPopUp::paintComponent($Graphics* g) {
	$BasicComboPopup::paintComponent(g);
	if (this->listBoxBorder != nullptr) {
		$var($Graphics, var$0, g);
		int32_t var$1 = this->getX();
		int32_t var$2 = this->getY();
		int32_t var$3 = this->getWidth();
		$init($TMSchema$State);
		$nc(this->listBoxBorder)->paintSkinRaw(var$0, var$1, var$2, var$3, this->getHeight(), $TMSchema$State::HOT);
	}
}

WindowsComboBoxUI$WinComboPopUp::WindowsComboBoxUI$WinComboPopUp() {
}

$Class* WindowsComboBoxUI$WinComboPopUp::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$WinComboPopUp, name, initialize, &_WindowsComboBoxUI$WinComboPopUp_ClassInfo_, allocate$WindowsComboBoxUI$WinComboPopUp);
	return class$;
}

$Class* WindowsComboBoxUI$WinComboPopUp::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com