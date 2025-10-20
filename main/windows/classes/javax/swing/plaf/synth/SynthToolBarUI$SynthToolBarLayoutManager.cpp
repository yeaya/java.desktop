#include <javax/swing/plaf/synth/SynthToolBarUI$SynthToolBarLayoutManager.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthToolBarUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box$Filler = ::javax::swing::Box$Filler;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar = ::javax::swing::JToolBar;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthToolBarUI = ::javax::swing::plaf::synth::SynthToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthToolBarUI$SynthToolBarLayoutManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthToolBarUI$SynthToolBarLayoutManager, this$0)},
	{}
};

$MethodInfo _SynthToolBarUI$SynthToolBarLayoutManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthToolBarUI;)V", nullptr, 0, $method(static_cast<void(SynthToolBarUI$SynthToolBarLayoutManager::*)($SynthToolBarUI*)>(&SynthToolBarUI$SynthToolBarLayoutManager::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"isGlue", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SynthToolBarUI$SynthToolBarLayoutManager::*)($Component*)>(&SynthToolBarUI$SynthToolBarLayoutManager::isGlue))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthToolBarUI$SynthToolBarLayoutManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthToolBarUI$SynthToolBarLayoutManager", "javax.swing.plaf.synth.SynthToolBarUI", "SynthToolBarLayoutManager", 0},
	{}
};

$ClassInfo _SynthToolBarUI$SynthToolBarLayoutManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthToolBarUI$SynthToolBarLayoutManager",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_SynthToolBarUI$SynthToolBarLayoutManager_FieldInfo_,
	_SynthToolBarUI$SynthToolBarLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_SynthToolBarUI$SynthToolBarLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthToolBarUI"
};

$Object* allocate$SynthToolBarUI$SynthToolBarLayoutManager($Class* clazz) {
	return $of($alloc(SynthToolBarUI$SynthToolBarLayoutManager));
}

void SynthToolBarUI$SynthToolBarLayoutManager::init$($SynthToolBarUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthToolBarUI$SynthToolBarLayoutManager::addLayoutComponent($String* name, $Component* comp) {
}

void SynthToolBarUI$SynthToolBarLayoutManager::removeLayoutComponent($Component* comp) {
}

$Dimension* SynthToolBarUI$SynthToolBarLayoutManager::minimumLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JToolBar, tb, $cast($JToolBar, parent));
	$var($Insets, insets, $nc(tb)->getInsets());
	$var($Dimension, dim, $new($Dimension));
	$var($SynthContext, context, this->this$0->getContext(tb));
	if (tb->getOrientation() == $JToolBar::HORIZONTAL) {
		dim->width = tb->isFloatable() ? $SynthGraphicsUtils::getIconWidth(this->this$0->handleIcon, context) : 0;
		$var($Dimension, compDim, nullptr);
		for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
			$var($Component, component, tb->getComponent(i));
			if ($nc(component)->isVisible()) {
				$assign(compDim, component->getMinimumSize());
				dim->width += $nc(compDim)->width;
				dim->height = $Math::max(dim->height, compDim->height);
			}
		}
	} else {
		dim->height = tb->isFloatable() ? $SynthGraphicsUtils::getIconHeight(this->this$0->handleIcon, context) : 0;
		$var($Dimension, compDim, nullptr);
		for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
			$var($Component, component, tb->getComponent(i));
			if ($nc(component)->isVisible()) {
				$assign(compDim, component->getMinimumSize());
				dim->width = $Math::max(dim->width, $nc(compDim)->width);
				dim->height += $nc(compDim)->height;
			}
		}
	}
	dim->width += $nc(insets)->left + insets->right;
	dim->height += insets->top + insets->bottom;
	return dim;
}

$Dimension* SynthToolBarUI$SynthToolBarLayoutManager::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JToolBar, tb, $cast($JToolBar, parent));
	$var($Insets, insets, $nc(tb)->getInsets());
	$var($Dimension, dim, $new($Dimension));
	$var($SynthContext, context, this->this$0->getContext(tb));
	if (tb->getOrientation() == $JToolBar::HORIZONTAL) {
		dim->width = tb->isFloatable() ? $SynthGraphicsUtils::getIconWidth(this->this$0->handleIcon, context) : 0;
		$var($Dimension, compDim, nullptr);
		for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
			$var($Component, component, tb->getComponent(i));
			if ($nc(component)->isVisible()) {
				$assign(compDim, component->getPreferredSize());
				dim->width += $nc(compDim)->width;
				dim->height = $Math::max(dim->height, compDim->height);
			}
		}
	} else {
		dim->height = tb->isFloatable() ? $SynthGraphicsUtils::getIconHeight(this->this$0->handleIcon, context) : 0;
		$var($Dimension, compDim, nullptr);
		for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
			$var($Component, component, tb->getComponent(i));
			if ($nc(component)->isVisible()) {
				$assign(compDim, component->getPreferredSize());
				dim->width = $Math::max(dim->width, $nc(compDim)->width);
				dim->height += $nc(compDim)->height;
			}
		}
	}
	dim->width += $nc(insets)->left + insets->right;
	dim->height += insets->top + insets->bottom;
	return dim;
}

void SynthToolBarUI$SynthToolBarLayoutManager::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JToolBar, tb, $cast($JToolBar, parent));
	$var($Insets, insets, $nc(tb)->getInsets());
	bool ltr = $nc($(tb->getComponentOrientation()))->isLeftToRight();
	$var($SynthContext, context, this->this$0->getContext(tb));
	$var($Component, c, nullptr);
	$var($Dimension, d, nullptr);
	int32_t glueCount = 0;
	for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
		if (isGlue($(tb->getComponent(i)))) {
			++glueCount;
		}
	}
	if (tb->getOrientation() == $JToolBar::HORIZONTAL) {
		int32_t handleWidth = tb->isFloatable() ? $SynthGraphicsUtils::getIconWidth(this->this$0->handleIcon, context) : 0;
		$nc(this->this$0->contentRect)->x = ltr ? handleWidth : 0;
		$nc(this->this$0->contentRect)->y = 0;
		$nc(this->this$0->contentRect)->width = tb->getWidth() - handleWidth;
		$nc(this->this$0->contentRect)->height = tb->getHeight();
		int32_t x = ltr ? handleWidth + $nc(insets)->left : tb->getWidth() - handleWidth - insets->right;
		int32_t baseY = insets->top;
		int32_t baseH = tb->getHeight() - insets->top - insets->bottom;
		int32_t extraSpacePerGlue = 0;
		if (glueCount > 0) {
			int32_t minWidth = $nc($(preferredLayoutSize(parent)))->width;
			extraSpacePerGlue = $div((tb->getWidth() - minWidth), glueCount);
			if (extraSpacePerGlue < 0) {
				extraSpacePerGlue = 0;
			}
		}
		for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
			$assign(c, tb->getComponent(i));
			if ($nc(c)->isVisible()) {
				$assign(d, c->getPreferredSize());
				int32_t y = 0;
				int32_t h = 0;
				if ($nc(d)->height >= baseH || $instanceOf($JSeparator, c)) {
					y = baseY;
					h = baseH;
				} else {
					y = baseY + (baseH / 2) - ($nc(d)->height / 2);
					h = d->height;
				}
				if (isGlue(c)) {
					$nc(d)->width += extraSpacePerGlue;
				}
				c->setBounds(ltr ? x : x - $nc(d)->width, y, d->width, h);
				x = ltr ? x + $nc(d)->width : x - d->width;
			}
		}
	} else {
		int32_t handleHeight = tb->isFloatable() ? $SynthGraphicsUtils::getIconHeight(this->this$0->handleIcon, context) : 0;
		$nc(this->this$0->contentRect)->x = 0;
		$nc(this->this$0->contentRect)->y = handleHeight;
		$nc(this->this$0->contentRect)->width = tb->getWidth();
		$nc(this->this$0->contentRect)->height = tb->getHeight() - handleHeight;
		int32_t baseX = $nc(insets)->left;
		int32_t baseW = tb->getWidth() - insets->left - insets->right;
		int32_t y = handleHeight + insets->top;
		int32_t extraSpacePerGlue = 0;
		if (glueCount > 0) {
			int32_t minHeight = $nc($(minimumLayoutSize(parent)))->height;
			extraSpacePerGlue = $div((tb->getHeight() - minHeight), glueCount);
			if (extraSpacePerGlue < 0) {
				extraSpacePerGlue = 0;
			}
		}
		for (int32_t i = 0; i < tb->getComponentCount(); ++i) {
			$assign(c, tb->getComponent(i));
			if ($nc(c)->isVisible()) {
				$assign(d, c->getPreferredSize());
				int32_t x = 0;
				int32_t w = 0;
				if ($nc(d)->width >= baseW || $instanceOf($JSeparator, c)) {
					x = baseX;
					w = baseW;
				} else {
					x = baseX + (baseW / 2) - ($nc(d)->width / 2);
					w = d->width;
				}
				if (isGlue(c)) {
					$nc(d)->height += extraSpacePerGlue;
				}
				c->setBounds(x, y, w, $nc(d)->height);
				y += $nc(d)->height;
			}
		}
	}
}

bool SynthToolBarUI$SynthToolBarLayoutManager::isGlue($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($nc(c)->isVisible() && $instanceOf($Box$Filler, c)) {
		$var($Box$Filler, f, $cast($Box$Filler, c));
		$var($Dimension, min, f->getMinimumSize());
		$var($Dimension, pref, f->getPreferredSize());
		return $nc(min)->width == 0 && min->height == 0 && $nc(pref)->width == 0 && pref->height == 0;
	}
	return false;
}

SynthToolBarUI$SynthToolBarLayoutManager::SynthToolBarUI$SynthToolBarLayoutManager() {
}

$Class* SynthToolBarUI$SynthToolBarLayoutManager::load$($String* name, bool initialize) {
	$loadClass(SynthToolBarUI$SynthToolBarLayoutManager, name, initialize, &_SynthToolBarUI$SynthToolBarLayoutManager_ClassInfo_, allocate$SynthToolBarUI$SynthToolBarLayoutManager);
	return class$;
}

$Class* SynthToolBarUI$SynthToolBarLayoutManager::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax