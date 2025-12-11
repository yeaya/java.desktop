#include <com/apple/laf/AquaTableUI.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaTableUI$1.h>
#include <com/apple/laf/AquaTableUI$FocusHandler.h>
#include <com/apple/laf/AquaTableUI$MouseInputHandler.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableUI.h>
#include <javax/swing/plaf/basic/BasicTableUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicTableUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaTableUI$1 = ::com::apple::laf::AquaTableUI$1;
using $AquaTableUI$FocusHandler = ::com::apple::laf::AquaTableUI$FocusHandler;
using $AquaTableUI$MouseInputHandler = ::com::apple::laf::AquaTableUI$MouseInputHandler;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableUI = ::javax::swing::plaf::TableUI;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $BasicTableUI$FocusHandler = ::javax::swing::plaf::basic::BasicTableUI$FocusHandler;
using $BasicTableUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicTableUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableUI_FieldInfo_[] = {
	{"focusHandler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, $PROTECTED, $field(AquaTableUI, focusHandler)},
	{}
};

$MethodInfo _AquaTableUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTableUI::*)()>(&AquaTableUI::init$))},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTableUI::createUI))},
	{"getComponent", "()Ljavax/swing/JTable;", nullptr, 0},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTableUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableUI$MouseInputHandler", "com.apple.laf.AquaTableUI", "MouseInputHandler", $PUBLIC},
	{"com.apple.laf.AquaTableUI$FocusHandler", "com.apple.laf.AquaTableUI", "FocusHandler", $PUBLIC},
	{"com.apple.laf.AquaTableUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTableUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTableUI",
	"javax.swing.plaf.basic.BasicTableUI",
	nullptr,
	_AquaTableUI_FieldInfo_,
	_AquaTableUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTableUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableUI$MouseInputHandler,com.apple.laf.AquaTableUI$FocusHandler,com.apple.laf.AquaTableUI$1"
};

$Object* allocate$AquaTableUI($Class* clazz) {
	return $of($alloc(AquaTableUI));
}

void AquaTableUI::init$() {
	$BasicTableUI::init$();
	$set(this, focusHandler, $new($AquaTableUI$1, this));
}

$ComponentUI* AquaTableUI::createUI($JComponent* c) {
	$init(AquaTableUI);
	return $new(AquaTableUI);
}

$FocusListener* AquaTableUI::createFocusListener() {
	return $new($AquaTableUI$FocusHandler, this);
}

$MouseInputListener* AquaTableUI::createMouseInputListener() {
	return $new($AquaTableUI$MouseInputHandler, this);
}

void AquaTableUI::installListeners() {
	$BasicTableUI::installListeners();
	$nc(this->table)->addFocusListener(this->focusHandler);
	$nc(this->table)->addPropertyChangeListener(this->focusHandler);
}

void AquaTableUI::uninstallListeners() {
	$nc(this->table)->removePropertyChangeListener(this->focusHandler);
	$nc(this->table)->removeFocusListener(this->focusHandler);
	$BasicTableUI::uninstallListeners();
}

$JTable* AquaTableUI::getComponent() {
	return this->table;
}

AquaTableUI::AquaTableUI() {
}

$Class* AquaTableUI::load$($String* name, bool initialize) {
	$loadClass(AquaTableUI, name, initialize, &_AquaTableUI_ClassInfo_, allocate$AquaTableUI);
	return class$;
}

$Class* AquaTableUI::class$ = nullptr;

		} // laf
	} // apple
} // com