#include <com/sun/java/swing/plaf/windows/WindowsDesktopManager.h>

#include <java/beans/PropertyVetoException.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsDesktopManager_FieldInfo_[] = {
	{"currentFrameRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JInternalFrame;>;", $PRIVATE, $field(WindowsDesktopManager, currentFrameRef)},
	{}
};

$MethodInfo _WindowsDesktopManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsDesktopManager::*)()>(&WindowsDesktopManager::init$))},
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsDesktopManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsDesktopManager",
	"javax.swing.DefaultDesktopManager",
	"javax.swing.plaf.UIResource",
	_WindowsDesktopManager_FieldInfo_,
	_WindowsDesktopManager_MethodInfo_
};

$Object* allocate$WindowsDesktopManager($Class* clazz) {
	return $of($alloc(WindowsDesktopManager));
}

int32_t WindowsDesktopManager::hashCode() {
	 return this->$DefaultDesktopManager::hashCode();
}

bool WindowsDesktopManager::equals(Object$* arg0) {
	 return this->$DefaultDesktopManager::equals(arg0);
}

$Object* WindowsDesktopManager::clone() {
	 return this->$DefaultDesktopManager::clone();
}

$String* WindowsDesktopManager::toString() {
	 return this->$DefaultDesktopManager::toString();
}

void WindowsDesktopManager::finalize() {
	this->$DefaultDesktopManager::finalize();
}

void WindowsDesktopManager::init$() {
	$DefaultDesktopManager::init$();
}

void WindowsDesktopManager::activateFrame($JInternalFrame* f) {
	$var($JInternalFrame, currentFrame, this->currentFrameRef != nullptr ? $cast($JInternalFrame, $nc(this->currentFrameRef)->get()) : ($JInternalFrame*)nullptr);
	try {
		$DefaultDesktopManager::activateFrame(f);
		if (currentFrame != nullptr && f != currentFrame) {
			bool var$1 = !currentFrame->isClosed();
			bool var$0 = var$1 && currentFrame->isMaximum();
			if (var$0 && (!$equals($nc(f)->getClientProperty("JInternalFrame.frameType"_s), "optionDialog"_s))) {
				if (!currentFrame->isIcon()) {
					currentFrame->setMaximum(false);
					if (f->isMaximizable()) {
						if (!f->isMaximum()) {
							f->setMaximum(true);
						} else {
							bool var$3 = f->isMaximum();
							if (var$3 && f->isIcon()) {
								f->setIcon(false);
							} else {
								f->setMaximum(false);
							}
						}
					}
				}
			}
			if (currentFrame->isSelected()) {
				currentFrame->setSelected(false);
			}
		}
		if (!$nc(f)->isSelected()) {
			f->setSelected(true);
		}
	} catch ($PropertyVetoException& e) {
	}
	if (f != currentFrame) {
		$set(this, currentFrameRef, $new($WeakReference, f));
	}
}

WindowsDesktopManager::WindowsDesktopManager() {
}

$Class* WindowsDesktopManager::load$($String* name, bool initialize) {
	$loadClass(WindowsDesktopManager, name, initialize, &_WindowsDesktopManager_ClassInfo_, allocate$WindowsDesktopManager);
	return class$;
}

$Class* WindowsDesktopManager::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com