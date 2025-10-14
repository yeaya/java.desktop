#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTreeUI.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef TREE_CELL

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTree = ::javax::swing::JTree;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTreeUI = ::javax::swing::plaf::synth::SynthTreeUI;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTreeUI$SynthTreeCellRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTreeUI$SynthTreeCellRenderer, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthTreeUI$SynthTreeCellRenderer, $assertionsDisabled)},
	{}
};

$MethodInfo _SynthTreeUI$SynthTreeCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTreeUI;)V", nullptr, 0, $method(static_cast<void(SynthTreeUI$SynthTreeCellRenderer::*)($SynthTreeUI*)>(&SynthTreeUI$SynthTreeCellRenderer::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthTreeUI$SynthTreeCellRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer", "javax.swing.plaf.synth.SynthTreeUI", "SynthTreeCellRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthTreeUI$SynthTreeCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer",
	"javax.swing.tree.DefaultTreeCellRenderer",
	"javax.swing.plaf.UIResource",
	_SynthTreeUI$SynthTreeCellRenderer_FieldInfo_,
	_SynthTreeUI$SynthTreeCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTreeUI$SynthTreeCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTreeUI"
};

$Object* allocate$SynthTreeUI$SynthTreeCellRenderer($Class* clazz) {
	return $of($alloc(SynthTreeUI$SynthTreeCellRenderer));
}

$String* SynthTreeUI$SynthTreeCellRenderer::toString() {
	 return this->$DefaultTreeCellRenderer::toString();
}

int32_t SynthTreeUI$SynthTreeCellRenderer::hashCode() {
	 return this->$DefaultTreeCellRenderer::hashCode();
}

bool SynthTreeUI$SynthTreeCellRenderer::equals(Object$* arg0) {
	 return this->$DefaultTreeCellRenderer::equals(arg0);
}

$Object* SynthTreeUI$SynthTreeCellRenderer::clone() {
	 return this->$DefaultTreeCellRenderer::clone();
}

void SynthTreeUI$SynthTreeCellRenderer::finalize() {
	this->$DefaultTreeCellRenderer::finalize();
}

bool SynthTreeUI$SynthTreeCellRenderer::$assertionsDisabled = false;

void SynthTreeUI$SynthTreeCellRenderer::init$($SynthTreeUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTreeCellRenderer::init$();
}

$String* SynthTreeUI$SynthTreeCellRenderer::getName() {
	return "Tree.cellRenderer"_s;
}

$Component* SynthTreeUI$SynthTreeCellRenderer::getTreeCellRendererComponent($JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	if (!this->this$0->useTreeColors && (sel || hasFocus)) {
		$load($SynthLabelUI);
		$var($ComponentUI, var$0, $cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)));
		bool var$1 = sel;
		bool var$2 = hasFocus;
		$SynthLookAndFeel::setSelectedUI(var$0, var$1, var$2, $nc(tree)->isEnabled(), false);
	} else {
		$SynthLookAndFeel::resetSelectedUI();
	}
	return $DefaultTreeCellRenderer::getTreeCellRendererComponent(tree, value, sel, expanded, leaf, row, hasFocus);
}

void SynthTreeUI$SynthTreeCellRenderer::paint($Graphics* g) {
	paintComponent(g);
	if (this->hasFocus$) {
		$init($Region);
		$var($SynthContext, context, this->this$0->getContext($(static_cast<$JComponent*>($SynthTreeUI::access$000(this->this$0))), $Region::TREE_CELL));
		if ($nc(context)->getStyle() == nullptr) {
			if (!SynthTreeUI$SynthTreeCellRenderer::$assertionsDisabled) {
				$throwNew($AssertionError, $of("SynthTreeCellRenderer is being used outside of UI that created it"_s));
			}
			return;
		}
		int32_t imageOffset = 0;
		$var($Icon, currentI, getIcon());
		if (currentI != nullptr && getText() != nullptr) {
			int32_t var$0 = currentI->getIconWidth();
			imageOffset = var$0 + $Math::max(0, getIconTextGap() - 1);
		}
		if (this->selected) {
			$nc(context)->setComponentState(1 | 512);
		} else {
			$nc(context)->setComponentState(1);
		}
		if ($nc($(getComponentOrientation()))->isLeftToRight()) {
			$var($SynthContext, var$1, context);
			$var($Graphics, var$2, g);
			int32_t var$3 = imageOffset;
			int32_t var$4 = getWidth() - imageOffset;
			$nc($($nc(context)->getPainter()))->paintTreeCellFocus(var$1, var$2, var$3, 0, var$4, getHeight());
		} else {
			$var($SynthContext, var$5, context);
			$var($Graphics, var$6, g);
			int32_t var$7 = getWidth() - imageOffset;
			$nc($($nc(context)->getPainter()))->paintTreeCellFocus(var$5, var$6, 0, 0, var$7, getHeight());
		}
	}
	$SynthLookAndFeel::resetSelectedUI();
}

void clinit$SynthTreeUI$SynthTreeCellRenderer($Class* class$) {
	$load($SynthTreeUI);
	SynthTreeUI$SynthTreeCellRenderer::$assertionsDisabled = !$SynthTreeUI::class$->desiredAssertionStatus();
}

SynthTreeUI$SynthTreeCellRenderer::SynthTreeUI$SynthTreeCellRenderer() {
}

$Class* SynthTreeUI$SynthTreeCellRenderer::load$($String* name, bool initialize) {
	$loadClass(SynthTreeUI$SynthTreeCellRenderer, name, initialize, &_SynthTreeUI$SynthTreeCellRenderer_ClassInfo_, clinit$SynthTreeUI$SynthTreeCellRenderer, allocate$SynthTreeUI$SynthTreeCellRenderer);
	return class$;
}

$Class* SynthTreeUI$SynthTreeCellRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax