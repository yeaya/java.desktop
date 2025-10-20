#include <javax/swing/JInternalFrame$JDesktopIcon.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;

namespace javax {
	namespace swing {

$FieldInfo _JInternalFrame$JDesktopIcon_FieldInfo_[] = {
	{"internalFrame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(JInternalFrame$JDesktopIcon, internalFrame)},
	{}
};

$MethodInfo _JInternalFrame$JDesktopIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame$JDesktopIcon::*)($JInternalFrame*)>(&JInternalFrame$JDesktopIcon::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getDesktopPane", "()Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC},
	{"getInternalFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/DesktopIconUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setInternalFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{"setUI", "(Ljavax/swing/plaf/DesktopIconUI;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"updateUIWhenHidden", "()V", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JInternalFrame$JDesktopIcon::*)($ObjectOutputStream*)>(&JInternalFrame$JDesktopIcon::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JInternalFrame$JDesktopIcon_InnerClassesInfo_[] = {
	{"javax.swing.JInternalFrame$JDesktopIcon", "javax.swing.JInternalFrame", "JDesktopIcon", $PUBLIC | $STATIC},
	{"javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon", "javax.swing.JInternalFrame$JDesktopIcon", "AccessibleJDesktopIcon", $PROTECTED},
	{}
};

$ClassInfo _JInternalFrame$JDesktopIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JInternalFrame$JDesktopIcon",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JInternalFrame$JDesktopIcon_FieldInfo_,
	_JInternalFrame$JDesktopIcon_MethodInfo_,
	nullptr,
	nullptr,
	_JInternalFrame$JDesktopIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JInternalFrame"
};

$Object* allocate$JInternalFrame$JDesktopIcon($Class* clazz) {
	return $of($alloc(JInternalFrame$JDesktopIcon));
}

$String* JInternalFrame$JDesktopIcon::toString() {
	 return this->$JComponent::toString();
}

int32_t JInternalFrame$JDesktopIcon::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JInternalFrame$JDesktopIcon::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JInternalFrame$JDesktopIcon::clone() {
	 return this->$JComponent::clone();
}

void JInternalFrame$JDesktopIcon::finalize() {
	this->$JComponent::finalize();
}

void JInternalFrame$JDesktopIcon::init$($JInternalFrame* f) {
	$JComponent::init$();
	setVisible(false);
	setInternalFrame(f);
	updateUI();
}

$ComponentUI* JInternalFrame$JDesktopIcon::getUI() {
	return $cast($DesktopIconUI, this->ui);
}

void JInternalFrame$JDesktopIcon::setUI($DesktopIconUI* ui) {
	$JComponent::setUI(ui);
}

$JInternalFrame* JInternalFrame$JDesktopIcon::getInternalFrame() {
	return this->internalFrame;
}

void JInternalFrame$JDesktopIcon::setInternalFrame($JInternalFrame* f) {
	$set(this, internalFrame, f);
}

$JDesktopPane* JInternalFrame$JDesktopIcon::getDesktopPane() {
	if (getInternalFrame() != nullptr) {
		return $nc($(getInternalFrame()))->getDesktopPane();
	}
	return nullptr;
}

void JInternalFrame$JDesktopIcon::updateUI() {
	$useLocalCurrentObjectStackCache();
	bool hadUI = (this->ui != nullptr);
	setUI($cast($DesktopIconUI, $($UIManager::getUI(this))));
	invalidate();
	$var($Dimension, r, getPreferredSize());
	setSize($nc(r)->width, r->height);
	if (this->internalFrame != nullptr && $cast($InternalFrameUI, $nc(this->internalFrame)->getUI()) != nullptr) {
		$SwingUtilities::updateComponentTreeUI(this->internalFrame);
	}
}

void JInternalFrame$JDesktopIcon::updateUIWhenHidden() {
	$useLocalCurrentObjectStackCache();
	setUI($cast($DesktopIconUI, $($UIManager::getUI(this))));
	$var($Dimension, r, getPreferredSize());
	setSize($nc(r)->width, r->height);
	invalidate();
	$var($ComponentArray, children, getComponents());
	if (children != nullptr) {
		{
			$var($ComponentArray, arr$, children);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					$SwingUtilities::updateComponentTreeUI(child);
				}
			}
		}
	}
}

$String* JInternalFrame$JDesktopIcon::getUIClassID() {
	return "DesktopIconUI"_s;
}

void JInternalFrame$JDesktopIcon::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals("DesktopIconUI"_s)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$AccessibleContext* JInternalFrame$JDesktopIcon::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, this));
	}
	return this->accessibleContext;
}

JInternalFrame$JDesktopIcon::JInternalFrame$JDesktopIcon() {
}

$Class* JInternalFrame$JDesktopIcon::load$($String* name, bool initialize) {
	$loadClass(JInternalFrame$JDesktopIcon, name, initialize, &_JInternalFrame$JDesktopIcon_ClassInfo_, allocate$JInternalFrame$JDesktopIcon);
	return class$;
}

$Class* JInternalFrame$JDesktopIcon::class$ = nullptr;

	} // swing
} // javax