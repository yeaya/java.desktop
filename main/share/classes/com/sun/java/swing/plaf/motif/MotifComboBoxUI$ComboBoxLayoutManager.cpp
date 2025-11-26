#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$ComboBoxLayoutManager.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $MotifComboBoxUI = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifComboBoxUI$ComboBoxLayoutManager_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$ComboBoxLayoutManager, this$0)},
	{}
};

$MethodInfo _MotifComboBoxUI$ComboBoxLayoutManager_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifComboBoxUI$ComboBoxLayoutManager::*)($MotifComboBoxUI*)>(&MotifComboBoxUI$ComboBoxLayoutManager::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifComboBoxUI$ComboBoxLayoutManager_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _MotifComboBoxUI$ComboBoxLayoutManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager",
	"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
	nullptr,
	_MotifComboBoxUI$ComboBoxLayoutManager_FieldInfo_,
	_MotifComboBoxUI$ComboBoxLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_MotifComboBoxUI$ComboBoxLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
};

$Object* allocate$MotifComboBoxUI$ComboBoxLayoutManager($Class* clazz) {
	return $of($alloc(MotifComboBoxUI$ComboBoxLayoutManager));
}

void MotifComboBoxUI$ComboBoxLayoutManager::init$($MotifComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$ComboBoxLayoutManager::init$((static_cast<$MotifComboBoxUI*>(this$0)));
}

void MotifComboBoxUI$ComboBoxLayoutManager::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->motifGetEditor() != nullptr) {
		$var($Rectangle, cvb, this->this$0->rectangleForCurrentValue());
		$nc(cvb)->x += 1;
		cvb->y += 1;
		cvb->width -= 1;
		cvb->height -= 2;
		$nc($(this->this$0->motifGetEditor()))->setBounds(cvb);
	}
}

MotifComboBoxUI$ComboBoxLayoutManager::MotifComboBoxUI$ComboBoxLayoutManager() {
}

$Class* MotifComboBoxUI$ComboBoxLayoutManager::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI$ComboBoxLayoutManager, name, initialize, &_MotifComboBoxUI$ComboBoxLayoutManager_ClassInfo_, allocate$MotifComboBoxUI$ComboBoxLayoutManager);
	return class$;
}

$Class* MotifComboBoxUI$ComboBoxLayoutManager::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com