#include <com/apple/laf/AquaSplitPaneUI.h>

#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef DIVIDER_PAINTER_KEY

using $AquaSplitPaneDividerUI = ::com::apple::laf::AquaSplitPaneDividerUI;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSplitPaneUI_FieldInfo_[] = {
	{"DIVIDER_PAINTER_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaSplitPaneUI, DIVIDER_PAINTER_KEY)},
	{}
};

$MethodInfo _AquaSplitPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaSplitPaneUI::*)()>(&AquaSplitPaneUI::init$))},
	{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaSplitPaneUI::createUI))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaSplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaSplitPaneUI",
	"javax.swing.plaf.basic.BasicSplitPaneUI",
	"java.awt.event.MouseListener,java.beans.PropertyChangeListener",
	_AquaSplitPaneUI_FieldInfo_,
	_AquaSplitPaneUI_MethodInfo_
};

$Object* allocate$AquaSplitPaneUI($Class* clazz) {
	return $of($alloc(AquaSplitPaneUI));
}

int32_t AquaSplitPaneUI::hashCode() {
	 return this->$BasicSplitPaneUI::hashCode();
}

bool AquaSplitPaneUI::equals(Object$* arg0) {
	 return this->$BasicSplitPaneUI::equals(arg0);
}

$Object* AquaSplitPaneUI::clone() {
	 return this->$BasicSplitPaneUI::clone();
}

$String* AquaSplitPaneUI::toString() {
	 return this->$BasicSplitPaneUI::toString();
}

void AquaSplitPaneUI::finalize() {
	this->$BasicSplitPaneUI::finalize();
}

$String* AquaSplitPaneUI::DIVIDER_PAINTER_KEY = nullptr;

void AquaSplitPaneUI::init$() {
	$BasicSplitPaneUI::init$();
}

$ComponentUI* AquaSplitPaneUI::createUI($JComponent* x) {
	$init(AquaSplitPaneUI);
	return $new(AquaSplitPaneUI);
}

$BasicSplitPaneDivider* AquaSplitPaneUI::createDefaultDivider() {
	return $new($AquaSplitPaneDividerUI, this);
}

void AquaSplitPaneUI::installListeners() {
	$BasicSplitPaneUI::installListeners();
	$nc(this->splitPane)->addPropertyChangeListener(AquaSplitPaneUI::DIVIDER_PAINTER_KEY, this);
	$nc(this->divider)->addMouseListener(this);
}

void AquaSplitPaneUI::uninstallListeners() {
	$nc(this->divider)->removeMouseListener(this);
	$nc(this->splitPane)->removePropertyChangeListener(AquaSplitPaneUI::DIVIDER_PAINTER_KEY, this);
	$BasicSplitPaneUI::uninstallListeners();
}

void AquaSplitPaneUI::mouseClicked($MouseEvent* e) {
	if ($nc(e)->getClickCount() < 2) {
		return;
	}
	if (!$nc(this->splitPane)->isOneTouchExpandable()) {
		return;
	}
	double resizeWeight = $nc(this->splitPane)->getResizeWeight();
	int32_t paneWidth = $nc(this->splitPane)->getWidth();
	int32_t divSize = $nc(this->splitPane)->getDividerSize();
	int32_t divLocation = $nc(this->splitPane)->getDividerLocation();
	int32_t lastDivLocation = $nc(this->splitPane)->getLastDividerLocation();
	if (paneWidth - divSize <= divLocation + 5) {
		$nc(this->splitPane)->setDividerLocation(lastDivLocation);
		return;
	}
	if (divSize >= divLocation - 5) {
		$nc(this->splitPane)->setDividerLocation(lastDivLocation);
		return;
	}
	if (resizeWeight > 0.5) {
		$nc(this->splitPane)->setDividerLocation(0);
	} else {
		$nc(this->splitPane)->setDividerLocation(paneWidth);
	}
}

void AquaSplitPaneUI::mouseEntered($MouseEvent* e) {
}

void AquaSplitPaneUI::mouseExited($MouseEvent* e) {
}

void AquaSplitPaneUI::mousePressed($MouseEvent* e) {
}

void AquaSplitPaneUI::mouseReleased($MouseEvent* e) {
}

void AquaSplitPaneUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(AquaSplitPaneUI::DIVIDER_PAINTER_KEY)->equals($($nc(evt)->getPropertyName()))) {
		return;
	}
	$var($Object, value, $nc(evt)->getNewValue());
	if ($instanceOf($Border, value)) {
		$nc(this->divider)->setBorder($cast($Border, value));
	} else {
		$nc(this->divider)->setBorder(nullptr);
	}
}

AquaSplitPaneUI::AquaSplitPaneUI() {
}

void clinit$AquaSplitPaneUI($Class* class$) {
	$assignStatic(AquaSplitPaneUI::DIVIDER_PAINTER_KEY, "JSplitPane.dividerPainter"_s);
}

$Class* AquaSplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaSplitPaneUI, name, initialize, &_AquaSplitPaneUI_ClassInfo_, clinit$AquaSplitPaneUI, allocate$AquaSplitPaneUI);
	return class$;
}

$Class* AquaSplitPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com