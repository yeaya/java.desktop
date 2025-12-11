#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$SynthTitlePaneLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthInternalFrameTitlePane = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthInternalFrameTitlePane$SynthTitlePaneLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(SynthInternalFrameTitlePane$SynthTitlePaneLayout, this$0)},
	{}
};

$MethodInfo _SynthInternalFrameTitlePane$SynthTitlePaneLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(SynthInternalFrameTitlePane$SynthTitlePaneLayout::*)($SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane$SynthTitlePaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"center", "(Ljava/awt/Component;Ljava/awt/Insets;IZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthInternalFrameTitlePane$SynthTitlePaneLayout::*)($Component*,$Insets*,int32_t,bool)>(&SynthInternalFrameTitlePane$SynthTitlePaneLayout::center))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthInternalFrameTitlePane$SynthTitlePaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$SynthTitlePaneLayout", "javax.swing.plaf.synth.SynthInternalFrameTitlePane", "SynthTitlePaneLayout", 0},
	{}
};

$ClassInfo _SynthInternalFrameTitlePane$SynthTitlePaneLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane$SynthTitlePaneLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_SynthInternalFrameTitlePane$SynthTitlePaneLayout_FieldInfo_,
	_SynthInternalFrameTitlePane$SynthTitlePaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_SynthInternalFrameTitlePane$SynthTitlePaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane"
};

$Object* allocate$SynthInternalFrameTitlePane$SynthTitlePaneLayout($Class* clazz) {
	return $of($alloc(SynthInternalFrameTitlePane$SynthTitlePaneLayout));
}

void SynthInternalFrameTitlePane$SynthTitlePaneLayout::init$($SynthInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void SynthInternalFrameTitlePane$SynthTitlePaneLayout::addLayoutComponent($String* name, $Component* c) {
}

void SynthInternalFrameTitlePane$SynthTitlePaneLayout::removeLayoutComponent($Component* c) {
}

$Dimension* SynthInternalFrameTitlePane$SynthTitlePaneLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

$Dimension* SynthInternalFrameTitlePane$SynthTitlePaneLayout::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, this->this$0->getContext(this->this$0));
	int32_t width = 0;
	int32_t height = 0;
	int32_t buttonCount = 0;
	$var($Dimension, pref, nullptr);
	if ($nc($($SynthInternalFrameTitlePane::access$100(this->this$0)))->isClosable()) {
		$assign(pref, $nc($($SynthInternalFrameTitlePane::access$200(this->this$0)))->getPreferredSize());
		width += $nc(pref)->width;
		height = $Math::max(pref->height, height);
		++buttonCount;
	}
	if ($nc($($SynthInternalFrameTitlePane::access$300(this->this$0)))->isMaximizable()) {
		$assign(pref, $nc($($SynthInternalFrameTitlePane::access$400(this->this$0)))->getPreferredSize());
		width += $nc(pref)->width;
		height = $Math::max(pref->height, height);
		++buttonCount;
	}
	if ($nc($($SynthInternalFrameTitlePane::access$500(this->this$0)))->isIconifiable()) {
		$assign(pref, $nc($($SynthInternalFrameTitlePane::access$600(this->this$0)))->getPreferredSize());
		width += $nc(pref)->width;
		height = $Math::max(pref->height, height);
		++buttonCount;
	}
	$assign(pref, $nc(this->this$0->menuButton)->getPreferredSize());
	width += $nc(pref)->width;
	height = $Math::max(pref->height, height);
	width += $Math::max(0, (buttonCount - 1) * this->this$0->buttonSpacing);
	$var($FontMetrics, fm, this->this$0->getFontMetrics($(this->this$0->getFont())));
	$var($SynthGraphicsUtils, graphicsUtils, $nc($($nc(context)->getStyle()))->getGraphicsUtils(context));
	$var($String, frameTitle, $nc($($SynthInternalFrameTitlePane::access$700(this->this$0)))->getTitle());
	int32_t title_w = frameTitle != nullptr ? $nc(graphicsUtils)->computeStringWidth(context, $($nc(fm)->getFont()), fm, frameTitle) : 0;
	int32_t title_length = frameTitle != nullptr ? $nc(frameTitle)->length() : 0;
	if (title_length > 3) {
		$var($SynthContext, var$0, context);
		$var($Font, var$1, $nc(fm)->getFont());
		$var($FontMetrics, var$2, fm);
		int32_t subtitle_w = graphicsUtils->computeStringWidth(var$0, var$1, var$2, $$str({$(frameTitle->substring(0, 3)), "..."_s}));
		width += (title_w < subtitle_w) ? title_w : subtitle_w;
	} else {
		width += title_w;
	}
	height = $Math::max($nc(fm)->getHeight() + 2, height);
	width += this->this$0->titleSpacing + this->this$0->titleSpacing;
	$var($Insets, insets, this->this$0->getInsets());
	height += $nc(insets)->top + insets->bottom;
	width += insets->left + insets->right;
	return $new($Dimension, width, height);
}

int32_t SynthInternalFrameTitlePane$SynthTitlePaneLayout::center($Component* c, $Insets* insets, int32_t x, bool trailing) {
	$var($Dimension, pref, $nc(c)->getPreferredSize());
	if (trailing) {
		x -= $nc(pref)->width;
	}
	c->setBounds(x, $nc(insets)->top + (this->this$0->getHeight() - insets->top - insets->bottom - $nc(pref)->height) / 2, pref->width, pref->height);
	if ($nc(pref)->width > 0) {
		if (trailing) {
			return x - this->this$0->buttonSpacing;
		}
		return x + pref->width + this->this$0->buttonSpacing;
	}
	return x;
}

void SynthInternalFrameTitlePane$SynthTitlePaneLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(c)->getInsets());
	$var($Dimension, pref, nullptr);
	if ($SynthLookAndFeel::isLeftToRight($($SynthInternalFrameTitlePane::access$800(this->this$0)))) {
		center(this->this$0->menuButton, insets, $nc(insets)->left, false);
		int32_t x = this->this$0->getWidth() - $nc(insets)->right;
		if ($nc($($SynthInternalFrameTitlePane::access$900(this->this$0)))->isClosable()) {
			x = center($($SynthInternalFrameTitlePane::access$1000(this->this$0)), insets, x, true);
		}
		if ($nc($($SynthInternalFrameTitlePane::access$1100(this->this$0)))->isMaximizable()) {
			x = center($($SynthInternalFrameTitlePane::access$1200(this->this$0)), insets, x, true);
		}
		if ($nc($($SynthInternalFrameTitlePane::access$1300(this->this$0)))->isIconifiable()) {
			x = center($($SynthInternalFrameTitlePane::access$1400(this->this$0)), insets, x, true);
		}
	} else {
		center(this->this$0->menuButton, insets, this->this$0->getWidth() - $nc(insets)->right, true);
		int32_t x = $nc(insets)->left;
		if ($nc($($SynthInternalFrameTitlePane::access$1500(this->this$0)))->isClosable()) {
			x = center($($SynthInternalFrameTitlePane::access$1600(this->this$0)), insets, x, false);
		}
		if ($nc($($SynthInternalFrameTitlePane::access$1700(this->this$0)))->isMaximizable()) {
			x = center($($SynthInternalFrameTitlePane::access$1800(this->this$0)), insets, x, false);
		}
		if ($nc($($SynthInternalFrameTitlePane::access$1900(this->this$0)))->isIconifiable()) {
			x = center($($SynthInternalFrameTitlePane::access$2000(this->this$0)), insets, x, false);
		}
	}
}

SynthInternalFrameTitlePane$SynthTitlePaneLayout::SynthInternalFrameTitlePane$SynthTitlePaneLayout() {
}

$Class* SynthInternalFrameTitlePane$SynthTitlePaneLayout::load$($String* name, bool initialize) {
	$loadClass(SynthInternalFrameTitlePane$SynthTitlePaneLayout, name, initialize, &_SynthInternalFrameTitlePane$SynthTitlePaneLayout_ClassInfo_, allocate$SynthInternalFrameTitlePane$SynthTitlePaneLayout);
	return class$;
}

$Class* SynthInternalFrameTitlePane$SynthTitlePaneLayout::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax