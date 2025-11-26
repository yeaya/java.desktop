#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar$1.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar$2.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI.h>
#include <jcpp.h>

#undef LEFT
#undef RAISED

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $SynthDesktopPaneUI = ::javax::swing::plaf::synth::SynthDesktopPaneUI;
using $SynthDesktopPaneUI$TaskBar$1 = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar$1;
using $SynthDesktopPaneUI$TaskBar$2 = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar$2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthDesktopPaneUI$TaskBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SynthDesktopPaneUI$TaskBar::*)()>(&SynthDesktopPaneUI$TaskBar::init$))},
	{"adjustSize", "()V", nullptr, 0},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthDesktopPaneUI$TaskBar_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar", "javax.swing.plaf.synth.SynthDesktopPaneUI", "TaskBar", $STATIC},
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthDesktopPaneUI$TaskBar_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar",
	"javax.swing.JPanel",
	"java.awt.event.ComponentListener,java.awt.event.ContainerListener",
	nullptr,
	_SynthDesktopPaneUI$TaskBar_MethodInfo_,
	nullptr,
	nullptr,
	_SynthDesktopPaneUI$TaskBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopPaneUI"
};

$Object* allocate$SynthDesktopPaneUI$TaskBar($Class* clazz) {
	return $of($alloc(SynthDesktopPaneUI$TaskBar));
}

$String* SynthDesktopPaneUI$TaskBar::toString() {
	 return this->$JPanel::toString();
}

int32_t SynthDesktopPaneUI$TaskBar::hashCode() {
	 return this->$JPanel::hashCode();
}

bool SynthDesktopPaneUI$TaskBar::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* SynthDesktopPaneUI$TaskBar::clone() {
	 return this->$JPanel::clone();
}

void SynthDesktopPaneUI$TaskBar::finalize() {
	this->$JPanel::finalize();
}

void SynthDesktopPaneUI$TaskBar::init$() {
	$useLocalCurrentObjectStackCache();
	$JPanel::init$();
	setOpaque(true);
	setLayout($$new($SynthDesktopPaneUI$TaskBar$1, this, $FlowLayout::LEFT, 0, 0));
	setBorder($$new($SynthDesktopPaneUI$TaskBar$2, this, $BevelBorder::RAISED));
}

void SynthDesktopPaneUI$TaskBar::adjustSize() {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, desktop, $cast($JDesktopPane, getParent()));
	if (desktop != nullptr) {
		int32_t height = $nc($(getPreferredSize()))->height;
		$var($Insets, insets, getInsets());
		if (height == $nc(insets)->top + insets->bottom) {
			if (getHeight() <= height) {
				height += 21;
			} else {
				height = getHeight();
			}
		}
		int32_t var$0 = desktop->getHeight() - height;
		setBounds(0, var$0, desktop->getWidth(), height);
		revalidate();
		repaint();
	}
}

void SynthDesktopPaneUI$TaskBar::componentResized($ComponentEvent* e) {
	if ($instanceOf($JDesktopPane, $($nc(e)->getSource()))) {
		adjustSize();
	}
}

void SynthDesktopPaneUI$TaskBar::componentMoved($ComponentEvent* e) {
}

void SynthDesktopPaneUI$TaskBar::componentShown($ComponentEvent* e) {
	if ($instanceOf($JInternalFrame, $($nc(e)->getSource()))) {
		adjustSize();
	}
}

void SynthDesktopPaneUI$TaskBar::componentHidden($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JInternalFrame, $($nc(e)->getSource()))) {
		$nc($($nc(($cast($JInternalFrame, $(e->getSource()))))->getDesktopIcon()))->setVisible(false);
		revalidate();
	}
}

void SynthDesktopPaneUI$TaskBar::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JInternalFrame, $($nc(e)->getChild()))) {
		$var($JDesktopPane, desktop, $cast($JDesktopPane, e->getSource()));
		$var($JInternalFrame, f, $cast($JInternalFrame, e->getChild()));
		$var($JInternalFrame$JDesktopIcon, desktopIcon, $nc(f)->getDesktopIcon());
		{
			$var($ComponentArray, arr$, getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					if ($equals(comp, desktopIcon)) {
						return;
					}
				}
			}
		}
		add(static_cast<$Component*>(desktopIcon));
		f->addComponentListener(this);
		if (getComponentCount() == 1) {
			adjustSize();
		}
	}
}

void SynthDesktopPaneUI$TaskBar::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JInternalFrame, $($nc(e)->getChild()))) {
		$var($JInternalFrame, f, $cast($JInternalFrame, e->getChild()));
		if (!$nc(f)->isIcon()) {
			remove($(static_cast<$Component*>(f->getDesktopIcon())));
			f->removeComponentListener(this);
			revalidate();
			repaint();
		}
	}
}

SynthDesktopPaneUI$TaskBar::SynthDesktopPaneUI$TaskBar() {
}

$Class* SynthDesktopPaneUI$TaskBar::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopPaneUI$TaskBar, name, initialize, &_SynthDesktopPaneUI$TaskBar_ClassInfo_, allocate$SynthDesktopPaneUI$TaskBar);
	return class$;
}

$Class* SynthDesktopPaneUI$TaskBar::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax