#include <javax/swing/plaf/synth/SynthDesktopPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/ContainerListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$SynthDesktopManager.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef ENABLED
#undef PALETTE_LAYER

using $ComponentArray = $Array<::java::awt::Component>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthDesktopPaneUI$SynthDesktopManager = ::javax::swing::plaf::synth::SynthDesktopPaneUI$SynthDesktopManager;
using $SynthDesktopPaneUI$TaskBar = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthDesktopPaneUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthDesktopPaneUI, style)},
	{"taskBar", "Ljavax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar;", nullptr, $PRIVATE, $field(SynthDesktopPaneUI, taskBar)},
	{"oldDesktopManager", "Ljavax/swing/DesktopManager;", nullptr, $PRIVATE, $field(SynthDesktopPaneUI, oldDesktopManager)},
	{}
};

$MethodInfo _SynthDesktopPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthDesktopPaneUI::*)()>(&SynthDesktopPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthDesktopPaneUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthDesktopPaneUI::*)($JComponent*)>(&SynthDesktopPaneUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthDesktopPaneUI::*)($JComponent*,int32_t)>(&SynthDesktopPaneUI::getContext))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installDesktopManager", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallDesktopManager", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JDesktopPane;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthDesktopPaneUI::*)($JDesktopPane*)>(&SynthDesktopPaneUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthDesktopPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager", "javax.swing.plaf.synth.SynthDesktopPaneUI", "SynthDesktopManager", 0},
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar", "javax.swing.plaf.synth.SynthDesktopPaneUI", "TaskBar", $STATIC},
	{}
};

$ClassInfo _SynthDesktopPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopPaneUI",
	"javax.swing.plaf.basic.BasicDesktopPaneUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthDesktopPaneUI_FieldInfo_,
	_SynthDesktopPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthDesktopPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopPaneUI$SynthDesktopManager,javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar,javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$2,javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$1"
};

$Object* allocate$SynthDesktopPaneUI($Class* clazz) {
	return $of($alloc(SynthDesktopPaneUI));
}

int32_t SynthDesktopPaneUI::hashCode() {
	 return this->$BasicDesktopPaneUI::hashCode();
}

bool SynthDesktopPaneUI::equals(Object$* arg0) {
	 return this->$BasicDesktopPaneUI::equals(arg0);
}

$Object* SynthDesktopPaneUI::clone() {
	 return this->$BasicDesktopPaneUI::clone();
}

$String* SynthDesktopPaneUI::toString() {
	 return this->$BasicDesktopPaneUI::toString();
}

void SynthDesktopPaneUI::finalize() {
	this->$BasicDesktopPaneUI::finalize();
}

void SynthDesktopPaneUI::init$() {
	$BasicDesktopPaneUI::init$();
}

$ComponentUI* SynthDesktopPaneUI::createUI($JComponent* c) {
	$init(SynthDesktopPaneUI);
	return $new(SynthDesktopPaneUI);
}

void SynthDesktopPaneUI::installListeners() {
	$BasicDesktopPaneUI::installListeners();
	$nc(this->desktop)->addPropertyChangeListener(this);
	if (this->taskBar != nullptr) {
		$nc(this->desktop)->addComponentListener(this->taskBar);
		$nc(this->desktop)->addContainerListener(this->taskBar);
	}
}

void SynthDesktopPaneUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	updateStyle(this->desktop);
	if ($UIManager::getBoolean("InternalFrame.useTaskBar"_s)) {
		$set(this, taskBar, $new($SynthDesktopPaneUI$TaskBar));
		{
			$var($ComponentArray, arr$, $nc(this->desktop)->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					$var($JInternalFrame$JDesktopIcon, desktopIcon, nullptr);
					if ($instanceOf($JInternalFrame$JDesktopIcon, comp)) {
						$assign(desktopIcon, $cast($JInternalFrame$JDesktopIcon, comp));
					} else if ($instanceOf($JInternalFrame, comp)) {
						$assign(desktopIcon, $nc(($cast($JInternalFrame, comp)))->getDesktopIcon());
					} else {
						continue;
					}
					if ($equals($nc(desktopIcon)->getParent(), this->desktop)) {
						$nc(this->desktop)->remove(static_cast<$Component*>(desktopIcon));
					}
					if (!$equals($nc(desktopIcon)->getParent(), this->taskBar)) {
						$nc(this->taskBar)->add(static_cast<$Component*>(desktopIcon));
						$nc($(desktopIcon->getInternalFrame()))->addComponentListener(this->taskBar);
					}
				}
			}
		}
		$nc(this->taskBar)->setBackground($($nc(this->desktop)->getBackground()));
		$init($JLayeredPane);
		$nc(this->desktop)->add(static_cast<$Component*>(this->taskBar), $($of($Integer::valueOf($nc($JLayeredPane::PALETTE_LAYER)->intValue() + 1))));
		if ($nc(this->desktop)->isShowing()) {
			$nc(this->taskBar)->adjustSize();
		}
	}
}

void SynthDesktopPaneUI::updateStyle($JDesktopPane* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthStyle, oldStyle, this->style);
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (oldStyle != nullptr) {
		uninstallKeyboardActions();
		installKeyboardActions();
	}
}

void SynthDesktopPaneUI::uninstallListeners() {
	if (this->taskBar != nullptr) {
		$nc(this->desktop)->removeComponentListener(this->taskBar);
		$nc(this->desktop)->removeContainerListener(this->taskBar);
	}
	$nc(this->desktop)->removePropertyChangeListener(this);
	$BasicDesktopPaneUI::uninstallListeners();
}

void SynthDesktopPaneUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(this->desktop, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	if (this->taskBar != nullptr) {
		{
			$var($ComponentArray, arr$, $nc(this->taskBar)->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					$var($JInternalFrame$JDesktopIcon, desktopIcon, $cast($JInternalFrame$JDesktopIcon, comp));
					$nc(this->taskBar)->remove(static_cast<$Component*>(desktopIcon));
					$nc(desktopIcon)->setPreferredSize(nullptr);
					$var($JInternalFrame, f, desktopIcon->getInternalFrame());
					if ($nc(f)->isIcon()) {
						$nc(this->desktop)->add(static_cast<$Component*>(desktopIcon));
					}
					$nc(f)->removeComponentListener(this->taskBar);
				}
			}
		}
		$nc(this->desktop)->remove(static_cast<$Component*>(this->taskBar));
		$set(this, taskBar, nullptr);
	}
}

void SynthDesktopPaneUI::installDesktopManager() {
	if ($UIManager::getBoolean("InternalFrame.useTaskBar"_s)) {
		$set(this, desktopManager, ($assignField(this, oldDesktopManager, $nc(this->desktop)->getDesktopManager())));
		if (!($instanceOf($SynthDesktopPaneUI$SynthDesktopManager, this->desktopManager))) {
			$set(this, desktopManager, $new($SynthDesktopPaneUI$SynthDesktopManager, this));
			$nc(this->desktop)->setDesktopManager(this->desktopManager);
		}
	} else {
		$BasicDesktopPaneUI::installDesktopManager();
	}
}

void SynthDesktopPaneUI::uninstallDesktopManager() {
	if (this->oldDesktopManager != nullptr && !($instanceOf($UIResource, this->oldDesktopManager))) {
		$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
		if (this->desktopManager == nullptr || $instanceOf($UIResource, this->desktopManager)) {
			$nc(this->desktop)->setDesktopManager(this->oldDesktopManager);
		}
	}
	$set(this, oldDesktopManager, nullptr);
	$BasicDesktopPaneUI::uninstallDesktopManager();
}

$SynthContext* SynthDesktopPaneUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthDesktopPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthDesktopPaneUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthDesktopPaneUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintDesktopPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthDesktopPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthDesktopPaneUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthDesktopPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintDesktopPaneBorder(context, g, x, y, w, h);
}

void SynthDesktopPaneUI::propertyChange($PropertyChangeEvent* evt) {
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($cast($JDesktopPane, $($nc(evt)->getSource())));
	}
	if ($nc(evt)->getPropertyName() == "ancestor"_s && this->taskBar != nullptr) {
		$nc(this->taskBar)->adjustSize();
	}
}

SynthDesktopPaneUI::SynthDesktopPaneUI() {
}

$Class* SynthDesktopPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopPaneUI, name, initialize, &_SynthDesktopPaneUI_ClassInfo_, allocate$SynthDesktopPaneUI);
	return class$;
}

$Class* SynthDesktopPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax