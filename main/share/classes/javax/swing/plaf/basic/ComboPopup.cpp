#include <javax/swing/plaf/basic/ComboPopup.h>

#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $KeyListener = ::java::awt::event::KeyListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _ComboPopup_MethodInfo_[] = {
	{"getKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PUBLIC | $ABSTRACT},
	{"getList", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT},
	{"getMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMouseMotionListener", "()Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC | $ABSTRACT},
	{"hide", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"show", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"uninstallingUI", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ComboPopup_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.plaf.basic.ComboPopup",
	nullptr,
	nullptr,
	nullptr,
	_ComboPopup_MethodInfo_
};

$Object* allocate$ComboPopup($Class* clazz) {
	return $of($alloc(ComboPopup));
}

$Class* ComboPopup::load$($String* name, bool initialize) {
	$loadClass(ComboPopup, name, initialize, &_ComboPopup_ClassInfo_, allocate$ComboPopup);
	return class$;
}

$Class* ComboPopup::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax