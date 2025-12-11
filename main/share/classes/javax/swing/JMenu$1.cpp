#include <javax/swing/JMenu$1.h>

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace javax {
	namespace swing {

$FieldInfo _JMenu$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JMenu$1, this$0)},
	{}
};

$MethodInfo _JMenu$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JMenu;)V", nullptr, 0, $method(static_cast<void(JMenu$1::*)($JMenu*)>(&JMenu$1::init$))},
	{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _JMenu$1_EnclosingMethodInfo_ = {
	"javax.swing.JMenu",
	"createActionComponent",
	"(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;"
};

$InnerClassInfo _JMenu$1_InnerClassesInfo_[] = {
	{"javax.swing.JMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenu$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JMenu$1",
	"javax.swing.JMenuItem",
	nullptr,
	_JMenu$1_FieldInfo_,
	_JMenu$1_MethodInfo_,
	nullptr,
	&_JMenu$1_EnclosingMethodInfo_,
	_JMenu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenu"
};

$Object* allocate$JMenu$1($Class* clazz) {
	return $of($alloc(JMenu$1));
}

void JMenu$1::init$($JMenu* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem::init$();
}

$PropertyChangeListener* JMenu$1::createActionPropertyChangeListener($Action* a) {
	$var($PropertyChangeListener, pcl, this->this$0->createActionChangeListener(this));
	if (pcl == nullptr) {
		$assign(pcl, $JMenuItem::createActionPropertyChangeListener(a));
	}
	return pcl;
}

JMenu$1::JMenu$1() {
}

$Class* JMenu$1::load$($String* name, bool initialize) {
	$loadClass(JMenu$1, name, initialize, &_JMenu$1_ClassInfo_, allocate$JMenu$1);
	return class$;
}

$Class* JMenu$1::class$ = nullptr;

	} // swing
} // javax