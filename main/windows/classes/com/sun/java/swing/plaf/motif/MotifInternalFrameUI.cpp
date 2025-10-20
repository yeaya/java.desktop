#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders$InternalFrameBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$1.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$2.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$3.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

#undef VK_ESCAPE
#undef WHEN_IN_FOCUSED_WINDOW

using $MotifBorders$FrameBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$FrameBorder;
using $MotifBorders$InternalFrameBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$InternalFrameBorder;
using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameUI$1 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI$1;
using $MotifInternalFrameUI$2 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI$2;
using $MotifInternalFrameUI$3 = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI$3;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$CompoundAttribute _MotifInternalFrameUI_FieldAnnotations_closeMenuKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MotifInternalFrameUI_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(MotifInternalFrameUI, color)},
	{"highlight", "Ljava/awt/Color;", nullptr, 0, $field(MotifInternalFrameUI, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, 0, $field(MotifInternalFrameUI, shadow)},
	{"titlePane", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, 0, $field(MotifInternalFrameUI, titlePane)},
	{"closeMenuKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(MotifInternalFrameUI, closeMenuKey), _MotifInternalFrameUI_FieldAnnotations_closeMenuKey},
	{}
};

$MethodInfo _MotifInternalFrameUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifInternalFrameUI::*)($JInternalFrame*)>(&MotifInternalFrameUI::init$))},
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifInternalFrameUI::createUI))},
	{"deactivateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"getFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $method(static_cast<$JInternalFrame*(MotifInternalFrameUI::*)()>(&MotifInternalFrameUI::getFrame))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setColors", "(Ljavax/swing/JInternalFrame;)V", nullptr, 0},
	{"setupMenuCloseKey", "()V", nullptr, $PROTECTED},
	{"setupMenuOpenKey", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifInternalFrameUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI",
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	nullptr,
	_MotifInternalFrameUI_FieldInfo_,
	_MotifInternalFrameUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifInternalFrameUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3,com.sun.java.swing.plaf.motif.MotifInternalFrameUI$2,com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1"
};

$Object* allocate$MotifInternalFrameUI($Class* clazz) {
	return $of($alloc(MotifInternalFrameUI));
}

$ComponentUI* MotifInternalFrameUI::createUI($JComponent* w) {
	$init(MotifInternalFrameUI);
	return $new(MotifInternalFrameUI, $cast($JInternalFrame, w));
}

void MotifInternalFrameUI::init$($JInternalFrame* w) {
	$BasicInternalFrameUI::init$(w);
}

void MotifInternalFrameUI::installUI($JComponent* c) {
	$BasicInternalFrameUI::installUI(c);
	setColors($cast($JInternalFrame, c));
}

void MotifInternalFrameUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($Border, frameBorder, $nc(this->frame)->getBorder());
	$nc(this->frame)->setLayout($assignField(this, internalFrameLayout, createLayoutManager()));
	if (frameBorder == nullptr || $instanceOf($UIResource, frameBorder)) {
		$nc(this->frame)->setBorder($$new($MotifBorders$InternalFrameBorder, this->frame));
	}
}

void MotifInternalFrameUI::installKeyboardActions() {
	$BasicInternalFrameUI::installKeyboardActions();
	$set(this, closeMenuKey, $KeyStroke::getKeyStroke($KeyEvent::VK_ESCAPE, 0));
}

void MotifInternalFrameUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->frame);
	$nc(this->frame)->setLayout(nullptr);
	$set(this, internalFrameLayout, nullptr);
}

$JInternalFrame* MotifInternalFrameUI::getFrame() {
	return this->frame;
}

$JComponent* MotifInternalFrameUI::createNorthPane($JInternalFrame* w) {
	$set(this, titlePane, $new($MotifInternalFrameTitlePane, w));
	return this->titlePane;
}

$Dimension* MotifInternalFrameUI::getMaximumSize($JComponent* x) {
	return $nc($($Toolkit::getDefaultToolkit()))->getScreenSize();
}

void MotifInternalFrameUI::uninstallKeyboardActions() {
	$BasicInternalFrameUI::uninstallKeyboardActions();
	if (isKeyBindingRegistered()) {
		$var($JInternalFrame$JDesktopIcon, di, $nc(this->frame)->getDesktopIcon());
		$SwingUtilities::replaceUIActionMap(di, nullptr);
		$SwingUtilities::replaceUIInputMap(di, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	}
}

void MotifInternalFrameUI::setupMenuOpenKey() {
	$useLocalCurrentObjectStackCache();
	$BasicInternalFrameUI::setupMenuOpenKey();
	$var($ActionMap, map, $SwingUtilities::getUIActionMap(this->frame));
	if (map != nullptr) {
		map->put("showSystemMenu"_s, $$new($MotifInternalFrameUI$1, this));
	}
}

void MotifInternalFrameUI::setupMenuCloseKey() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $SwingUtilities::getUIActionMap(this->frame));
	if (map != nullptr) {
		map->put("hideSystemMenu"_s, $$new($MotifInternalFrameUI$2, this));
	}
	$var($JInternalFrame$JDesktopIcon, di, $nc(this->frame)->getDesktopIcon());
	$var($InputMap, diInputMap, $SwingUtilities::getUIInputMap(di, $JComponent::WHEN_IN_FOCUSED_WINDOW));
	if (diInputMap == nullptr) {
		$var($ObjectArray, bindings, $cast($ObjectArray, $UIManager::get("DesktopIcon.windowBindings"_s)));
		if (bindings != nullptr) {
			$assign(diInputMap, $LookAndFeel::makeComponentInputMap(di, bindings));
			$SwingUtilities::replaceUIInputMap(di, $JComponent::WHEN_IN_FOCUSED_WINDOW, diInputMap);
		}
	}
	$var($ActionMap, diActionMap, $SwingUtilities::getUIActionMap(di));
	if (diActionMap == nullptr) {
		$assign(diActionMap, $new($ActionMapUIResource));
		diActionMap->put("hideSystemMenu"_s, $$new($MotifInternalFrameUI$3, this));
		$SwingUtilities::replaceUIActionMap(di, diActionMap);
	}
}

void MotifInternalFrameUI::activateFrame($JInternalFrame* f) {
	$BasicInternalFrameUI::activateFrame(f);
	setColors(f);
}

void MotifInternalFrameUI::deactivateFrame($JInternalFrame* f) {
	setColors(f);
	$BasicInternalFrameUI::deactivateFrame(f);
}

void MotifInternalFrameUI::setColors($JInternalFrame* frame) {
	if ($nc(frame)->isSelected()) {
		$set(this, color, $UIManager::getColor("InternalFrame.activeTitleBackground"_s));
	} else {
		$set(this, color, $UIManager::getColor("InternalFrame.inactiveTitleBackground"_s));
	}
	$set(this, highlight, $nc(this->color)->brighter());
	$set(this, shadow, $nc($($nc(this->color)->darker()))->darker());
	$nc(this->titlePane)->setColors(this->color, this->highlight, this->shadow);
}

MotifInternalFrameUI::MotifInternalFrameUI() {
}

$Class* MotifInternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameUI, name, initialize, &_MotifInternalFrameUI_ClassInfo_, allocate$MotifInternalFrameUI);
	return class$;
}

$Class* MotifInternalFrameUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com