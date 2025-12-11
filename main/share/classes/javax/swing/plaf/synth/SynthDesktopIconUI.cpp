#include <javax/swing/plaf/synth/SynthDesktopIconUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthDesktopIconUI$1.h>
#include <javax/swing/plaf/synth/SynthDesktopIconUI$Handler.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef CENTER
#undef ENABLED
#undef IS_ICON_PROPERTY
#undef IS_SELECTED_PROPERTY

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JToggleButton = ::javax::swing::JToggleButton;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthDesktopIconUI$1 = ::javax::swing::plaf::synth::SynthDesktopIconUI$1;
using $SynthDesktopIconUI$Handler = ::javax::swing::plaf::synth::SynthDesktopIconUI$Handler;
using $SynthInternalFrameTitlePane = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthDesktopIconUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthDesktopIconUI, style)},
	{"handler", "Ljavax/swing/plaf/synth/SynthDesktopIconUI$Handler;", nullptr, $PRIVATE, $field(SynthDesktopIconUI, handler)},
	{}
};

$MethodInfo _SynthDesktopIconUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthDesktopIconUI::*)()>(&SynthDesktopIconUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthDesktopIconUI*)>(&SynthDesktopIconUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthDesktopIconUI*)>(&SynthDesktopIconUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthDesktopIconUI*)>(&SynthDesktopIconUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthDesktopIconUI*)>(&SynthDesktopIconUI::access$300))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthDesktopIconUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthDesktopIconUI::*)($JComponent*)>(&SynthDesktopIconUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthDesktopIconUI::*)($JComponent*,int32_t)>(&SynthDesktopIconUI::getContext))},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthDesktopIconUI::*)($JComponent*)>(&SynthDesktopIconUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthDesktopIconUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopIconUI$Handler", "javax.swing.plaf.synth.SynthDesktopIconUI", "Handler", $PRIVATE | $FINAL},
	{"javax.swing.plaf.synth.SynthDesktopIconUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthDesktopIconUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopIconUI",
	"javax.swing.plaf.basic.BasicDesktopIconUI",
	"javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener",
	_SynthDesktopIconUI_FieldInfo_,
	_SynthDesktopIconUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthDesktopIconUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopIconUI$Handler,javax.swing.plaf.synth.SynthDesktopIconUI$1"
};

$Object* allocate$SynthDesktopIconUI($Class* clazz) {
	return $of($alloc(SynthDesktopIconUI));
}

int32_t SynthDesktopIconUI::hashCode() {
	 return this->$BasicDesktopIconUI::hashCode();
}

bool SynthDesktopIconUI::equals(Object$* arg0) {
	 return this->$BasicDesktopIconUI::equals(arg0);
}

$Object* SynthDesktopIconUI::clone() {
	 return this->$BasicDesktopIconUI::clone();
}

$String* SynthDesktopIconUI::toString() {
	 return this->$BasicDesktopIconUI::toString();
}

void SynthDesktopIconUI::finalize() {
	this->$BasicDesktopIconUI::finalize();
}

$JInternalFrame* SynthDesktopIconUI::access$300(SynthDesktopIconUI* x0) {
	$init(SynthDesktopIconUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthDesktopIconUI::access$200(SynthDesktopIconUI* x0) {
	$init(SynthDesktopIconUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthDesktopIconUI::access$100(SynthDesktopIconUI* x0) {
	$init(SynthDesktopIconUI);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthDesktopIconUI::access$000(SynthDesktopIconUI* x0) {
	$init(SynthDesktopIconUI);
	return $nc(x0)->frame;
}

void SynthDesktopIconUI::init$() {
	$BasicDesktopIconUI::init$();
	$set(this, handler, $new($SynthDesktopIconUI$Handler, this));
}

$ComponentUI* SynthDesktopIconUI::createUI($JComponent* c) {
	$init(SynthDesktopIconUI);
	return $new(SynthDesktopIconUI);
}

void SynthDesktopIconUI::installComponents() {
	$useLocalCurrentObjectStackCache();
	if ($UIManager::getBoolean("InternalFrame.useTaskBar"_s)) {
		$var($String, var$0, $nc(this->frame)->getTitle());
		$var($JToggleButton, tmp, $new($SynthDesktopIconUI$1, this, var$0, $($nc(this->frame)->getFrameIcon())));
		$set(this, iconPane, tmp);
		$nc($($ToolTipManager::sharedInstance()))->registerComponent(this->iconPane);
		$nc(this->iconPane)->setFont($($nc(this->desktopIcon)->getFont()));
		$nc(this->iconPane)->setBackground($($nc(this->desktopIcon)->getBackground()));
		$nc(this->iconPane)->setForeground($($nc(this->desktopIcon)->getForeground()));
	} else {
		$set(this, iconPane, $new($SynthInternalFrameTitlePane, this->frame));
		$nc(this->iconPane)->setName("InternalFrame.northPane"_s);
	}
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->iconPane), $of($BorderLayout::CENTER));
}

void SynthDesktopIconUI::uninstallComponents() {
	if ($instanceOf($JToggleButton, this->iconPane)) {
		$nc(($cast($JToggleButton, this->iconPane)))->removeActionListener(this->handler);
		$nc(this->frame)->removePropertyChangeListener(this);
	} else if ($instanceOf($SynthInternalFrameTitlePane, this->iconPane)) {
		$nc(($cast($SynthInternalFrameTitlePane, this->iconPane)))->uninstallListeners();
	}
	$BasicDesktopIconUI::uninstallComponents();
}

void SynthDesktopIconUI::installListeners() {
	$BasicDesktopIconUI::installListeners();
	$nc(this->desktopIcon)->addPropertyChangeListener(this);
	if ($instanceOf($JToggleButton, this->iconPane)) {
		$nc(this->frame)->addPropertyChangeListener(this);
		$nc(($cast($JToggleButton, this->iconPane)))->addActionListener(this->handler);
	}
}

void SynthDesktopIconUI::uninstallListeners() {
	$nc(this->desktopIcon)->removePropertyChangeListener(this);
	$BasicDesktopIconUI::uninstallListeners();
}

void SynthDesktopIconUI::installDefaults() {
	updateStyle(this->desktopIcon);
}

void SynthDesktopIconUI::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthDesktopIconUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->desktopIcon, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

$SynthContext* SynthDesktopIconUI::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthDesktopIconUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

int32_t SynthDesktopIconUI::getComponentState($JComponent* c) {
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthDesktopIconUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintDesktopIconBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthDesktopIconUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthDesktopIconUI::paint($SynthContext* context, $Graphics* g) {
}

void SynthDesktopIconUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintDesktopIconBorder(context, g, x, y, w, h);
}

void SynthDesktopIconUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JInternalFrame$JDesktopIcon, $($nc(evt)->getSource()))) {
		if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
			updateStyle($cast($JInternalFrame$JDesktopIcon, $(evt->getSource())));
		}
	} else if ($instanceOf($JInternalFrame, $(evt->getSource()))) {
		$var($JInternalFrame, frame, $cast($JInternalFrame, evt->getSource()));
		if ($instanceOf($JToggleButton, this->iconPane)) {
			$var($JToggleButton, button, $cast($JToggleButton, this->iconPane));
			$var($String, prop, evt->getPropertyName());
			if (prop == "title"_s) {
				$nc(button)->setText($cast($String, $(evt->getNewValue())));
			} else if (prop == "frameIcon"_s) {
				$nc(button)->setIcon($cast($Icon, $(evt->getNewValue())));
			} else {
				$init($JInternalFrame);
				if (prop == $JInternalFrame::IS_ICON_PROPERTY || prop == $JInternalFrame::IS_SELECTED_PROPERTY) {
					bool var$0 = !$nc(frame)->isIcon();
					$nc(button)->setSelected(var$0 && frame->isSelected());
				}
			}
		}
	}
}

SynthDesktopIconUI::SynthDesktopIconUI() {
}

$Class* SynthDesktopIconUI::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopIconUI, name, initialize, &_SynthDesktopIconUI_ClassInfo_, allocate$SynthDesktopIconUI);
	return class$;
}

$Class* SynthDesktopIconUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax