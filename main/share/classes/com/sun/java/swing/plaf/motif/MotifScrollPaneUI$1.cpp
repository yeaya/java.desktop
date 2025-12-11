#include <com/sun/java/swing/plaf/motif/MotifScrollPaneUI$1.h>

#include <com/sun/java/swing/plaf/motif/MotifScrollPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <jcpp.h>

using $MotifScrollPaneUI = ::com::sun::java::swing::plaf::motif::MotifScrollPaneUI;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifScrollPaneUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifScrollPaneUI$1, this$0)},
	{}
};

$MethodInfo _MotifScrollPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifScrollPaneUI;)V", nullptr, 0, $method(static_cast<void(MotifScrollPaneUI$1::*)($MotifScrollPaneUI*)>(&MotifScrollPaneUI$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifScrollPaneUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifScrollPaneUI",
	"createPropertyChangeHandler",
	"()Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _MotifScrollPaneUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifScrollPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MotifScrollPaneUI$1_FieldInfo_,
	_MotifScrollPaneUI$1_MethodInfo_,
	nullptr,
	&_MotifScrollPaneUI$1_EnclosingMethodInfo_,
	_MotifScrollPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifScrollPaneUI"
};

$Object* allocate$MotifScrollPaneUI$1($Class* clazz) {
	return $of($alloc(MotifScrollPaneUI$1));
}

void MotifScrollPaneUI$1::init$($MotifScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifScrollPaneUI$1::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($nc(propertyName)->equals("componentOrientation"_s)) {
		$var($JScrollPane, pane, $cast($JScrollPane, e->getSource()));
		$var($JScrollBar, vsb, $nc(pane)->getVerticalScrollBar());
		if (vsb != nullptr && this->this$0->vsbBorder != nullptr && $equals(vsb->getBorder(), this->this$0->vsbBorder)) {
			if ($nc($(pane->getComponentOrientation()))->isLeftToRight()) {
				$init($MotifScrollPaneUI);
				$set(this->this$0, vsbBorder, $new($CompoundBorder, $MotifScrollPaneUI::vsbMarginBorderR, $($nc(this->this$0->vsbBorder)->getInsideBorder())));
			} else {
				$init($MotifScrollPaneUI);
				$set(this->this$0, vsbBorder, $new($CompoundBorder, $MotifScrollPaneUI::vsbMarginBorderL, $($nc(this->this$0->vsbBorder)->getInsideBorder())));
			}
			vsb->setBorder(this->this$0->vsbBorder);
		}
	}
}

MotifScrollPaneUI$1::MotifScrollPaneUI$1() {
}

$Class* MotifScrollPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(MotifScrollPaneUI$1, name, initialize, &_MotifScrollPaneUI$1_ClassInfo_, allocate$MotifScrollPaneUI$1);
	return class$;
}

$Class* MotifScrollPaneUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com