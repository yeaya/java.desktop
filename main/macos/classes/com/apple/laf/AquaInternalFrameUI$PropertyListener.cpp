#include <com/apple/laf/AquaInternalFrameUI$PropertyListener.h>

#include <com/apple/laf/AquaInternalFrameUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/Border.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef FALSE
#undef IS_SELECTED_PROPERTY
#undef TRUE
#undef WINDOW_DOCUMENT_MODIFIED

using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $Border = ::javax::swing::border::Border;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI$PropertyListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$PropertyListener, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameUI$PropertyListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$PropertyListener::*)($AquaInternalFrameUI*)>(&AquaInternalFrameUI$PropertyListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFrameUI$PropertyListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$PropertyListener", "com.apple.laf.AquaInternalFrameUI", "PropertyListener", 0},
	{}
};

$ClassInfo _AquaInternalFrameUI$PropertyListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$PropertyListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AquaInternalFrameUI$PropertyListener_FieldInfo_,
	_AquaInternalFrameUI$PropertyListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameUI$PropertyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$PropertyListener($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$PropertyListener));
}

void AquaInternalFrameUI$PropertyListener::init$($AquaInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaInternalFrameUI$PropertyListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	if ("JInternalFrame.frameType"_s->equals(name)) {
		if ($instanceOf($String, $(e->getNewValue()))) {
			this->this$0->setFrameType($cast($String, $(e->getNewValue())));
		}
	} else if ("JInternalFrame.isPalette"_s->equals(name)) {
		if (e->getNewValue() != nullptr) {
			this->this$0->setPalette($nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue());
		} else {
			this->this$0->setPalette(false);
		}
	} else {
		bool var$1 = "windowModified"_s->equals(name);
		$init($CPlatformWindow);
		if (var$1 || $nc($CPlatformWindow::WINDOW_DOCUMENT_MODIFIED)->equals(name)) {
			this->this$0->setDocumentEdited($nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue());
			int32_t var$2 = $nc($($AquaInternalFrameUI::access$4200(this->this$0)))->getWidth();
			$nc($($AquaInternalFrameUI::access$4500(this->this$0)))->repaint(0, 0, var$2, $nc($($nc($($nc($($AquaInternalFrameUI::access$4400(this->this$0)))->getBorder()))->getBorderInsets($($AquaInternalFrameUI::access$4300(this->this$0)))))->top);
		} else {
			bool var$10 = "resizable"_s->equals(name);
			bool var$9 = var$10 || "state"_s->equals(name);
			bool var$8 = var$9 || "iconable"_s->equals(name);
			bool var$7 = var$8 || "maximizable"_s->equals(name);
			if (var$7 || "closable"_s->equals(name)) {
				if ("resizable"_s->equals(name)) {
					$nc($($AquaInternalFrameUI::access$4600(this->this$0)))->revalidate();
				}
				$nc($($AquaInternalFrameUI::access$4700(this->this$0)))->repaint();
			} else if ("title"_s->equals(name)) {
				$nc($($AquaInternalFrameUI::access$4800(this->this$0)))->repaint();
			} else if ("componentOrientation"_s->equals(name)) {
				$nc($($AquaInternalFrameUI::access$4900(this->this$0)))->revalidate();
				$nc($($AquaInternalFrameUI::access$5000(this->this$0)))->repaint();
			} else {
				$init($JInternalFrame);
				if ($nc($JInternalFrame::IS_SELECTED_PROPERTY)->equals(name)) {
					$var($Component, source, ($cast($Component, e->getSource())));
					$init($Boolean);
					$AquaInternalFrameUI::updateComponentTreeUIActivation(source, $nc($($AquaInternalFrameUI::access$5100(this->this$0)))->isSelected() ? $Boolean::TRUE : $Boolean::FALSE);
				}
			}
		}
	}
}

AquaInternalFrameUI$PropertyListener::AquaInternalFrameUI$PropertyListener() {
}

$Class* AquaInternalFrameUI$PropertyListener::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$PropertyListener, name, initialize, &_AquaInternalFrameUI$PropertyListener_ClassInfo_, allocate$AquaInternalFrameUI$PropertyListener);
	return class$;
}

$Class* AquaInternalFrameUI$PropertyListener::class$ = nullptr;

		} // laf
	} // apple
} // com