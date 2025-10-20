#include <javax/swing/plaf/synth/SynthDesktopPaneUI$SynthDesktopManager.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI.h>
#include <jcpp.h>

#undef TRUE

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthDesktopPaneUI = ::javax::swing::plaf::synth::SynthDesktopPaneUI;
using $SynthDesktopPaneUI$TaskBar = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthDesktopPaneUI$SynthDesktopManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthDesktopPaneUI$SynthDesktopManager, this$0)},
	{}
};

$MethodInfo _SynthDesktopPaneUI$SynthDesktopManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthDesktopPaneUI;)V", nullptr, 0, $method(static_cast<void(SynthDesktopPaneUI$SynthDesktopManager::*)($SynthDesktopPaneUI*)>(&SynthDesktopPaneUI$SynthDesktopManager::init$))},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"maximizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"removeIconFor", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"setBoundsForFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthDesktopPaneUI$SynthDesktopManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager", "javax.swing.plaf.synth.SynthDesktopPaneUI", "SynthDesktopManager", 0},
	{}
};

$ClassInfo _SynthDesktopPaneUI$SynthDesktopManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager",
	"javax.swing.DefaultDesktopManager",
	"javax.swing.plaf.UIResource",
	_SynthDesktopPaneUI$SynthDesktopManager_FieldInfo_,
	_SynthDesktopPaneUI$SynthDesktopManager_MethodInfo_,
	nullptr,
	nullptr,
	_SynthDesktopPaneUI$SynthDesktopManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopPaneUI"
};

$Object* allocate$SynthDesktopPaneUI$SynthDesktopManager($Class* clazz) {
	return $of($alloc(SynthDesktopPaneUI$SynthDesktopManager));
}

int32_t SynthDesktopPaneUI$SynthDesktopManager::hashCode() {
	 return this->$DefaultDesktopManager::hashCode();
}

bool SynthDesktopPaneUI$SynthDesktopManager::equals(Object$* arg0) {
	 return this->$DefaultDesktopManager::equals(arg0);
}

$Object* SynthDesktopPaneUI$SynthDesktopManager::clone() {
	 return this->$DefaultDesktopManager::clone();
}

$String* SynthDesktopPaneUI$SynthDesktopManager::toString() {
	 return this->$DefaultDesktopManager::toString();
}

void SynthDesktopPaneUI$SynthDesktopManager::finalize() {
	this->$DefaultDesktopManager::finalize();
}

void SynthDesktopPaneUI$SynthDesktopManager::init$($SynthDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultDesktopManager::init$();
}

void SynthDesktopPaneUI$SynthDesktopManager::maximizeFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	if ($nc(f)->isIcon()) {
		try {
			f->setIcon(false);
		} catch ($PropertyVetoException&) {
			$catch();
		}
	} else {
		f->setNormalBounds($(f->getBounds()));
		$var($Component, desktop, f->getParent());
		$var($JComponent, var$0, static_cast<$JComponent*>(f));
		int32_t var$1 = $nc(desktop)->getWidth();
		int32_t var$2 = desktop->getHeight();
		setBoundsForFrame(var$0, 0, 0, var$1, var$2 - $nc(this->this$0->taskBar)->getHeight());
	}
	try {
		$nc(f)->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
}

void SynthDesktopPaneUI$SynthDesktopManager::iconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, nullptr);
	$var($Container, c, $nc(f)->getParent());
	$var($JDesktopPane, d, f->getDesktopPane());
	bool findNext = f->isSelected();
	if (c == nullptr || d == nullptr) {
		return;
	}
	$assign(desktopIcon, f->getDesktopIcon());
	if (!wasIcon(f)) {
		$var($Rectangle, r, getBoundsForIconOf(f));
		$nc(desktopIcon)->setBounds($nc(r)->x, r->y, r->width, r->height);
		desktopIcon->revalidate();
		$init($Boolean);
		setWasIcon(f, $Boolean::TRUE);
	}
	$nc(c)->remove(static_cast<$Component*>(f));
	int32_t var$0 = f->getX();
	int32_t var$1 = f->getY();
	int32_t var$2 = f->getWidth();
	c->repaint(var$0, var$1, var$2, f->getHeight());
	try {
		f->setSelected(false);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	if (findNext) {
		{
			$var($ComponentArray, arr$, c->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					if ($instanceOf($JInternalFrame, comp)) {
						try {
							$nc(($cast($JInternalFrame, comp)))->setSelected(true);
						} catch ($PropertyVetoException&) {
							$catch();
						}
						$nc(($cast($JInternalFrame, comp)))->moveToFront();
						return;
					}
				}
			}
		}
	}
}

void SynthDesktopPaneUI$SynthDesktopManager::deiconifyFrame($JInternalFrame* f) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, desktopIcon, $nc(f)->getDesktopIcon());
	$var($Container, c, $nc(desktopIcon)->getParent());
	if (c != nullptr) {
		$assign(c, c->getParent());
		if (c != nullptr) {
			c->add(static_cast<$Component*>(f));
			if (f->isMaximum()) {
				int32_t w = c->getWidth();
				int32_t var$0 = c->getHeight();
				int32_t h = var$0 - $nc(this->this$0->taskBar)->getHeight();
				bool var$1 = f->getWidth() != w;
				if (var$1 || f->getHeight() != h) {
					setBoundsForFrame(f, 0, 0, w, h);
				}
			}
			if (f->isSelected()) {
				f->moveToFront();
			} else {
				try {
					f->setSelected(true);
				} catch ($PropertyVetoException&) {
					$catch();
				}
			}
		}
	}
}

void SynthDesktopPaneUI$SynthDesktopManager::removeIconFor($JInternalFrame* f) {
	$DefaultDesktopManager::removeIconFor(f);
	$nc(this->this$0->taskBar)->validate();
}

void SynthDesktopPaneUI$SynthDesktopManager::setBoundsForFrame($JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {
	$DefaultDesktopManager::setBoundsForFrame(f, newX, newY, newWidth, newHeight);
	if (this->this$0->taskBar != nullptr && newY >= $nc(this->this$0->taskBar)->getY()) {
		int32_t var$0 = f->getX();
		int32_t var$1 = $nc(this->this$0->taskBar)->getY();
		$nc(f)->setLocation(var$0, var$1 - $nc($(f->getInsets()))->top);
	}
}

SynthDesktopPaneUI$SynthDesktopManager::SynthDesktopPaneUI$SynthDesktopManager() {
}

$Class* SynthDesktopPaneUI$SynthDesktopManager::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopPaneUI$SynthDesktopManager, name, initialize, &_SynthDesktopPaneUI$SynthDesktopManager_ClassInfo_, allocate$SynthDesktopPaneUI$SynthDesktopManager);
	return class$;
}

$Class* SynthDesktopPaneUI$SynthDesktopManager::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax