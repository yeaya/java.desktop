#include <com/apple/laf/AquaInternalFrameManager.h>

#include <com/apple/laf/AquaInternalFramePaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyVetoException.h>
#include <java/util/Vector.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef TRUE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameManager_FieldInfo_[] = {
	{"fCurrentFrame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(AquaInternalFrameManager, fCurrentFrame)},
	{"fInitialFrame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(AquaInternalFrameManager, fInitialFrame)},
	{"fCurrentPaneUI", "Lcom/apple/laf/AquaInternalFramePaneUI;", nullptr, 0, $field(AquaInternalFrameManager, fCurrentPaneUI)},
	{"fChildFrames", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/JInternalFrame;>;", 0, $field(AquaInternalFrameManager, fChildFrames)},
	{}
};

$MethodInfo _AquaInternalFrameManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFrameManager::*)()>(&AquaInternalFrameManager::init$))},
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"activateNextFrame", "()V", nullptr, $PUBLIC},
	{"activateNextFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"activatePreviousFrame", "()V", nullptr, $PUBLIC},
	{"addIcon", "(Ljava/awt/Container;Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, 0},
	{"closeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"switchFrame", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(AquaInternalFrameManager::*)(bool)>(&AquaInternalFrameManager::switchFrame))},
	{}
};

$ClassInfo _AquaInternalFrameManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameManager",
	"javax.swing.DefaultDesktopManager",
	nullptr,
	_AquaInternalFrameManager_FieldInfo_,
	_AquaInternalFrameManager_MethodInfo_
};

$Object* allocate$AquaInternalFrameManager($Class* clazz) {
	return $of($alloc(AquaInternalFrameManager));
}

void AquaInternalFrameManager::init$() {
	$DefaultDesktopManager::init$();
	$set(this, fChildFrames, $new($Vector, 1));
}

void AquaInternalFrameManager::closeFrame($JInternalFrame* f) {
	if (f == this->fCurrentFrame) {
		activateNextFrame();
	}
	$nc(this->fChildFrames)->removeElement(f);
	$DefaultDesktopManager::closeFrame(f);
}

void AquaInternalFrameManager::deiconifyFrame($JInternalFrame* f) {
	$var($JInternalFrame$JDesktopIcon, desktopIcon, nullptr);
	$assign(desktopIcon, $nc(f)->getDesktopIcon());
	int32_t var$0 = $nc(desktopIcon)->getX();
	int32_t var$1 = desktopIcon->getY();
	int32_t var$2 = f->getWidth();
	f->reshape(var$0, var$1, var$2, f->getHeight());
	$DefaultDesktopManager::deiconifyFrame(f);
}

void AquaInternalFrameManager::addIcon($Container* c, $JInternalFrame$JDesktopIcon* desktopIcon) {
	$nc(c)->add(static_cast<$Component*>(desktopIcon));
}

void AquaInternalFrameManager::iconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, nullptr);
	$var($Container, c, nullptr);
	$assign(desktopIcon, $nc(f)->getDesktopIcon());
	$var($Rectangle, r, getBoundsForIconOf(f));
	$nc(desktopIcon)->setBounds($nc(r)->x, r->y, r->width, r->height);
	if (!wasIcon(f)) {
		$init($Boolean);
		setWasIcon(f, $Boolean::TRUE);
	}
	$assign(c, f->getParent());
	if (c == nullptr) {
		return;
	}
	$nc(c)->remove(static_cast<$Component*>(f));
	addIcon(c, desktopIcon);
	int32_t var$0 = f->getX();
	int32_t var$1 = f->getY();
	int32_t var$2 = f->getWidth();
	c->repaint(var$0, var$1, var$2, f->getHeight());
}

void AquaInternalFrameManager::activateFrame($JInternalFrame* f) {
	try {
		if (f != nullptr) {
			$DefaultDesktopManager::activateFrame(f);
		}
		if ($nc(this->fChildFrames)->indexOf(f) == -1) {
			$nc(this->fChildFrames)->addElement(f);
		}
		if (this->fCurrentFrame != nullptr && f != this->fCurrentFrame) {
			if ($nc(this->fCurrentFrame)->isSelected()) {
				$nc(this->fCurrentFrame)->setSelected(false);
			}
		}
		if (f != nullptr && !f->isSelected()) {
			f->setSelected(true);
		}
		$set(this, fCurrentFrame, f);
	} catch ($PropertyVetoException& e) {
	}
}

void AquaInternalFrameManager::switchFrame(bool next) {
	if (this->fCurrentFrame == nullptr) {
		if (this->fInitialFrame != nullptr) {
			activateFrame(this->fInitialFrame);
		}
		return;
	}
	int32_t count = $nc(this->fChildFrames)->size();
	if (count <= 1) {
		return;
	}
	int32_t currentIndex = $nc(this->fChildFrames)->indexOf(this->fCurrentFrame);
	if (currentIndex == -1) {
		$set(this, fCurrentFrame, nullptr);
		return;
	}
	int32_t nextIndex = 0;
	if (next) {
		nextIndex = currentIndex + 1;
		if (nextIndex == count) {
			nextIndex = 0;
		}
	} else {
		nextIndex = currentIndex - 1;
		if (nextIndex == -1) {
			nextIndex = count - 1;
		}
	}
	$var($JInternalFrame, f, $cast($JInternalFrame, $nc(this->fChildFrames)->elementAt(nextIndex)));
	activateFrame(f);
	$set(this, fCurrentFrame, f);
}

void AquaInternalFrameManager::activateNextFrame() {
	switchFrame(true);
}

void AquaInternalFrameManager::activateNextFrame($JInternalFrame* f) {
	$set(this, fInitialFrame, f);
	switchFrame(true);
}

void AquaInternalFrameManager::activatePreviousFrame() {
	switchFrame(false);
}

AquaInternalFrameManager::AquaInternalFrameManager() {
}

$Class* AquaInternalFrameManager::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameManager, name, initialize, &_AquaInternalFrameManager_ClassInfo_, allocate$AquaInternalFrameManager);
	return class$;
}

$Class* AquaInternalFrameManager::class$ = nullptr;

		} // laf
	} // apple
} // com