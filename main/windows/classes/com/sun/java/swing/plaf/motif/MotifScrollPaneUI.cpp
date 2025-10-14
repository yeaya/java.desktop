#include <com/sun/java/swing/plaf/motif/MotifScrollPaneUI.h>

#include <com/sun/java/swing/plaf/motif/MotifScrollPaneUI$1.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $MotifScrollPaneUI$1 = ::com::sun::java::swing::plaf::motif::MotifScrollPaneUI$1;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifScrollPaneUI_FieldInfo_[] = {
	{"vsbMarginBorderR", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifScrollPaneUI, vsbMarginBorderR)},
	{"vsbMarginBorderL", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifScrollPaneUI, vsbMarginBorderL)},
	{"hsbMarginBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifScrollPaneUI, hsbMarginBorder)},
	{"vsbBorder", "Ljavax/swing/border/CompoundBorder;", nullptr, $PRIVATE, $field(MotifScrollPaneUI, vsbBorder)},
	{"hsbBorder", "Ljavax/swing/border/CompoundBorder;", nullptr, $PRIVATE, $field(MotifScrollPaneUI, hsbBorder)},
	{"propertyChangeHandler", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(MotifScrollPaneUI, propertyChangeHandler)},
	{}
};

$MethodInfo _MotifScrollPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifScrollPaneUI::*)()>(&MotifScrollPaneUI::init$))},
	{"createPropertyChangeHandler", "()Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $method(static_cast<$PropertyChangeListener*(MotifScrollPaneUI::*)()>(&MotifScrollPaneUI::createPropertyChangeHandler))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifScrollPaneUI::createUI))},
	{"installDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/JScrollPane;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifScrollPaneUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifScrollPaneUI",
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	nullptr,
	_MotifScrollPaneUI_FieldInfo_,
	_MotifScrollPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifScrollPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1"
};

$Object* allocate$MotifScrollPaneUI($Class* clazz) {
	return $of($alloc(MotifScrollPaneUI));
}

$Border* MotifScrollPaneUI::vsbMarginBorderR = nullptr;
$Border* MotifScrollPaneUI::vsbMarginBorderL = nullptr;
$Border* MotifScrollPaneUI::hsbMarginBorder = nullptr;

void MotifScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
}

void MotifScrollPaneUI::installListeners($JScrollPane* scrollPane) {
	$BasicScrollPaneUI::installListeners(scrollPane);
	$set(this, propertyChangeHandler, createPropertyChangeHandler());
	$nc(scrollPane)->addPropertyChangeListener(this->propertyChangeHandler);
}

void MotifScrollPaneUI::uninstallListeners($JComponent* scrollPane) {
	$BasicScrollPaneUI::uninstallListeners(scrollPane);
	$nc(scrollPane)->removePropertyChangeListener(this->propertyChangeHandler);
}

$PropertyChangeListener* MotifScrollPaneUI::createPropertyChangeHandler() {
	return $new($MotifScrollPaneUI$1, this);
}

void MotifScrollPaneUI::installDefaults($JScrollPane* scrollpane) {
	$BasicScrollPaneUI::installDefaults(scrollpane);
	$var($JScrollBar, vsb, $nc(scrollpane)->getVerticalScrollBar());
	if (vsb != nullptr) {
		if ($nc($(scrollpane->getComponentOrientation()))->isLeftToRight()) {
			$set(this, vsbBorder, $new($CompoundBorder, MotifScrollPaneUI::vsbMarginBorderR, $(vsb->getBorder())));
		} else {
			$set(this, vsbBorder, $new($CompoundBorder, MotifScrollPaneUI::vsbMarginBorderL, $(vsb->getBorder())));
		}
		vsb->setBorder(this->vsbBorder);
	}
	$var($JScrollBar, hsb, scrollpane->getHorizontalScrollBar());
	if (hsb != nullptr) {
		$set(this, hsbBorder, $new($CompoundBorder, MotifScrollPaneUI::hsbMarginBorder, $(hsb->getBorder())));
		hsb->setBorder(this->hsbBorder);
	}
}

void MotifScrollPaneUI::uninstallDefaults($JScrollPane* c) {
	$BasicScrollPaneUI::uninstallDefaults(c);
	$var($JScrollBar, vsb, $nc(this->scrollpane)->getVerticalScrollBar());
	if (vsb != nullptr) {
		if ($equals(vsb->getBorder(), this->vsbBorder)) {
			vsb->setBorder(nullptr);
		}
		$set(this, vsbBorder, nullptr);
	}
	$var($JScrollBar, hsb, $nc(this->scrollpane)->getHorizontalScrollBar());
	if (hsb != nullptr) {
		if ($equals(hsb->getBorder(), this->hsbBorder)) {
			hsb->setBorder(nullptr);
		}
		$set(this, hsbBorder, nullptr);
	}
}

$ComponentUI* MotifScrollPaneUI::createUI($JComponent* x) {
	$init(MotifScrollPaneUI);
	return $new(MotifScrollPaneUI);
}

void clinit$MotifScrollPaneUI($Class* class$) {
	$assignStatic(MotifScrollPaneUI::vsbMarginBorderR, $new($EmptyBorder, 0, 4, 0, 0));
	$assignStatic(MotifScrollPaneUI::vsbMarginBorderL, $new($EmptyBorder, 0, 0, 0, 4));
	$assignStatic(MotifScrollPaneUI::hsbMarginBorder, $new($EmptyBorder, 4, 0, 0, 0));
}

MotifScrollPaneUI::MotifScrollPaneUI() {
}

$Class* MotifScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifScrollPaneUI, name, initialize, &_MotifScrollPaneUI_ClassInfo_, clinit$MotifScrollPaneUI, allocate$MotifScrollPaneUI);
	return class$;
}

$Class* MotifScrollPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com