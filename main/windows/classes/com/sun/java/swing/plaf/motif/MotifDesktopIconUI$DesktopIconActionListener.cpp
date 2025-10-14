#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconButton = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI$DesktopIconActionListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$DesktopIconActionListener, this$0)},
	{}
};

$MethodInfo _MotifDesktopIconUI$DesktopIconActionListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifDesktopIconUI$DesktopIconActionListener::*)($MotifDesktopIconUI*)>(&MotifDesktopIconUI$DesktopIconActionListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifDesktopIconUI$DesktopIconActionListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "DesktopIconActionListener", $PROTECTED},
	{}
};

$ClassInfo _MotifDesktopIconUI$DesktopIconActionListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_MotifDesktopIconUI$DesktopIconActionListener_FieldInfo_,
	_MotifDesktopIconUI$DesktopIconActionListener_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopIconUI$DesktopIconActionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$DesktopIconActionListener($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$DesktopIconActionListener));
}

void MotifDesktopIconUI$DesktopIconActionListener::init$($MotifDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifDesktopIconUI$DesktopIconActionListener::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->systemMenu)->show(this->this$0->iconButton, 0, $nc($(this->this$0->getDesktopIcon()))->getHeight());
}

MotifDesktopIconUI$DesktopIconActionListener::MotifDesktopIconUI$DesktopIconActionListener() {
}

$Class* MotifDesktopIconUI$DesktopIconActionListener::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$DesktopIconActionListener, name, initialize, &_MotifDesktopIconUI$DesktopIconActionListener_ClassInfo_, allocate$MotifDesktopIconUI$DesktopIconActionListener);
	return class$;
}

$Class* MotifDesktopIconUI$DesktopIconActionListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com