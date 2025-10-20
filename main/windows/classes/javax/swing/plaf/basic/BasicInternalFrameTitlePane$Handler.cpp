#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef IS_ICON_PROPERTY
#undef IS_MAXIMUM_PROPERTY
#undef IS_SELECTED_PROPERTY
#undef TRUE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $Border = ::javax::swing::border::Border;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$Handler, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicInternalFrameTitlePane$Handler::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$Handler::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$Handler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$Handler",
	"java.lang.Object",
	"java.awt.LayoutManager,java.beans.PropertyChangeListener",
	_BasicInternalFrameTitlePane$Handler_FieldInfo_,
	_BasicInternalFrameTitlePane$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$Handler($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$Handler));
}

int32_t BasicInternalFrameTitlePane$Handler::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool BasicInternalFrameTitlePane$Handler::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* BasicInternalFrameTitlePane$Handler::clone() {
	 return this->$LayoutManager::clone();
}

$String* BasicInternalFrameTitlePane$Handler::toString() {
	 return this->$LayoutManager::toString();
}

void BasicInternalFrameTitlePane$Handler::finalize() {
	this->$LayoutManager::finalize();
}

void BasicInternalFrameTitlePane$Handler::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameTitlePane$Handler::propertyChange($PropertyChangeEvent* evt) {
	$var($String, prop, $nc(evt)->getPropertyName());
	$init($JInternalFrame);
	if (prop == $JInternalFrame::IS_SELECTED_PROPERTY) {
		this->this$0->repaint();
		return;
	}
	if (prop == $JInternalFrame::IS_ICON_PROPERTY || prop == $JInternalFrame::IS_MAXIMUM_PROPERTY) {
		this->this$0->setButtonIcons();
		this->this$0->enableActions();
		return;
	}
	if ("closable"_s == prop) {
		$init($Boolean);
		if ($equals(evt->getNewValue(), $Boolean::TRUE)) {
			this->this$0->add(static_cast<$Component*>(this->this$0->closeButton));
		} else {
			this->this$0->remove(static_cast<$Component*>(this->this$0->closeButton));
		}
	} else if ("maximizable"_s == prop) {
		$init($Boolean);
		if ($equals(evt->getNewValue(), $Boolean::TRUE)) {
			this->this$0->add(static_cast<$Component*>(this->this$0->maxButton));
		} else {
			this->this$0->remove(static_cast<$Component*>(this->this$0->maxButton));
		}
	} else if ("iconable"_s == prop) {
		$init($Boolean);
		if ($equals(evt->getNewValue(), $Boolean::TRUE)) {
			this->this$0->add(static_cast<$Component*>(this->this$0->iconButton));
		} else {
			this->this$0->remove(static_cast<$Component*>(this->this$0->iconButton));
		}
	}
	this->this$0->enableActions();
	this->this$0->revalidate();
	this->this$0->repaint();
}

void BasicInternalFrameTitlePane$Handler::addLayoutComponent($String* name, $Component* c) {
}

void BasicInternalFrameTitlePane$Handler::removeLayoutComponent($Component* c) {
}

$Dimension* BasicInternalFrameTitlePane$Handler::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

$Dimension* BasicInternalFrameTitlePane$Handler::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	int32_t width = 22;
	if ($nc(this->this$0->frame)->isClosable()) {
		width += 19;
	}
	if ($nc(this->this$0->frame)->isMaximizable()) {
		width += 19;
	}
	if ($nc(this->this$0->frame)->isIconifiable()) {
		width += 19;
	}
	$var($FontMetrics, fm, $nc(this->this$0->frame)->getFontMetrics($(this->this$0->getFont())));
	$var($String, frameTitle, $nc(this->this$0->frame)->getTitle());
	int32_t title_w = frameTitle != nullptr ? $SwingUtilities2::stringWidth(this->this$0->frame, fm, frameTitle) : 0;
	int32_t title_length = frameTitle != nullptr ? $nc(frameTitle)->length() : 0;
	if (title_length > 3) {
		int32_t subtitle_w = $SwingUtilities2::stringWidth(this->this$0->frame, fm, $$str({$(frameTitle->substring(0, 3)), "..."_s}));
		width += (title_w < subtitle_w) ? title_w : subtitle_w;
	} else {
		width += title_w;
	}
	$var($Icon, icon, $nc(this->this$0->frame)->getFrameIcon());
	int32_t fontHeight = $nc(fm)->getHeight();
	fontHeight += 2;
	int32_t iconHeight = 0;
	if (icon != nullptr) {
		iconHeight = $Math::min(icon->getIconHeight(), 16);
	}
	iconHeight += 2;
	int32_t height = $Math::max(fontHeight, iconHeight);
	$var($Dimension, dim, $new($Dimension, width, height));
	if (this->this$0->getBorder() != nullptr) {
		$var($Insets, insets, $nc($(this->this$0->getBorder()))->getBorderInsets(c));
		dim->height += $nc(insets)->top + insets->bottom;
		dim->width += insets->left + insets->right;
	}
	return dim;
}

void BasicInternalFrameTitlePane$Handler::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $BasicGraphicsUtils::isLeftToRight(this->this$0->frame);
	int32_t w = this->this$0->getWidth();
	int32_t h = this->this$0->getHeight();
	int32_t x = 0;
	int32_t buttonHeight = $nc($($nc(this->this$0->closeButton)->getIcon()))->getIconHeight();
	$var($Icon, icon, $nc(this->this$0->frame)->getFrameIcon());
	int32_t iconHeight = 0;
	if (icon != nullptr) {
		iconHeight = icon->getIconHeight();
	}
	x = (leftToRight) ? 2 : w - 16 - 2;
	$nc(this->this$0->menuBar)->setBounds(x, (h - iconHeight) / 2, 16, 16);
	x = (leftToRight) ? w - 16 - 2 : 2;
	if ($nc(this->this$0->frame)->isClosable()) {
		$nc(this->this$0->closeButton)->setBounds(x, (h - buttonHeight) / 2, 16, 14);
		x += (leftToRight) ? -(16 + 2) : 16 + 2;
	}
	if ($nc(this->this$0->frame)->isMaximizable()) {
		$nc(this->this$0->maxButton)->setBounds(x, (h - buttonHeight) / 2, 16, 14);
		x += (leftToRight) ? -(16 + 2) : 16 + 2;
	}
	if ($nc(this->this$0->frame)->isIconifiable()) {
		$nc(this->this$0->iconButton)->setBounds(x, (h - buttonHeight) / 2, 16, 14);
	}
}

BasicInternalFrameTitlePane$Handler::BasicInternalFrameTitlePane$Handler() {
}

$Class* BasicInternalFrameTitlePane$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$Handler, name, initialize, &_BasicInternalFrameTitlePane$Handler_ClassInfo_, allocate$BasicInternalFrameTitlePane$Handler);
	return class$;
}

$Class* BasicInternalFrameTitlePane$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax