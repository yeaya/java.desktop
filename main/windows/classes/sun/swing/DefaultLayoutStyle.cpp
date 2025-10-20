#include <sun/swing/DefaultLayoutStyle.h>

#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef EAST
#undef INDENT
#undef INSTANCE
#undef LEADING
#undef LEFT
#undef NORTH
#undef RIGHT
#undef SOUTH
#undef TRAILING
#undef UNRELATED
#undef WEST

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace sun {
	namespace swing {

$FieldInfo _DefaultLayoutStyle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultLayoutStyle, $assertionsDisabled)},
	{"INSTANCE", "Lsun/swing/DefaultLayoutStyle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultLayoutStyle, INSTANCE)},
	{}
};

$MethodInfo _DefaultLayoutStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultLayoutStyle::*)()>(&DefaultLayoutStyle::init$))},
	{"checkPosition", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultLayoutStyle::*)(int32_t)>(&DefaultLayoutStyle::checkPosition))},
	{"flipDirection", "(I)I", nullptr, $PROTECTED},
	{"getButtonGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;II)I", nullptr, $PROTECTED},
	{"getButtonGap", "(Ljavax/swing/JComponent;II)I", nullptr, $PROTECTED},
	{"getButtonGap", "(Ljavax/swing/JComponent;I)I", nullptr, $PUBLIC},
	{"getContainerGap", "(Ljavax/swing/JComponent;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{"getIcon", "(Ljavax/swing/AbstractButton;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(DefaultLayoutStyle::*)($AbstractButton*)>(&DefaultLayoutStyle::getIcon))},
	{"getIndent", "(Ljavax/swing/JComponent;I)I", nullptr, $PROTECTED},
	{"getInset", "(Ljavax/swing/JComponent;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultLayoutStyle::*)($JComponent*,int32_t)>(&DefaultLayoutStyle::getInset))},
	{"getInset", "(Ljava/awt/Insets;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultLayoutStyle::*)($Insets*,int32_t)>(&DefaultLayoutStyle::getInset))},
	{"getInstance", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LayoutStyle*(*)()>(&DefaultLayoutStyle::getInstance))},
	{"getPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{"isLabelAndNonlabel", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;I)Z", nullptr, $PROTECTED},
	{"isLeftAligned", "(Ljavax/swing/AbstractButton;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultLayoutStyle::*)($AbstractButton*,int32_t)>(&DefaultLayoutStyle::isLeftAligned))},
	{"isRightAligned", "(Ljavax/swing/AbstractButton;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(DefaultLayoutStyle::*)($AbstractButton*,int32_t)>(&DefaultLayoutStyle::isRightAligned))},
	{}
};

$ClassInfo _DefaultLayoutStyle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.DefaultLayoutStyle",
	"javax.swing.LayoutStyle",
	nullptr,
	_DefaultLayoutStyle_FieldInfo_,
	_DefaultLayoutStyle_MethodInfo_
};

$Object* allocate$DefaultLayoutStyle($Class* clazz) {
	return $of($alloc(DefaultLayoutStyle));
}

bool DefaultLayoutStyle::$assertionsDisabled = false;
DefaultLayoutStyle* DefaultLayoutStyle::INSTANCE = nullptr;

void DefaultLayoutStyle::init$() {
	$LayoutStyle::init$();
}

$LayoutStyle* DefaultLayoutStyle::getInstance() {
	$init(DefaultLayoutStyle);
	return DefaultLayoutStyle::INSTANCE;
}

int32_t DefaultLayoutStyle::getPreferredGap($JComponent* component1, $JComponent* component2, $LayoutStyle$ComponentPlacement* type, int32_t position, $Container* parent) {
	if (component1 == nullptr || component2 == nullptr || type == nullptr) {
		$throwNew($NullPointerException);
	}
	checkPosition(position);
	$init($LayoutStyle$ComponentPlacement);
	if (type == $LayoutStyle$ComponentPlacement::INDENT && (position == $SwingConstants::EAST || position == $SwingConstants::WEST)) {
		int32_t indent = getIndent(component1, position);
		if (indent > 0) {
			return indent;
		}
	}
	return (type == $LayoutStyle$ComponentPlacement::UNRELATED) ? 12 : 6;
}

int32_t DefaultLayoutStyle::getContainerGap($JComponent* component, int32_t position, $Container* parent) {
	if (component == nullptr) {
		$throwNew($NullPointerException);
	}
	checkPosition(position);
	return 6;
}

bool DefaultLayoutStyle::isLabelAndNonlabel($JComponent* c1, $JComponent* c2, int32_t position) {
	if (position == $SwingConstants::EAST || position == $SwingConstants::WEST) {
		bool c1Label = ($instanceOf($JLabel, c1));
		bool c2Label = ($instanceOf($JLabel, c2));
		return ((c1Label || c2Label) && (c1Label != c2Label));
	}
	return false;
}

int32_t DefaultLayoutStyle::getButtonGap($JComponent* source, $JComponent* target, int32_t position, int32_t offset) {
	offset -= getButtonGap(source, position);
	if (offset > 0) {
		offset -= getButtonGap(target, flipDirection(position));
	}
	if (offset < 0) {
		return 0;
	}
	return offset;
}

int32_t DefaultLayoutStyle::getButtonGap($JComponent* source, int32_t position, int32_t offset) {
	offset -= getButtonGap(source, position);
	return $Math::max(offset, 0);
}

int32_t DefaultLayoutStyle::getButtonGap($JComponent* c, int32_t position) {
	$useLocalCurrentObjectStackCache();
	$var($String, classID, $nc(c)->getUIClassID());
	if ((classID == "CheckBoxUI"_s || classID == "RadioButtonUI"_s) && !$nc(($cast($AbstractButton, c)))->isBorderPainted()) {
		$var($Border, border, c->getBorder());
		if ($instanceOf($UIResource, border)) {
			return getInset(c, position);
		}
	}
	return 0;
}

void DefaultLayoutStyle::checkPosition(int32_t position) {
	if (position != $SwingConstants::NORTH && position != $SwingConstants::SOUTH && position != $SwingConstants::WEST && position != $SwingConstants::EAST) {
		$throwNew($IllegalArgumentException);
	}
}

int32_t DefaultLayoutStyle::flipDirection(int32_t position) {
	switch (position) {
	case $SwingConstants::NORTH:
		{
			return $SwingConstants::SOUTH;
		}
	case $SwingConstants::SOUTH:
		{
			return $SwingConstants::NORTH;
		}
	case $SwingConstants::EAST:
		{
			return $SwingConstants::WEST;
		}
	case $SwingConstants::WEST:
		{
			return $SwingConstants::EAST;
		}
	}
	if (!DefaultLayoutStyle::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return 0;
}

int32_t DefaultLayoutStyle::getIndent($JComponent* c, int32_t position) {
	$useLocalCurrentObjectStackCache();
	$var($String, classID, $nc(c)->getUIClassID());
	if (classID == "CheckBoxUI"_s || classID == "RadioButtonUI"_s) {
		$var($AbstractButton, button, $cast($AbstractButton, c));
		$var($Insets, insets, c->getInsets());
		$var($Icon, icon, getIcon(button));
		int32_t gap = button->getIconTextGap();
		if (isLeftAligned(button, position)) {
			return $nc(insets)->left + $nc(icon)->getIconWidth() + gap;
		} else if (isRightAligned(button, position)) {
			return $nc(insets)->right + $nc(icon)->getIconWidth() + gap;
		}
	}
	return 0;
}

$Icon* DefaultLayoutStyle::getIcon($AbstractButton* button) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, $nc(button)->getIcon());
	if (icon != nullptr) {
		return icon;
	}
	$var($String, key, nullptr);
	if ($instanceOf($JCheckBox, button)) {
		$assign(key, "CheckBox.icon"_s);
	} else if ($instanceOf($JRadioButton, button)) {
		$assign(key, "RadioButton.icon"_s);
	}
	if (key != nullptr) {
		$var($Object, oIcon, $UIManager::get(key));
		if ($instanceOf($Icon, oIcon)) {
			return $cast($Icon, oIcon);
		}
	}
	return nullptr;
}

bool DefaultLayoutStyle::isLeftAligned($AbstractButton* button, int32_t position) {
	if (position == $SwingConstants::WEST) {
		bool ltr = $nc($($nc(button)->getComponentOrientation()))->isLeftToRight();
		int32_t hAlign = button->getHorizontalAlignment();
		return ((ltr && (hAlign == $SwingConstants::LEFT || hAlign == $SwingConstants::LEADING)) || (!ltr && (hAlign == $SwingConstants::TRAILING)));
	}
	return false;
}

bool DefaultLayoutStyle::isRightAligned($AbstractButton* button, int32_t position) {
	if (position == $SwingConstants::EAST) {
		bool ltr = $nc($($nc(button)->getComponentOrientation()))->isLeftToRight();
		int32_t hAlign = button->getHorizontalAlignment();
		return ((ltr && (hAlign == $SwingConstants::RIGHT || hAlign == $SwingConstants::TRAILING)) || (!ltr && (hAlign == $SwingConstants::LEADING)));
	}
	return false;
}

int32_t DefaultLayoutStyle::getInset($JComponent* c, int32_t position) {
	return getInset($($nc(c)->getInsets()), position);
}

int32_t DefaultLayoutStyle::getInset($Insets* insets, int32_t position) {
	if (insets == nullptr) {
		return 0;
	}
	switch (position) {
	case $SwingConstants::NORTH:
		{
			return $nc(insets)->top;
		}
	case $SwingConstants::SOUTH:
		{
			return $nc(insets)->bottom;
		}
	case $SwingConstants::EAST:
		{
			return $nc(insets)->right;
		}
	case $SwingConstants::WEST:
		{
			return $nc(insets)->left;
		}
	}
	if (!DefaultLayoutStyle::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return 0;
}

void clinit$DefaultLayoutStyle($Class* class$) {
	DefaultLayoutStyle::$assertionsDisabled = !DefaultLayoutStyle::class$->desiredAssertionStatus();
	$assignStatic(DefaultLayoutStyle::INSTANCE, $new(DefaultLayoutStyle));
}

DefaultLayoutStyle::DefaultLayoutStyle() {
}

$Class* DefaultLayoutStyle::load$($String* name, bool initialize) {
	$loadClass(DefaultLayoutStyle, name, initialize, &_DefaultLayoutStyle_ClassInfo_, clinit$DefaultLayoutStyle, allocate$DefaultLayoutStyle);
	return class$;
}

$Class* DefaultLayoutStyle::class$ = nullptr;

	} // swing
} // sun