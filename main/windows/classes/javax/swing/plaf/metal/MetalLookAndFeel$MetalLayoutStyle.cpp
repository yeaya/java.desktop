#include <javax/swing/plaf/metal/MetalLookAndFeel$MetalLayoutStyle.h>

#include <java/awt/Container.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$1.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <jcpp.h>

#undef EAST
#undef INSTANCE
#undef SOUTH
#undef WEST

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalLookAndFeel$1 = ::javax::swing::plaf::metal::MetalLookAndFeel$1;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalLookAndFeel$MetalLayoutStyle_FieldInfo_[] = {
	{"INSTANCE", "Ljavax/swing/plaf/metal/MetalLookAndFeel$MetalLayoutStyle;", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel$MetalLayoutStyle, INSTANCE)},
	{}
};

$MethodInfo _MetalLookAndFeel$MetalLayoutStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalLookAndFeel$MetalLayoutStyle::*)()>(&MetalLookAndFeel$MetalLayoutStyle::init$))},
	{"getButtonAdjustment", "(Ljavax/swing/JComponent;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalLookAndFeel$MetalLayoutStyle::*)($JComponent*,int32_t)>(&MetalLookAndFeel$MetalLayoutStyle::getButtonAdjustment))},
	{"getButtonGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;II)I", nullptr, $PROTECTED},
	{"getContainerGap", "(Ljavax/swing/JComponent;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{"getPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;ILjava/awt/Container;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalLookAndFeel$MetalLayoutStyle_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle", "javax.swing.plaf.metal.MetalLookAndFeel", "MetalLayoutStyle", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalLookAndFeel$MetalLayoutStyle_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle",
	"sun.swing.DefaultLayoutStyle",
	nullptr,
	_MetalLookAndFeel$MetalLayoutStyle_FieldInfo_,
	_MetalLookAndFeel$MetalLayoutStyle_MethodInfo_,
	nullptr,
	nullptr,
	_MetalLookAndFeel$MetalLayoutStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalLookAndFeel"
};

$Object* allocate$MetalLookAndFeel$MetalLayoutStyle($Class* clazz) {
	return $of($alloc(MetalLookAndFeel$MetalLayoutStyle));
}

MetalLookAndFeel$MetalLayoutStyle* MetalLookAndFeel$MetalLayoutStyle::INSTANCE = nullptr;

void MetalLookAndFeel$MetalLayoutStyle::init$() {
	$DefaultLayoutStyle::init$();
}

int32_t MetalLookAndFeel$MetalLayoutStyle::getPreferredGap($JComponent* component1, $JComponent* component2, $LayoutStyle$ComponentPlacement* type, int32_t position, $Container* parent) {
	$useLocalCurrentObjectStackCache();
	$DefaultLayoutStyle::getPreferredGap(component1, component2, type, position, parent);
	int32_t offset = 0;
	$init($MetalLookAndFeel$1);
	switch ($nc($MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->get($nc((type))->ordinal())) {
	case 1:
		{
			if (position == $SwingConstants::EAST || position == $SwingConstants::WEST) {
				int32_t indent = getIndent(component1, position);
				if (indent > 0) {
					return indent;
				}
				return 12;
			}
		}
	case 2:
		{
			bool var$0 = $nc(component1)->getUIClassID() == "ToggleButtonUI"_s;
			if (var$0 && $nc(component2)->getUIClassID() == "ToggleButtonUI"_s) {
				$var($ButtonModel, sourceModel, $nc(($cast($JToggleButton, component1)))->getModel());
				$var($ButtonModel, targetModel, $nc(($cast($JToggleButton, component2)))->getModel());
				bool var$2 = ($instanceOf($DefaultButtonModel, sourceModel)) && ($instanceOf($DefaultButtonModel, targetModel));
				if (var$2) {
					var$2 = ($nc(($cast($DefaultButtonModel, sourceModel)))->getGroup() == $nc(($cast($DefaultButtonModel, targetModel)))->getGroup());
				}
				bool var$1 = var$2;
				if (var$1 && $nc(($cast($DefaultButtonModel, sourceModel)))->getGroup() != nullptr) {
					return 2;
				}
				if ($MetalLookAndFeel::usingOcean()) {
					return 6;
				}
				return 5;
			}
			offset = 6;
			break;
		}
	case 3:
		{
			offset = 12;
			break;
		}
	}
	if (isLabelAndNonlabel(component1, component2, position)) {
		return getButtonGap(component1, component2, position, offset + 6);
	}
	return getButtonGap(component1, component2, position, offset);
}

int32_t MetalLookAndFeel$MetalLayoutStyle::getContainerGap($JComponent* component, int32_t position, $Container* parent) {
	$DefaultLayoutStyle::getContainerGap(component, position, parent);
	return getButtonGap(component, position, 12 - getButtonAdjustment(component, position));
}

int32_t MetalLookAndFeel$MetalLayoutStyle::getButtonGap($JComponent* source, $JComponent* target, int32_t position, int32_t offset) {
	offset = $DefaultLayoutStyle::getButtonGap(source, target, position, offset);
	if (offset > 0) {
		int32_t buttonAdjustment = getButtonAdjustment(source, position);
		if (buttonAdjustment == 0) {
			buttonAdjustment = getButtonAdjustment(target, flipDirection(position));
		}
		offset -= buttonAdjustment;
	}
	if (offset < 0) {
		return 0;
	}
	return offset;
}

int32_t MetalLookAndFeel$MetalLayoutStyle::getButtonAdjustment($JComponent* source, int32_t edge) {
	$useLocalCurrentObjectStackCache();
	$var($String, classID, $nc(source)->getUIClassID());
	if (classID == "ButtonUI"_s || classID == "ToggleButtonUI"_s) {
		if (!$MetalLookAndFeel::usingOcean() && (edge == $SwingConstants::EAST || edge == $SwingConstants::SOUTH)) {
			if ($instanceOf($UIResource, $(source->getBorder()))) {
				return 1;
			}
		}
	} else if (edge == $SwingConstants::SOUTH) {
		if ((classID == "RadioButtonUI"_s || classID == "CheckBoxUI"_s) && !$MetalLookAndFeel::usingOcean()) {
			return 1;
		}
	}
	return 0;
}

void clinit$MetalLookAndFeel$MetalLayoutStyle($Class* class$) {
	$assignStatic(MetalLookAndFeel$MetalLayoutStyle::INSTANCE, $new(MetalLookAndFeel$MetalLayoutStyle));
}

MetalLookAndFeel$MetalLayoutStyle::MetalLookAndFeel$MetalLayoutStyle() {
}

$Class* MetalLookAndFeel$MetalLayoutStyle::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$MetalLayoutStyle, name, initialize, &_MetalLookAndFeel$MetalLayoutStyle_ClassInfo_, clinit$MetalLookAndFeel$MetalLayoutStyle, allocate$MetalLookAndFeel$MetalLayoutStyle);
	return class$;
}

$Class* MetalLookAndFeel$MetalLayoutStyle::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax