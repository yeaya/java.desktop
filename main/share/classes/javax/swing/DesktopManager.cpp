#include <javax/swing/DesktopManager.h>

#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$MethodInfo _DesktopManager_MethodInfo_[] = {
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"beginDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"beginResizingFrame", "(Ljavax/swing/JComponent;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"closeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"deactivateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dragFrame", "(Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"endDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"endResizingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"maximizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"minimizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"openFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"resizeFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBoundsForFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DesktopManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.DesktopManager",
	nullptr,
	nullptr,
	nullptr,
	_DesktopManager_MethodInfo_
};

$Object* allocate$DesktopManager($Class* clazz) {
	return $of($alloc(DesktopManager));
}

$Class* DesktopManager::load$($String* name, bool initialize) {
	$loadClass(DesktopManager, name, initialize, &_DesktopManager_ClassInfo_, allocate$DesktopManager);
	return class$;
}

$Class* DesktopManager::class$ = nullptr;

	} // swing
} // javax