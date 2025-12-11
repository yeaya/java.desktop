#include <javax/swing/JMenu$WinListener.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace javax {
	namespace swing {

$FieldInfo _JMenu$WinListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JMenu$WinListener, this$0)},
	{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, 0, $field(JMenu$WinListener, popupMenu)},
	{}
};

$MethodInfo _JMenu$WinListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenu;Ljavax/swing/JPopupMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenu$WinListener::*)($JMenu*,$JPopupMenu*)>(&JMenu$WinListener::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMenu$WinListener_InnerClassesInfo_[] = {
	{"javax.swing.JMenu$WinListener", "javax.swing.JMenu", "WinListener", $PROTECTED},
	{}
};

$ClassInfo _JMenu$WinListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenu$WinListener",
	"java.awt.event.WindowAdapter",
	"java.io.Serializable",
	_JMenu$WinListener_FieldInfo_,
	_JMenu$WinListener_MethodInfo_,
	nullptr,
	nullptr,
	_JMenu$WinListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenu"
};

$Object* allocate$JMenu$WinListener($Class* clazz) {
	return $of($alloc(JMenu$WinListener));
}

int32_t JMenu$WinListener::hashCode() {
	 return this->$WindowAdapter::hashCode();
}

bool JMenu$WinListener::equals(Object$* arg0) {
	 return this->$WindowAdapter::equals(arg0);
}

$Object* JMenu$WinListener::clone() {
	 return this->$WindowAdapter::clone();
}

$String* JMenu$WinListener::toString() {
	 return this->$WindowAdapter::toString();
}

void JMenu$WinListener::finalize() {
	this->$WindowAdapter::finalize();
}

void JMenu$WinListener::init$($JMenu* this$0, $JPopupMenu* p) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
	$set(this, popupMenu, p);
}

void JMenu$WinListener::windowClosing($WindowEvent* e) {
	this->this$0->setSelected(false);
}

JMenu$WinListener::JMenu$WinListener() {
}

$Class* JMenu$WinListener::load$($String* name, bool initialize) {
	$loadClass(JMenu$WinListener, name, initialize, &_JMenu$WinListener_ClassInfo_, allocate$JMenu$WinListener);
	return class$;
}

$Class* JMenu$WinListener::class$ = nullptr;

	} // swing
} // javax