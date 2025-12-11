#include <com/apple/laf/AquaFocusHandler.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef FALSE
#undef FRAME_ACTIVE_PROPERTY
#undef REPAINT_LISTENER
#undef TRUE

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFocusHandler$1 = ::com::apple::laf::AquaFocusHandler$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFocusHandler_FieldInfo_[] = {
	{"wasTemporary", "Z", nullptr, $PRIVATE, $field(AquaFocusHandler, wasTemporary)},
	{"repaintBorder", "Z", nullptr, $PRIVATE, $field(AquaFocusHandler, repaintBorder)},
	{"FRAME_ACTIVE_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaFocusHandler, FRAME_ACTIVE_PROPERTY)},
	{"REPAINT_LISTENER", "Ljava/beans/PropertyChangeListener;", nullptr, $STATIC | $FINAL, $staticField(AquaFocusHandler, REPAINT_LISTENER)},
	{}
};

$MethodInfo _AquaFocusHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaFocusHandler::*)()>(&AquaFocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"install", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JComponent*)>(&AquaFocusHandler::install))},
	{"isActive", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($JComponent*)>(&AquaFocusHandler::isActive))},
	{"isComponentValid", "(Ljavax/swing/JComponent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JComponent*)>(&AquaFocusHandler::isComponentValid))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setSelectionColors", "(Ljavax/swing/JTable;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($JTable*,$String*,$String*)>(&AquaFocusHandler::setSelectionColors))},
	{"setSelectionColors", "(Ljavax/swing/JList;Ljava/lang/String;Ljava/lang/String;)V", "(Ljavax/swing/JList<*>;Ljava/lang/String;Ljava/lang/String;)V", $STATIC, $method(static_cast<void(*)($JList*,$String*,$String*)>(&AquaFocusHandler::setSelectionColors))},
	{"swapSelectionColors", "(Ljava/lang/String;Ljavax/swing/JTree;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$JTree*,Object$*)>(&AquaFocusHandler::swapSelectionColors))},
	{"swapSelectionColors", "(Ljava/lang/String;Ljavax/swing/JTable;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$JTable*,Object$*)>(&AquaFocusHandler::swapSelectionColors))},
	{"swapSelectionColors", "(Ljava/lang/String;Ljavax/swing/JList;Ljava/lang/Object;)V", "(Ljava/lang/String;Ljavax/swing/JList<*>;Ljava/lang/Object;)V", $STATIC, $method(static_cast<void(*)($String*,$JList*,Object$*)>(&AquaFocusHandler::swapSelectionColors))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstall", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JComponent*)>(&AquaFocusHandler::uninstall))},
	{}
};

$InnerClassInfo _AquaFocusHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFocusHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener,java.beans.PropertyChangeListener",
	_AquaFocusHandler_FieldInfo_,
	_AquaFocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFocusHandler$1"
};

$Object* allocate$AquaFocusHandler($Class* clazz) {
	return $of($alloc(AquaFocusHandler));
}

int32_t AquaFocusHandler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool AquaFocusHandler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* AquaFocusHandler::clone() {
	 return this->$FocusListener::clone();
}

$String* AquaFocusHandler::toString() {
	 return this->$FocusListener::toString();
}

void AquaFocusHandler::finalize() {
	this->$FocusListener::finalize();
}

$String* AquaFocusHandler::FRAME_ACTIVE_PROPERTY = nullptr;
$PropertyChangeListener* AquaFocusHandler::REPAINT_LISTENER = nullptr;

void AquaFocusHandler::init$() {
	this->wasTemporary = false;
	this->repaintBorder = false;
}

void AquaFocusHandler::focusGained($FocusEvent* ev) {
	if (!this->wasTemporary || this->repaintBorder) {
		$AquaBorder::repaintBorder($cast($JComponent, $($nc(ev)->getSource())));
		this->repaintBorder = false;
	}
	this->wasTemporary = false;
}

void AquaFocusHandler::focusLost($FocusEvent* ev) {
	this->wasTemporary = $nc(ev)->isTemporary();
	if (!this->wasTemporary) {
		$AquaBorder::repaintBorder($cast($JComponent, $(ev->getSource())));
	}
}

void AquaFocusHandler::propertyChange($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals($($nc(ev)->getPropertyName()))) {
		return;
	}
	$init($Boolean);
	if ($nc($Boolean::TRUE)->equals($($nc(ev)->getNewValue()))) {
		this->repaintBorder = true;
	} else if (this->wasTemporary) {
		$AquaBorder::repaintBorder($cast($JComponent, $($nc(ev)->getSource())));
	}
}

bool AquaFocusHandler::isActive($JComponent* c) {
	$init(AquaFocusHandler);
	if (c == nullptr) {
		return true;
	}
	$var($Object, activeObj, $nc(c)->getClientProperty(AquaFocusHandler::FRAME_ACTIVE_PROPERTY));
	$init($Boolean);
	if ($nc($Boolean::FALSE)->equals(activeObj)) {
		return false;
	}
	return true;
}

void AquaFocusHandler::install($JComponent* c) {
	$init(AquaFocusHandler);
	$nc(c)->addPropertyChangeListener(AquaFocusHandler::FRAME_ACTIVE_PROPERTY, AquaFocusHandler::REPAINT_LISTENER);
}

void AquaFocusHandler::uninstall($JComponent* c) {
	$init(AquaFocusHandler);
	$nc(c)->removePropertyChangeListener(AquaFocusHandler::FRAME_ACTIVE_PROPERTY, AquaFocusHandler::REPAINT_LISTENER);
}

void AquaFocusHandler::swapSelectionColors($String* prefix, $JTree* c, Object$* value) {
	$init(AquaFocusHandler);
}

void AquaFocusHandler::swapSelectionColors($String* prefix, $JTable* c, Object$* value) {
	$init(AquaFocusHandler);
	$useLocalCurrentObjectStackCache();
	if (!isComponentValid(c)) {
		return;
	}
	$var($Color, bg, $nc(c)->getSelectionBackground());
	$var($Color, fg, c->getSelectionForeground());
	if (!($instanceOf($UIResource, bg)) || !($instanceOf($UIResource, fg))) {
		return;
	}
	$init($Boolean);
	if ($nc($Boolean::FALSE)->equals(value)) {
		setSelectionColors(c, "Table.selectionInactiveForeground"_s, "Table.selectionInactiveBackground"_s);
		return;
	}
	if ($nc($Boolean::TRUE)->equals(value)) {
		setSelectionColors(c, "Table.selectionForeground"_s, "Table.selectionBackground"_s);
		return;
	}
}

void AquaFocusHandler::setSelectionColors($JTable* c, $String* fgName, $String* bgName) {
	$init(AquaFocusHandler);
	$useLocalCurrentObjectStackCache();
	$nc(c)->setSelectionForeground($($UIManager::getColor(fgName)));
	c->setSelectionBackground($($UIManager::getColor(bgName)));
}

void AquaFocusHandler::swapSelectionColors($String* prefix, $JList* c, Object$* value) {
	$init(AquaFocusHandler);
	$useLocalCurrentObjectStackCache();
	if (!isComponentValid(c)) {
		return;
	}
	$var($Color, bg, $nc(c)->getSelectionBackground());
	$var($Color, fg, c->getSelectionForeground());
	if (!($instanceOf($UIResource, bg)) || !($instanceOf($UIResource, fg))) {
		return;
	}
	$init($Boolean);
	if ($nc($Boolean::FALSE)->equals(value)) {
		setSelectionColors(c, "List.selectionInactiveForeground"_s, "List.selectionInactiveBackground"_s);
		return;
	}
	if ($nc($Boolean::TRUE)->equals(value)) {
		setSelectionColors(c, "List.selectionForeground"_s, "List.selectionBackground"_s);
		return;
	}
}

void AquaFocusHandler::setSelectionColors($JList* c, $String* fgName, $String* bgName) {
	$init(AquaFocusHandler);
	$useLocalCurrentObjectStackCache();
	$nc(c)->setSelectionForeground($($UIManager::getColor(fgName)));
	c->setSelectionBackground($($UIManager::getColor(bgName)));
}

bool AquaFocusHandler::isComponentValid($JComponent* c) {
	$init(AquaFocusHandler);
	if (c == nullptr) {
		return false;
	}
	$var($Window, window, $SwingUtilities::getWindowAncestor(c));
	if (window == nullptr) {
		return false;
	}
	return true;
}

void clinit$AquaFocusHandler($Class* class$) {
	$assignStatic(AquaFocusHandler::FRAME_ACTIVE_PROPERTY, "Frame.active"_s);
	$assignStatic(AquaFocusHandler::REPAINT_LISTENER, $new($AquaFocusHandler$1));
}

AquaFocusHandler::AquaFocusHandler() {
}

$Class* AquaFocusHandler::load$($String* name, bool initialize) {
	$loadClass(AquaFocusHandler, name, initialize, &_AquaFocusHandler_ClassInfo_, clinit$AquaFocusHandler, allocate$AquaFocusHandler);
	return class$;
}

$Class* AquaFocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com