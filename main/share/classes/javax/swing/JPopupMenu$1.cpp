#include <javax/swing/JPopupMenu$1.h>

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace javax {
	namespace swing {

$FieldInfo _JPopupMenu$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JPopupMenu$1, this$0)},
	{}
};

$MethodInfo _JPopupMenu$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JPopupMenu;)V", nullptr, 0, $method(static_cast<void(JPopupMenu$1::*)($JPopupMenu*)>(&JPopupMenu$1::init$))},
	{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _JPopupMenu$1_EnclosingMethodInfo_ = {
	"javax.swing.JPopupMenu",
	"createActionComponent",
	"(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;"
};

$InnerClassInfo _JPopupMenu$1_InnerClassesInfo_[] = {
	{"javax.swing.JPopupMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPopupMenu$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JPopupMenu$1",
	"javax.swing.JMenuItem",
	nullptr,
	_JPopupMenu$1_FieldInfo_,
	_JPopupMenu$1_MethodInfo_,
	nullptr,
	&_JPopupMenu$1_EnclosingMethodInfo_,
	_JPopupMenu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JPopupMenu"
};

$Object* allocate$JPopupMenu$1($Class* clazz) {
	return $of($alloc(JPopupMenu$1));
}

void JPopupMenu$1::init$($JPopupMenu* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem::init$();
}

$PropertyChangeListener* JPopupMenu$1::createActionPropertyChangeListener($Action* a) {
	$var($PropertyChangeListener, pcl, this->this$0->createActionChangeListener(this));
	if (pcl == nullptr) {
		$assign(pcl, $JMenuItem::createActionPropertyChangeListener(a));
	}
	return pcl;
}

JPopupMenu$1::JPopupMenu$1() {
}

$Class* JPopupMenu$1::load$($String* name, bool initialize) {
	$loadClass(JPopupMenu$1, name, initialize, &_JPopupMenu$1_ClassInfo_, allocate$JPopupMenu$1);
	return class$;
}

$Class* JPopupMenu$1::class$ = nullptr;

	} // swing
} // javax